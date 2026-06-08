/*
 * XREFs of CpcReinitializeHandler @ 0x1C0004BC0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C00021C4 (WriteGenAddrMaybeHiddenEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcReinitializeHandler(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 124) )
    result = WriteGenAddrMaybeHiddenEx(*(_QWORD *)a1, (_BYTE *)(*(_QWORD *)(a1 + 144) + 344LL), 1LL);
  if ( *(_BYTE *)(a1 + 136) )
  {
    result = *(_QWORD *)a1;
    if ( !*(_DWORD *)(*(_QWORD *)a1 + 80LL) )
    {
      ((void (*)(void))qword_1C0012718)();
      return ((__int64 (*)(void))qword_1C0012728)();
    }
  }
  return result;
}
