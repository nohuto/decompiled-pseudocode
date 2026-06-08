/*
 * XREFs of CpcReinitializeHandler @ 0x1C0004810
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0001C68 (WriteGenAddrMaybeHiddenEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
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
      ((void (*)(void))qword_1C0011698)();
      return ((__int64 (*)(void))qword_1C00116A8)();
    }
  }
  return result;
}
