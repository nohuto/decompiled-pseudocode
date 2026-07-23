/*
 * XREFs of sub_140A92AA0 @ 0x140A92AA0
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A92AA0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v6; // rax
  __int64 result; // rax

  if ( *a4 > 0x1Bu )
    v6 = (*a4 != 0xFF) + 28LL;
  else
    v6 = (unsigned __int8)*a4;
  if ( *((_QWORD *)&unk_140D59758 + 12 * v6) )
    sub_14042A5E0(a1, a2);
  result = qword_140D5A1D8;
  if ( qword_140D5A1D8 )
    return sub_14042A5E0(a1, a2);
  return result;
}
