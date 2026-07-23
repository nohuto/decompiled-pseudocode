/*
 * XREFs of sub_140A15B1C @ 0x140A15B1C
 * Callers:
 *     sub_1406498D0 @ 0x1406498D0 (sub_1406498D0.c)
 *     sub_140649A60 @ 0x140649A60 (sub_140649A60.c)
 *     sub_140A13EC0 @ 0x140A13EC0 (sub_140A13EC0.c)
 *     sub_140A13FC0 @ 0x140A13FC0 (sub_140A13FC0.c)
 *     sub_140A14110 @ 0x140A14110 (sub_140A14110.c)
 *     sub_140A17ABC @ 0x140A17ABC (sub_140A17ABC.c)
 *     sub_140A17D10 @ 0x140A17D10 (sub_140A17D10.c)
 * Callees:
 *     sub_1402D87F0 @ 0x1402D87F0 (sub_1402D87F0.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 */

__int64 __fastcall sub_140A15B1C(_WORD *a1, _WORD *a2, _WORD *a3, __int64 a4)
{
  int v9; // ebx
  unsigned int v10; // r11d
  __int64 v11; // r15
  unsigned int v12; // r11d
  unsigned int v13; // r11d
  unsigned int v14; // eax
  _QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v15[0] = 0LL;
  v16 = 0LL;
  if ( !a4 )
    return 3221225507LL;
  v9 = sub_1402E0AC4(a1, 0x7FFFFFFFuLL, v15);
  if ( v9 < 0 )
    goto LABEL_23;
  v9 = sub_1402E0AC4(a2, v10, &v16);
  if ( v9 < 0 )
    goto LABEL_23;
  if ( v15[0] )
  {
    if ( v16 )
    {
      v11 = (__int64)(a2 + 1);
      v12 = (a1[v15[0] - 1] == 92) + 1;
      if ( *a2 != 92 )
        v12 = a1[v15[0] - 1] == 92;
      if ( v12 <= 1 )
        v11 = (__int64)a2;
      v9 = sub_1402E0200(a3, a4, (__int64)a1);
      if ( v9 >= 0 )
      {
        v14 = v13 - 1;
        if ( v13 <= 1 )
          v14 = v13;
        if ( v14 || (v9 = sub_1402D87F0(a3, a4, (__int64)&dword_1400126A8), v9 >= 0) )
        {
          v9 = sub_1402D87F0(a3, a4, v11);
          if ( v9 >= 0 )
            return 0;
        }
      }
LABEL_23:
      sub_1406E0C3C(1LL, (__int64)"AslPathCombine");
      return (unsigned int)v9;
    }
    a2 = a1;
LABEL_11:
    v9 = sub_1402E0200(a3, a4, (__int64)a2);
    if ( v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_23;
  }
  if ( v16 )
    goto LABEL_11;
  *a3 = 0;
  return 0;
}
