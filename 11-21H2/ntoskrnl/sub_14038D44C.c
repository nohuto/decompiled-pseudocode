/*
 * XREFs of sub_14038D44C @ 0x14038D44C
 * Callers:
 *     sub_140801D60 @ 0x140801D60 (sub_140801D60.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14038D44C(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( qword_140C54DC0 )
  {
    result = qword_140C54E20;
    if ( qword_140C54E20 )
      return sub_14042A5E0(a1, a2);
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
