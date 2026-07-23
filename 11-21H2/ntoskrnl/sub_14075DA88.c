/*
 * XREFs of sub_14075DA88 @ 0x14075DA88
 * Callers:
 *     sub_14075D8DC @ 0x14075D8DC (sub_14075D8DC.c)
 *     sub_1409DE80C @ 0x1409DE80C (sub_1409DE80C.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406D8814 @ 0x1406D8814 (sub_1406D8814.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_1407839B4 @ 0x1407839B4 (sub_1407839B4.c)
 *     sub_140783CD8 @ 0x140783CD8 (sub_140783CD8.c)
 *     sub_1408119C4 @ 0x1408119C4 (sub_1408119C4.c)
 */

int __fastcall sub_14075DA88(_OWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  LARGE_INTEGER *v8; // rcx
  __int64 v9; // rax
  LARGE_INTEGER *v10; // rcx
  _BYTE v12[16]; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v13[6]; // [rsp+40h] [rbp-40h] BYREF

  memset(v13, 0, sizeof(v13));
  v4 = sub_140783CD8(a1, 0LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    if ( v5[22] )
    {
      v6 = *(_DWORD *)(a2 + 16);
      if ( (v6 & 0x82000) == 0 )
      {
        *(_DWORD *)(a2 + 16) = v6 | 0x2000;
        v5[4] |= 2u;
        KeReleaseMutex(&Object, 0);
        v7 = *(_QWORD *)(a2 + 64);
        v13[5].QuadPart = 0LL;
        memset((char *)&v13[0].QuadPart + 4, 0, 20);
        v8 = v13;
        v13[0].LowPart = 48;
        LOBYTE(v8) = 4;
        *(_OWORD *)&v13[3].LowPart = *a1;
        sub_1407839B4(v8, *(unsigned int *)(v7 + 56), &v13[3], 48LL, v13, v12);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        if ( v5[22] )
          v5[4] &= ~2u;
        else
          sub_1406D8814(v5, 1, 2LL);
      }
    }
    if ( v5[23] && (*(_DWORD *)(a2 + 16) & 0x4004) == 4 )
    {
      v5[4] |= 4u;
      *(_DWORD *)(a2 + 16) |= 0x4000u;
      KeReleaseMutex(&Object, 0);
      v9 = *(_QWORD *)(a2 + 64);
      v13[5].QuadPart = 0LL;
      memset((char *)&v13[0].QuadPart + 4, 0, 20);
      v10 = v13;
      v13[0].LowPart = 48;
      LOBYTE(v10) = 6;
      *(_OWORD *)&v13[3].LowPart = *a1;
      sub_1407839B4(v10, *(unsigned int *)(v9 + 56), &v13[3], 48LL, v13, v12);
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      if ( v5[23] )
      {
        v5[4] &= ~4u;
        sub_1408119C4(v5);
      }
      else
      {
        sub_1406D8814(v5, 0, 4LL);
      }
    }
    sub_1407838E0(&off_140C037C0, v5);
    LODWORD(v4) = KeReleaseMutex(&Object, 0);
  }
  return v4;
}
