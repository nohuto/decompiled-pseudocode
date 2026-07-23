/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x14020B2DC
 * Callers:
 *     MiEliminateZeroPages @ 0x140696B90 (MiEliminateZeroPages.c)
 * Callees:
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFreeWsleList @ 0x140280EB0 (MiFreeWsleList.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  char v6; // r15
  __int64 valid; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h]

  if ( *(_DWORD *)(a2 + 12) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 0LL;
    v6 = MiLockWorkingSetShared();
    valid = MiLockLowestValidPageTable(a1, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v16);
    v17 = valid;
    if ( valid == ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v8 = 0LL;
      if ( !*(_DWORD *)(a2 + 12) )
        goto LABEL_17;
      do
      {
        v9 = *(_QWORD *)(a2 + 8 * v8 + 24);
        v16 = MI_READ_PTE_LOCK_FREE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v16 & 1) != 0 && (MiGetWsleContents(v10, v9, v11, v12) & 0xF) != 0xA )
        {
          v13 = MI_READ_PTE_LOCK_FREE(&v16);
          if ( _bittest64((const signed __int64 *)(48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40), 0x28u)
            || (v14 = *(_QWORD *)(48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8), v14 < 0)
            || !v14 )
          {
            *(_QWORD *)(a2 + 8 * v5 + 24) = *(_QWORD *)(a2 + 8 * v8 + 24);
            v5 = (unsigned int)(v5 + 1);
          }
        }
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *(_DWORD *)(a2 + 12) );
      valid = v17;
      if ( (_DWORD)v5 )
      {
        *(_DWORD *)(a2 + 12) = v5;
        MiFreeWsleList(a1, a2, 0LL);
      }
      else
      {
LABEL_17:
        *(_DWORD *)(a2 + 12) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
    MiUnlockPageTableInternal(a1, valid);
    LOBYTE(v15) = v6;
    MiUnlockWorkingSetShared(a1, v15);
  }
}
