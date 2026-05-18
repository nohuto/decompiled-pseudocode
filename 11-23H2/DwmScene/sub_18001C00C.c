/*
 * XREFs of sub_18001C00C @ 0x18001C00C
 * Callers:
 *     sub_180016A78 @ 0x180016A78 (sub_180016A78.c)
 * Callees:
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_18001BB00 @ 0x18001BB00 (sub_18001BB00.c)
 *     sub_1800412EC @ 0x1800412EC (sub_1800412EC.c)
 */

__int64 __fastcall sub_18001C00C(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = a1 + 2;
  sub_1800124F8(a1 + 2, a2);
  v4 = *v2;
  v5 = sub_180012440(v15, (__int64)&unk_1801D3F68);
  v6 = (_QWORD *)sub_1800412EC(v4, v13, v5);
  v7 = sub_18001BB00(a1 + 4, v6);
  if ( v14 )
    sub_180010530(v14);
  if ( v7 < 0 )
  {
    v8 = 33LL;
LABEL_5:
    sub_18000F024(
      retaddr,
      v8,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectreworld.cpp",
      (unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = *v2;
  v11 = sub_180012440(v15, (__int64)&qword_1801D3FE8);
  v12 = (_QWORD *)sub_1800412EC(v10, v13, v11);
  v7 = sub_18001BB00(a1 + 5, v12);
  if ( v14 )
    sub_180010530(v14);
  if ( v7 < 0 )
  {
    v8 = 37LL;
    goto LABEL_5;
  }
  return 0LL;
}
