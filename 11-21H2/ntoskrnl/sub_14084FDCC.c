/*
 * XREFs of sub_14084FDCC @ 0x14084FDCC
 * Callers:
 *     sub_140989150 @ 0x140989150 (sub_140989150.c)
 *     sub_140B23B40 @ 0x140B23B40 (sub_140B23B40.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1408504E0 @ 0x1408504E0 (sub_1408504E0.c)
 */

__int64 __fastcall sub_14084FDCC(__int64 a1)
{
  __int128 v1; // xmm0
  void *v2; // rsi
  __int64 v3; // xmm1_8
  unsigned int v5; // edi
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  bool v9; // zf
  int v10; // ecx
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+50h] [rbp-10h]

  v1 = *(_OWORD *)(a1 + 68);
  v2 = *(void **)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 84);
  v17 = *(_DWORD *)(a1 + 92);
  v16 = v3;
  LODWORD(v14) = 4;
  v15 = v1;
  v5 = 0;
  if ( (int)sub_1408504E0(v2, (__int64)&v14) < 0 || (_DWORD)InitSafeBootMode )
    LODWORD(v15) = 0x80000000;
  LODWORD(v14) = 4;
  sub_1408504E0(v2, (__int64)&v14);
  LODWORD(v14) = 4;
  sub_1408504E0(v2, (__int64)&v14);
  v6 = *(void **)(a1 + 8);
  LODWORD(v14) = 4;
  sub_1408504E0(v6, (__int64)&v14);
  v7 = *(void **)(a1 + 8);
  LODWORD(v14) = 4;
  sub_1408504E0(v7, (__int64)&v14);
  v8 = *(void **)(a1 + 8);
  LODWORD(v14) = 4;
  sub_1408504E0(v8, (__int64)&v14);
  if ( (int)v15 >= 0 )
    v9 = (v15 & 0xFFFFFFFC) == 0;
  else
    v9 = (_DWORD)v15 == 0x80000000;
  if ( v9
    && DWORD2(v15) <= 0x10000
    && HIDWORD(v15) <= 0x10000
    && (unsigned int)(v16 - 2500) <= 0xE09C
    && (unsigned int)(HIDWORD(v16) - 5000) <= 0xD6D8
    && (v10 = v17, (unsigned int)(v17 - 2500) <= 0xE09C) )
  {
    v11 = v15;
    ++*(_DWORD *)(a1 + 512);
    v12 = v16;
    *(_OWORD *)(a1 + 68) = v11;
    *(_QWORD *)(a1 + 84) = v12;
    *(_DWORD *)(a1 + 92) = v10;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
