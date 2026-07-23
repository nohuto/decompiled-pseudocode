/*
 * XREFs of sub_14077F934 @ 0x14077F934
 * Callers:
 *     sub_140699B5C @ 0x140699B5C (sub_140699B5C.c)
 *     sub_14077F420 @ 0x14077F420 (sub_14077F420.c)
 *     sub_140A24104 @ 0x140A24104 (sub_140A24104.c)
 * Callees:
 *     sub_1406C74F8 @ 0x1406C74F8 (sub_1406C74F8.c)
 *     sub_1406D1FF8 @ 0x1406D1FF8 (sub_1406D1FF8.c)
 *     sub_1406D5070 @ 0x1406D5070 (sub_1406D5070.c)
 *     sub_14077FAC0 @ 0x14077FAC0 (sub_14077FAC0.c)
 *     sub_140780580 @ 0x140780580 (sub_140780580.c)
 *     sub_140853430 @ 0x140853430 (sub_140853430.c)
 */

__int64 __fastcall sub_14077F934(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-28h]

  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    return 3221225485LL;
  result = sub_14077FAC0(a1, a2);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int8)a3 != 16 )
  {
    switch ( (unsigned __int8)a3 )
    {
      case 0x12u:
        return sub_1406C74F8(a1, a2, a3, a4, a5, a6, a7, a8);
      case 0x11u:
        return sub_1406D1FF8(v13, a2, a3, a4, v15, a6, a7, a8);
      case 0x13u:
        return sub_140853430(v13, a2, a3, v14);
      case 0x14u:
        return sub_1406D5070(v13, a2, a3, v14, v15, a6, a7, a8);
    }
    return 3221225485LL;
  }
  return sub_140780580(v13, a2, a3, a4);
}
