/*
 * XREFs of sub_14062D548 @ 0x14062D548
 * Callers:
 *     sub_1403597CC @ 0x1403597CC (sub_1403597CC.c)
 *     sub_14035A424 @ 0x14035A424 (sub_14035A424.c)
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14062D548(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        char a10)
{
  char v11; // cl
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  char v16; // [rsp+3Ch] [rbp-24h]
  char v17; // [rsp+3Dh] [rbp-23h]
  char v18; // [rsp+3Eh] [rbp-22h]
  char v19; // [rsp+3Fh] [rbp-21h]
  __int64 *v20; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+48h] [rbp-18h]
  int v22; // [rsp+4Ch] [rbp-14h]

  v15 = *(_DWORD *)(a1 + 1232);
  v17 = a6;
  v14 = a2;
  v16 = a3;
  v18 = a4 & 7 | (8 * (a7 & 7 | (8 * ((2 * a8) | a5 & 1))));
  v11 = KeGetPcr()[36].Unused0[2];
  v21 = 16;
  v22 = 0;
  v19 = (a9 != 0 ? 2 : 0) | (4 * (a10 & 3)) | v11 & 1;
  v12 = *(_QWORD *)(a1 + 544);
  v20 = &v14;
  return sub_140281380(*(_QWORD *)(v12 + 2160), (int)&v20, 1, 0x20000200u, 1346, 5245442);
}
