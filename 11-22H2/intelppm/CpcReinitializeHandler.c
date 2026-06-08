/*
 * XREFs of CpcReinitializeHandler @ 0x1C00024C0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C000259C (WriteGenAddrMaybeHiddenEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcReinitializeHandler(_BYTE *a1)
{
  __int64 result; // rax

  if ( a1[124] )
    result = WriteGenAddrMaybeHiddenEx(*(_QWORD *)a1, *((_QWORD *)a1 + 18) + 344LL, 1LL);
  if ( a1[136] )
  {
    result = *(_QWORD *)a1;
    if ( !*(_DWORD *)(*(_QWORD *)a1 + 80LL) )
    {
      ((void (*)(void))qword_1C001F258)();
      return ((__int64 (*)(void))qword_1C001F268)();
    }
  }
  return result;
}
