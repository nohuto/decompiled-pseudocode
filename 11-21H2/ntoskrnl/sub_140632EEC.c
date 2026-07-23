/*
 * XREFs of sub_140632EEC @ 0x140632EEC
 * Callers:
 *     sub_14022A8D0 @ 0x14022A8D0 (sub_14022A8D0.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_140460192 @ 0x140460192 (sub_140460192.c)
 *     sub_140630ACC @ 0x140630ACC (sub_140630ACC.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     sub_1403B3D20 @ 0x1403B3D20 (sub_1403B3D20.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057ADE8 @ 0x14057ADE8 (sub_14057ADE8.c)
 */

__int64 __fastcall sub_140632EEC(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbx
  unsigned int v3; // r10d
  __int64 result; // rax
  char v5; // r9
  __int64 v6; // r10
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int **)a2;
  v3 = *(_DWORD *)(a2 + 16);
  v7 = 0;
  result = sub_1403B3D20(v2, v3, &v7);
  if ( (_DWORD)result )
  {
    result = sub_14057ADE8(v5);
    if ( (_DWORD)result )
      return sub_14042A5E0((char *)v2 + v6, v7);
  }
  return result;
}
