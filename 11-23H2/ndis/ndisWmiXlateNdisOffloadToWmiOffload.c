/*
 * XREFs of ndisWmiXlateNdisOffloadToWmiOffload @ 0x1C008F95C
 * Callers:
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C008E358 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

__int64 __fastcall ndisWmiXlateNdisOffloadToWmiOffload(__int128 *a1)
{
  int v2; // ecx
  int *v3; // rdx
  int v4; // eax
  unsigned int *v5; // rdx
  int v6; // ecx
  unsigned int v7; // eax
  __int64 result; // rax
  __int128 v9; // [rsp+0h] [rbp-99h]
  __int128 v10; // [rsp+10h] [rbp-89h]
  __int128 v11; // [rsp+20h] [rbp-79h]
  __int128 v12; // [rsp+30h] [rbp-69h]
  __int128 v13; // [rsp+40h] [rbp-59h]
  __int128 v14; // [rsp+50h] [rbp-49h]
  __int128 v15; // [rsp+60h] [rbp-39h]

  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  v12 = a1[3];
  v13 = a1[4];
  v14 = a1[5];
  v15 = a1[6];
  v2 = 2;
  v3 = (int *)a1 + 3;
  *(_DWORD *)a1 = v9;
  *((_WORD *)a1 + 1) = 296;
  *((_DWORD *)a1 + 1) = DWORD1(v9);
  *((_DWORD *)a1 + 2) = BYTE8(v9) & 3;
  do
  {
    v4 = DWORD2(v9) >> v2;
    v2 += 2;
    *v3++ = v4 & 3;
  }
  while ( v2 < 10 );
  v5 = (unsigned int *)a1 + 9;
  *((_DWORD *)a1 + 7) = HIDWORD(v9);
  v6 = 2;
  *((_DWORD *)a1 + 8) = v10 & 3;
  do
  {
    v7 = (unsigned int)v10 >> v6;
    v6 += 2;
    *v5++ = v7 & 3;
  }
  while ( v6 < 10 );
  *((_DWORD *)a1 + 13) = DWORD1(v10);
  *((_DWORD *)a1 + 14) = BYTE8(v10) & 3;
  *((_DWORD *)a1 + 15) = (DWORD2(v10) >> 2) & 3;
  *((_DWORD *)a1 + 16) = (DWORD2(v10) >> 4) & 3;
  *((_DWORD *)a1 + 18) = HIDWORD(v10);
  *((_DWORD *)a1 + 17) = BYTE8(v10) >> 6;
  *((_DWORD *)a1 + 19) = v11 & 3;
  *((_DWORD *)a1 + 20) = ((unsigned int)v11 >> 2) & 3;
  *((_DWORD *)a1 + 21) = ((unsigned int)v11 >> 4) & 3;
  *(_QWORD *)((char *)a1 + 92) = *(_QWORD *)((char *)&v11 + 4);
  *((_DWORD *)a1 + 25) = HIDWORD(v11);
  *((_DWORD *)a1 + 22) = (unsigned __int8)v11 >> 6;
  *((_DWORD *)a1 + 26) = v12 & 3;
  *((_QWORD *)a1 + 14) = *(_QWORD *)((char *)&v12 + 4);
  *((_DWORD *)a1 + 30) = HIDWORD(v12);
  *(_QWORD *)((char *)a1 + 124) = v13;
  *((_DWORD *)a1 + 27) = ((unsigned int)v12 >> 2) & 3;
  *((_DWORD *)a1 + 33) = BYTE8(v13) & 3;
  *((_DWORD *)a1 + 34) = (DWORD2(v13) >> 2) & 3;
  *((_DWORD *)a1 + 35) = (DWORD2(v13) >> 4) & 3;
  *((_DWORD *)a1 + 36) = BYTE8(v13) >> 6;
  *((_DWORD *)a1 + 37) = (DWORD2(v13) >> 8) & 3;
  *((_DWORD *)a1 + 38) = (DWORD2(v13) >> 10) & 3;
  *((_DWORD *)a1 + 39) = BYTE12(v13) & 3;
  *((_DWORD *)a1 + 40) = (HIDWORD(v13) >> 2) & 3;
  *((_DWORD *)a1 + 41) = (HIDWORD(v13) >> 4) & 3;
  *((_DWORD *)a1 + 42) = BYTE12(v13) >> 6;
  *((_DWORD *)a1 + 43) = (HIDWORD(v13) >> 8) & 3;
  *((_DWORD *)a1 + 44) = (HIDWORD(v13) >> 10) & 3;
  *((_DWORD *)a1 + 45) = (HIDWORD(v13) >> 12) & 3;
  *(__int128 *)((char *)a1 + 188) = v14;
  *((_DWORD *)a1 + 51) = v15;
  *((_DWORD *)a1 + 46) = WORD6(v13) >> 14;
  *((_DWORD *)a1 + 52) = DWORD1(v15);
  *((_DWORD *)a1 + 53) = BYTE8(v15) & 3;
  result = HIDWORD(v15);
  *((_DWORD *)a1 + 54) = (DWORD2(v15) >> 2) & 3;
  *((_DWORD *)a1 + 55) = HIDWORD(v15);
  return result;
}
