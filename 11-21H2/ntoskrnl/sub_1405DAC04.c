/*
 * XREFs of sub_1405DAC04 @ 0x1405DAC04
 * Callers:
 *     sub_1405CF800 @ 0x1405CF800 (sub_1405CF800.c)
 * Callees:
 *     sub_14023BC00 @ 0x14023BC00 (sub_14023BC00.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405D868C @ 0x1405D868C (sub_1405D868C.c)
 */

char __fastcall sub_1405DAC04(__int64 a1, int a2)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // rdi
  REGHANDLE v5; // rbx
  int v7; // [rsp+40h] [rbp-9h] BYREF
  int v8; // [rsp+48h] [rbp-1h] BYREF
  __int64 v9; // [rsp+50h] [rbp+7h] BYREF
  __int64 v10; // [rsp+58h] [rbp+Fh]
  __int64 *v11; // [rsp+60h] [rbp+17h] BYREF
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+27h] BYREF
  int *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  v7 = 0;
  v8 = a2;
  v9 = 0LL;
  LODWORD(v10) = 0;
  if ( *(_BYTE *)(a1 + 64) )
  {
    v10 = *(_QWORD *)(a1 - 33768);
    LODWORD(v9) = a2;
    if ( (xmmword_140D06910 & 0x8000) != 0 )
    {
      v13 = 0;
      v11 = &v9;
      v12 = 16;
      sub_14035EDE4((__int64)&v11, 1u, 0x80008000, 0x1236u, 0x401802u);
    }
    if ( dword_140D048CC )
      sub_1405D868C(a1 - 136, (__int128 *)&qword_140026440, 0x10u, &v9);
  }
  v3 = (const EVENT_DESCRIPTOR *)sub_14023BC00(
                                   a1,
                                   (__int64)qword_140037AD8,
                                   (__int64)qword_140037BF8,
                                   (__int64)&v7,
                                   (__int64)&UserData);
  v4 = v3;
  if ( byte_140C5AE30 )
  {
    v5 = qword_140C1F580;
    LOBYTE(v3) = EtwEventEnabled(qword_140C1F580, v3);
    if ( (_BYTE)v3 )
    {
      v17 = 0;
      v15 = &v8;
      v16 = 4;
      LOBYTE(v3) = EtwWriteEx(v5, v4, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v3;
}
