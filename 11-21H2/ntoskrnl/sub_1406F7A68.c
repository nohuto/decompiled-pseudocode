/*
 * XREFs of sub_1406F7A68 @ 0x1406F7A68
 * Callers:
 *     sub_1406F84B0 @ 0x1406F84B0 (sub_1406F84B0.c)
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406F7C44 @ 0x1406F7C44 (sub_1406F7C44.c)
 */

void __fastcall sub_1406F7A68(unsigned __int16 *a1, __int64 a2, int *a3)
{
  int v5; // ecx
  int v6; // edx
  PIMAGE_NT_HEADERS v7; // rax
  PVOID v8[2]; // [rsp+40h] [rbp-98h] BYREF
  int v9; // [rsp+50h] [rbp-88h]
  __int64 v10; // [rsp+54h] [rbp-84h]
  char v11; // [rsp+5Ch] [rbp-7Ch]
  _BYTE v12[3]; // [rsp+5Dh] [rbp-7Bh]
  ULONGLONG ImageBase; // [rsp+60h] [rbp-78h]
  __int64 v14; // [rsp+68h] [rbp-70h]
  __int64 v15; // [rsp+70h] [rbp-68h]
  __int64 v16; // [rsp+78h] [rbp-60h]
  _QWORD v17[3]; // [rsp+80h] [rbp-58h] BYREF
  int v18; // [rsp+98h] [rbp-40h]
  int v19; // [rsp+9Ch] [rbp-3Ch]
  __int64 *v20; // [rsp+A0h] [rbp-38h]
  __int64 v21; // [rsp+A8h] [rbp-30h]

  v8[0] = 0LL;
  v16 = 0LL;
  if ( a1 && *a1 && *((_QWORD *)a1 + 1) )
  {
    if ( a2 )
      v5 = *(_DWORD *)(a2 + 1088);
    else
      v5 = 0;
    v8[0] = *((PVOID *)a3 + 1);
    v8[1] = *((PVOID *)a3 + 3);
    v9 = v5;
    *(_WORD *)&v12[1] = 0;
    v14 = 0LL;
    v15 = 0LL;
    v10 = 0LL;
    ImageBase = 0LL;
    v6 = *a3;
    v11 = ((unsigned int)*a3 >> 12) & 0xF;
    *(_WORD *)v12 = BYTE2(v6) & 7;
    v7 = RtlImageNtHeader(v8[0]);
    if ( v7 )
    {
      LODWORD(v10) = v7->OptionalHeader.CheckSum;
      HIDWORD(v10) = v7->FileHeader.TimeDateStamp;
      ImageBase = v7->OptionalHeader.ImageBase;
    }
    if ( qword_140D05008 != -4540 && (*(_DWORD *)(qword_140D05008 + 4540) & 4) != 0 )
      sub_1406F7C44(a1, v8, 5121LL, 0LL);
    v17[0] = v8;
    v17[1] = 56LL;
    v17[2] = *((_QWORD *)a1 + 1);
    v18 = *a1;
    v19 = 0;
    v20 = &qword_14000EF90;
    v21 = 2LL;
    if ( a2 )
      sub_140281380(*(_QWORD *)(a2 + 2160), (int)v17, 3, 4u, 778, 5249283);
    else
      sub_14035EDE4((__int64)v17, 3u, 4u, 0x30Au, 0x501903u);
  }
}
