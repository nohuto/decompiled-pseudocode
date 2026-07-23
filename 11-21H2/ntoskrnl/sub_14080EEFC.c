/*
 * XREFs of sub_14080EEFC @ 0x14080EEFC
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

int __fastcall sub_14080EEFC(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rax
  LARGE_INTEGER *v7; // rcx
  __int64 v8; // rax
  LARGE_INTEGER *v9; // rcx
  __int128 v11; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v12[6]; // [rsp+40h] [rbp-40h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = sub_140783CD8(a1, 0);
  v5 = v4;
  if ( v4 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    if ( v5[22] && (*(_DWORD *)(a2 + 16) & 0x82000) == 0x2000 )
    {
      *(_DWORD *)(a2 + 16) &= ~0x2000u;
      v5[4] |= 2u;
      KeReleaseMutex(&Object, 0);
      v6 = *(_QWORD *)(a2 + 64);
      v12[5].QuadPart = 0LL;
      memset((char *)&v12[0].QuadPart + 4, 0, 20);
      v7 = v12;
      v12[0].LowPart = 48;
      LOBYTE(v7) = 5;
      *(_OWORD *)&v12[3].LowPart = *(_OWORD *)a1;
      sub_1407839B4((__int64)v7, *(unsigned int *)(v6 + 56), (__int64)&v12[3], 48, (__int64)v12, &v11);
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      if ( v5[22] )
        v5[4] &= ~2u;
      else
        sub_1406D8814(v5, 1, 2LL);
    }
    if ( v5[23] && (*(_DWORD *)(a2 + 16) & 0x4000) != 0 )
    {
      v5[4] |= 4u;
      *(_DWORD *)(a2 + 16) &= ~0x4000u;
      KeReleaseMutex(&Object, 0);
      v8 = *(_QWORD *)(a2 + 64);
      v12[5].QuadPart = 0LL;
      memset((char *)&v12[0].QuadPart + 4, 0, 20);
      v9 = v12;
      v12[0].LowPart = 48;
      LOBYTE(v9) = 7;
      *(_OWORD *)&v12[3].LowPart = *(_OWORD *)a1;
      sub_1407839B4((__int64)v9, *(unsigned int *)(v8 + 56), (__int64)&v12[3], 48, (__int64)v12, &v11);
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
    sub_1407838E0((__int64 *)&off_140C037C0, (ULONG_PTR)v5);
    LODWORD(v4) = KeReleaseMutex(&Object, 0);
  }
  return (int)v4;
}
