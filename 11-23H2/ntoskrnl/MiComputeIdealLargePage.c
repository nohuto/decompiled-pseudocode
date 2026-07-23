/*
 * XREFs of MiComputeIdealLargePage @ 0x140667C70
 * Callers:
 *     MiCreateLargePfnList @ 0x140667F3C (MiCreateLargePfnList.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiGetVadPte @ 0x140668F4C (MiGetVadPte.c)
 */

__int64 __fastcall MiComputeIdealLargePage(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 result; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 *v10; // r14
  unsigned __int64 VadPte; // rax
  __int64 v12; // r11
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r12
  __int64 v16; // r11
  __int64 v17; // r9
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  unsigned int v31; // [rsp+20h] [rbp-58h]
  unsigned __int64 v32; // [rsp+28h] [rbp-50h]
  __int64 v33; // [rsp+30h] [rbp-48h]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]
  unsigned __int64 valid; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 v36; // [rsp+80h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 48);
  result = ((unsigned __int64)v4 >> 19) & 3;
  v8 = MiVadPageSizes[result];
  if ( v8 >= 0x10 && (v4 & 0x800000) != 0 )
  {
    v9 = -1LL;
    v31 = MiVadPageIndices[result];
    v10 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
    VadPte = MiGetVadPte(a1);
    v13 = VadPte;
    v14 = v8;
    if ( v8 == 16 )
      v14 = 1LL;
    v32 = v14;
    v15 = v14 * (512 - ((VadPte >> 3) & 0x1FF));
    v33 = MiGetVadPte(v12);
    result = MiGetVadPte(v16);
    v34 = result;
    if ( v13 != v33 || a3 < v15 )
    {
      v36 = MiLockWorkingSetShared((__int64)v10);
      valid = MiLockLowestValidPageTable((__int64)v10, v13, &valid, v17);
      if ( valid == ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        if ( (v13 & 0xFFF) == 0 )
          goto LABEL_16;
        v18 = v13;
        v19 = v13;
        while ( 1 )
        {
          if ( v18 == v33 )
          {
LABEL_15:
            v14 = v32;
            goto LABEL_16;
          }
          v20 = 128LL;
          if ( v8 != 16 )
            v20 = 8LL;
          v18 = v19 - v20;
          v21 = MI_READ_PTE_LOCK_FREE(v19 - v20);
          if ( (v21 & 1) != 0 )
            break;
          v19 = v18;
          if ( (v18 & 0xFFF) == 0 )
            goto LABEL_15;
        }
        v28 = v13 - v18;
        v14 = v32;
        v9 = ((v21 >> 12) & 0xFFFFFFFFFFLL) + v32 * (v28 >> 3);
        if ( v9 == -1 )
        {
LABEL_16:
          if ( a3 < v15 )
          {
            v22 = v13 + 8 * (a3 / v14);
            if ( (v22 & 0xFFF) != 0 )
            {
              v23 = v13 + 8 * (a3 / v14);
              v24 = v23;
              v25 = v22;
              while ( v23 < v34 )
              {
                v26 = MI_READ_PTE_LOCK_FREE(v22);
                if ( (v26 & 1) != 0 )
                {
                  v29 = v32 * ((__int64)(v25 - v13) >> 3);
                  v30 = (v26 >> 12) & 0xFFFFFFFFFFLL;
                  if ( v30 < v29 )
                    v9 = -1LL;
                  else
                    v9 = v30 - v29;
                  break;
                }
                v27 = 128LL;
                if ( v8 != 16 )
                  v27 = 8LL;
                v22 = v27 + v24;
                v23 = v22;
                v24 = v22;
                v25 = v22;
                if ( (v22 & 0xFFF) == 0 )
                  break;
              }
            }
          }
        }
      }
      MiUnlockPageTableInternal((__int64)v10, valid);
      result = MiUnlockWorkingSetShared((__int64)v10, v36);
      if ( v9 != -1 )
      {
        result = v31;
        *(_DWORD *)(a4 + 48) = v31;
        *(_QWORD *)(a4 + 40) = v9;
      }
    }
  }
  return result;
}
