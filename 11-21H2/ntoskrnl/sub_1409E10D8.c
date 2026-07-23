/*
 * XREFs of sub_1409E10D8 @ 0x1409E10D8
 * Callers:
 *     sub_1409E0DC0 @ 0x1409E0DC0 (sub_1409E0DC0.c)
 *     sub_1409E1200 @ 0x1409E1200 (sub_1409E1200.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

__int64 __fastcall sub_1409E10D8(const WCHAR *a1, _DWORD *a2, __int64 a3)
{
  char *v6; // rdx
  __int64 *v7; // r8
  char **v8; // rcx
  char *v9; // r9
  __int64 v10; // r10
  char *v11; // rax
  _QWORD v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+50h] [rbp-B0h] BYREF
  char v15; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v17; // [rsp+88h] [rbp-78h]
  _QWORD v18[36]; // [rsp+A0h] [rbp-60h] BYREF

  v13[0] = L"Family";
  v13[1] = L"Model";
  v13[2] = L"Stepping";
  memset(v18, 0, 0x118uLL);
  v6 = &v15;
  v7 = v13;
  *(_QWORD *)a3 = -1LL;
  v8 = (char **)&v18[3];
  *(_DWORD *)(a3 + 8) = -1;
  v9 = &v14;
  v10 = 3LL;
  do
  {
    v11 = (char *)*v7++;
    *v8 = v9;
    v9 += 16;
    *(_QWORD *)v6 = a3;
    a3 += 4LL;
    *(v8 - 3) = (char *)sub_1408166C0;
    *(v8 - 1) = v11;
    *((_DWORD *)v8 + 2) = 4;
    v8 += 7;
    *((_DWORD *)v6 - 2) = 4;
    v6 += 16;
    --v10;
  }
  while ( v10 );
  *a2 = -1;
  v18[24] = &v16;
  v18[21] = sub_1408166C0;
  v18[23] = L"Architecture";
  LODWORD(v18[25]) = 4;
  v16 = 4;
  v17 = a2;
  return sub_140781F40(0x40000000, a1, (__int64)v18, 0LL);
}
