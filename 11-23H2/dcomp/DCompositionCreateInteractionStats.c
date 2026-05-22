/*
 * XREFs of DCompositionCreateInteractionStats @ 0x1801A6270
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18006445C (_tlgKeywordOn.c)
 */

__int64 __fastcall DCompositionCreateInteractionStats(__int64 a1, _QWORD *a2)
{
  struct IDCompositionInteractionStats **v2; // r9
  size_t *v3; // r10

  *a2 = 0LL;
  if ( dword_1802193A0 && tlgKeywordOn((__int64)&dword_1802193A0, 0x400000000002LL) )
    return CInteractionFrameStats::Create(v3, v2);
  else
    return 2147500037LL;
}
