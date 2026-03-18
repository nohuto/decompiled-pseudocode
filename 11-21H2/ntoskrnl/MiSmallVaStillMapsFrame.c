/*
 * XREFs of MiSmallVaStillMapsFrame @ 0x14024F014
 * Callers:
 *     MiLockStealSystemVm @ 0x140230F28 (MiLockStealSystemVm.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 * Callees:
 *     MiPageTableStillExists @ 0x14024F0F8 (MiPageTableStillExists.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x140352E50 (MiFillPteHierarchy.c)
 */

_BOOL8 __fastcall MiSmallVaStillMapsFrame(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(v5) = 0;
  memset(v4, 0, 32);
  MiFillPteHierarchy(a1, v4);
  result = 0;
  if ( (unsigned int)MiPageTableStillExists(v4, &v5) )
  {
    if ( !(_DWORD)v5 )
    {
      if ( a2 == -1 )
        return 1;
      v5 = MI_READ_PTE_LOCK_FREE(v4[0]);
      if ( (v5 & 1) != 0
        && ((((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v5) >> 12) & 0xFFFFFFFFFFLL) == a2
         || v4[0] == 0xFFFFF6FB7DBEDF68uLL
         && (*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL) == a2
         && a2 == KeGetCurrentThread()->ApcState.Process->UserDirectoryTableBase >> 12) )
      {
        return 1;
      }
    }
  }
  return result;
}
