/*
 * XREFs of sub_1406456B8 @ 0x1406456B8
 * Callers:
 *     WheaRemoveErrorSource @ 0x140A08880 (WheaRemoveErrorSource.c)
 * Callees:
 *     sub_1403C0934 @ 0x1403C0934 (sub_1403C0934.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406456B8(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r11
  unsigned int v3; // ebx

  if ( *(_DWORD *)(a1 + 40) != 16 )
  {
    v3 = 0;
    if ( !sub_1403C0934(a1, 4, 1) )
      return (unsigned int)-1073741822;
    goto LABEL_3;
  }
  v3 = 0;
  if ( sub_1403C0934(a1, 4, 1) )
LABEL_3:
    sub_14042A5E0(*(_QWORD *)(v2 + 56), v1);
  return v3;
}
