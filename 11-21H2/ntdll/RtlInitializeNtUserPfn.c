/*
 * XREFs of RtlInitializeNtUserPfn @ 0x180093590
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlInitializeNtUserPfn(void *Src, size_t Size, void *a3, size_t a4, void *Srca, size_t Sizea)
{
  ULONG_PTR CfgBitMap; // r12
  __int64 v11; // rbp

  CfgBitMap = LdrSystemDllInitBlock.CfgBitMap;
  v11 = *(_QWORD *)_guard_check_icall_fptr;
  if ( byte_18018F1D8
    || (Size & 7) != 0
    || Size > 0xC0
    || (a4 & 7) != 0
    || a4 > 0xC0
    || (Sizea & 7) != 0
    || Sizea > 0x58 )
  {
    return 3221225485LL;
  }
  LdrProtectMrdata(0);
  memmove(NtUserPfn, Src, Size);
  memmove(off_18018F0C0, a3, a4);
  memmove(off_18018F180, Srca, Sizea);
  byte_18018F1D8 = 1;
  LdrProtectMrdata(1);
  if ( CfgBitMap != LdrSystemDllInitBlock.CfgBitMap || v11 != *(_QWORD *)_guard_check_icall_fptr )
    __fastfail(0x13u);
  return 0LL;
}
