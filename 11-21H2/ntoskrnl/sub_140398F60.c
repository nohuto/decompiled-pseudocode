/*
 * XREFs of sub_140398F60 @ 0x140398F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall sub_140398F60(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r11
  bool v4; // cf

  v2 = qword_140C4E358;
  v3 = qword_140C4E408;
  v4 = qword_140C4E358 < (unsigned __int64)qword_140C4E408;
  *a1 = qword_140C4E358;
  if ( a2 )
  {
    if ( v3 > __rdtsc() )
      HIDWORD(qword_140C4E408) = 0;
    *a2 = qword_140C4E408 - v2;
  }
  return v4;
}
