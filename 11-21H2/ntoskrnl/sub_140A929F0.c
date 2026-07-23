/*
 * XREFs of sub_140A929F0 @ 0x140A929F0
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A929F0(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 result; // rax

  if ( *a3 > 0x1Bu )
    v5 = (*a3 != 0xFF) + 28LL;
  else
    v5 = (unsigned __int8)*a3;
  if ( *((_QWORD *)&unk_140D59790 + 12 * v5) )
    sub_14042A5E0(a1, a2);
  result = qword_140D5A210;
  if ( qword_140D5A210 )
    return sub_14042A5E0(a1, a2);
  return result;
}
