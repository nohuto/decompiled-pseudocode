/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x14028AF30
 * Callers:
 *     MiRemoveVad @ 0x14028A700 (MiRemoveVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14033D1CC (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x140237350 (MiFastLockLeafPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiFillPteHierarchy @ 0x14028B180 (MiFillPteHierarchy.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiCaptureDeleteHierarchy(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r13
  unsigned __int8 v6; // si
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 *v11; // r14
  int v12; // r15d
  ULONG_PTR v13; // rbp
  int SystemAddressValid; // r12d
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // r13d
  int v18; // ecx
  __int64 v20; // [rsp+30h] [rbp-88h]
  _OWORD v21[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v22; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-50h]

  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)a4 = 0;
  v5 = a4;
  v6 = a3;
  v20 = (__int64)&CurrentThread->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  MiFillPteHierarchy(a1, v21);
  MiFillPteHierarchy(v7, &v22);
  v9 = 0;
LABEL_2:
  v10 = 3LL;
  v11 = (__int64 *)&v21[2 * v9];
  v12 = 3;
  while ( 1 )
  {
    v13 = v11[v10];
    if ( v10 == 3 && (unsigned int)MiFastLockLeafPageTable(v8, *v11 << 25 >> 16, 8) == 2 )
    {
      v13 = v11[1];
      v10 = 1LL;
      v12 = 1;
      SystemAddressValid = 0;
    }
    else
    {
      SystemAddressValid = MiMakeSystemAddressValid(v13, 0LL, 0, v6, 8);
      if ( SystemAddressValid < 0 )
      {
        v15 = 0LL;
        goto LABEL_19;
      }
    }
    v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = MI_READ_PTE_LOCK_FREE(v13);
    if ( v16 )
    {
      v17 = 0;
      v18 = v12 - 1;
      goto LABEL_8;
    }
LABEL_19:
    v18 = v12 - 1;
    LOBYTE(v16) = v9;
    v12 = v18;
    *(_BYTE *)(v9 + v5) = 1 << v18;
    v17 = 1;
    if ( !v9 && !v15 )
      break;
LABEL_8:
    v12 = v18;
    if ( !v9 )
      goto LABEL_9;
LABEL_13:
    if ( v15 )
      LOBYTE(v16) = MiUnlockPageTableInternal(v20, v15);
    if ( !v17 )
    {
      v8 = v20;
      --v10;
      v5 = a4;
      v6 = a3;
      if ( v10 >= 1 )
        continue;
    }
    if ( ++v9 >= 2 )
      return v16;
    v8 = v20;
    v5 = a4;
    v6 = a3;
    goto LABEL_2;
  }
  v16 = *(&v22 + v10) ^ v13;
  if ( (v16 & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
LABEL_9:
    if ( v10 == 1 )
    {
      LOBYTE(v16) = v13 ^ v23;
      if ( ((v13 ^ v23) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        v11 = &v22;
        v9 = 1;
        if ( SystemAddressValid < 0 || (v16 = MI_READ_PTE_LOCK_FREE(v23)) == 0 )
        {
          LOBYTE(v16) = (_BYTE)v10 << v12;
          *(_BYTE *)(a4 + 1) = (_BYTE)v10 << v12;
        }
      }
    }
    goto LABEL_13;
  }
  *(_BYTE *)(a4 + 1) = 1 << v18;
  return v16;
}
