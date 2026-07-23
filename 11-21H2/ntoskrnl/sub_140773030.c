/*
 * XREFs of sub_140773030 @ 0x140773030
 * Callers:
 *     sub_1406D27C8 @ 0x1406D27C8 (sub_1406D27C8.c)
 *     sub_1406D2EE0 @ 0x1406D2EE0 (sub_1406D2EE0.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     sub_140763800 @ 0x140763800 (sub_140763800.c)
 *     sub_140768D10 @ 0x140768D10 (sub_140768D10.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_14076D824 @ 0x14076D824 (sub_14076D824.c)
 *     sub_14076D9FC @ 0x14076D9FC (sub_14076D9FC.c)
 *     sub_14076DFF0 @ 0x14076DFF0 (sub_14076DFF0.c)
 *     sub_140772190 @ 0x140772190 (sub_140772190.c)
 *     sub_1407762E4 @ 0x1407762E4 (sub_1407762E4.c)
 *     sub_14077A4D4 @ 0x14077A4D4 (sub_14077A4D4.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_14083F090 @ 0x14083F090 (sub_14083F090.c)
 *     sub_140948814 @ 0x140948814 (sub_140948814.c)
 *     sub_140A27CF4 @ 0x140A27CF4 (sub_140A27CF4.c)
 *     sub_140B1009C @ 0x140B1009C (sub_140B1009C.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 */

__int64 __fastcall sub_140773030(int *a1, _WORD *a2)
{
  int v3; // [rsp+30h] [rbp-78h]
  int v4; // [rsp+38h] [rbp-70h]
  int v5; // [rsp+40h] [rbp-68h]
  int v6; // [rsp+48h] [rbp-60h]
  int v7; // [rsp+50h] [rbp-58h]
  int v8; // [rsp+58h] [rbp-50h]
  int v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+70h] [rbp-38h]
  int v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+80h] [rbp-28h]

  v13 = *((unsigned __int8 *)a1 + 15);
  v12 = *((unsigned __int8 *)a1 + 14);
  v11 = *((unsigned __int8 *)a1 + 13);
  v10 = *((unsigned __int8 *)a1 + 12);
  v9 = *((unsigned __int8 *)a1 + 11);
  v8 = *((unsigned __int8 *)a1 + 10);
  v7 = *((unsigned __int8 *)a1 + 9);
  v6 = *((unsigned __int8 *)a1 + 8);
  v5 = *((unsigned __int16 *)a1 + 3);
  v4 = *((unsigned __int16 *)a1 + 2);
  v3 = *a1;
  return sub_1402DFBC4(
           a2,
           0x27uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           v3,
           v4,
           v5,
           v6,
           v7,
           v8,
           v9,
           v10,
           v11,
           v12,
           v13);
}
