/*
 * XREFs of sub_140202120 @ 0x140202120
 * Callers:
 *     sub_140663348 @ 0x140663348 (sub_140663348.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140202120(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 1LL;
  result = *(_QWORD *)(a1 + 1384);
  if ( a2 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1144), -a2);
  _InterlockedIncrement((volatile signed __int32 *)(result + 512));
  return result;
}
