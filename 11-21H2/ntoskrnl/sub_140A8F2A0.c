/*
 * XREFs of sub_140A8F2A0 @ 0x140A8F2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B51A0 @ 0x1403B51A0 (sub_1403B51A0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A8F2A0(void *a1, __int64 a2)
{
  if ( qword_140D4E058 )
    return sub_14042A5E0(a1, a2);
  else
    return sub_1403B51A0(a1);
}
