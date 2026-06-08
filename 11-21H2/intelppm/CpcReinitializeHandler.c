/*
 * XREFs of CpcReinitializeHandler @ 0x1C0001F30
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C000200C (WriteGenAddrMaybeHiddenEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
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
      ((void (*)(void))qword_1C001DF38)();
      return ((__int64 (*)(void))qword_1C001DF48)();
    }
  }
  return result;
}
