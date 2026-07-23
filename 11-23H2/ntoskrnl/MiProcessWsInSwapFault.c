/*
 * XREFs of MiProcessWsInSwapFault @ 0x140200008
 * Callers:
 *     MiAllocateWsle @ 0x14026BA60 (MiAllocateWsle.c)
 *     MiValidFault @ 0x140333770 (MiValidFault.c)
 * Callees:
 *     MiReleaseWsSwapReservationPfn @ 0x14021B4A4 (MiReleaseWsSwapReservationPfn.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiSetVaAgeList @ 0x140270C70 (MiSetVaAgeList.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiGetVaAge @ 0x1402E3CC0 (MiGetVaAge.c)
 */

__int64 __fastcall MiProcessWsInSwapFault(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  result = MiReleaseWsSwapReservationPfn(a2);
  v9 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( result )
    result = MiReleasePageFileInfo(v9, result, 1LL);
  if ( a4 )
  {
    *a4 &= ~0x20uLL;
  }
  else
  {
    result = MiGetVaAge(v9, a3);
    if ( (unsigned __int8)result < 7u )
    {
      LOBYTE(v10) = 1;
      return MiSetVaAgeList(a1, a3, 1LL, v10);
    }
  }
  return result;
}
