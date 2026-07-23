/*
 * XREFs of sub_140B04F8C @ 0x140B04F8C
 * Callers:
 *     sub_140B05E40 @ 0x140B05E40 (sub_140B05E40.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402D9A20 @ 0x1402D9A20 (sub_1402D9A20.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405A1F60 @ 0x1405A1F60 (sub_1405A1F60.c)
 *     sub_1405EF24C @ 0x1405EF24C (sub_1405EF24C.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_14075C2E0 @ 0x14075C2E0 (sub_14075C2E0.c)
 *     sub_1407615BC @ 0x1407615BC (sub_1407615BC.c)
 *     sub_14080C778 @ 0x14080C778 (sub_14080C778.c)
 *     sub_140970C6C @ 0x140970C6C (sub_140970C6C.c)
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 *     sub_140B07074 @ 0x140B07074 (sub_140B07074.c)
 */

__int64 __fastcall sub_140B04F8C(__int64 a1)
{
  ULONG_PTR *v2; // rdi
  __int64 i; // rbx
  ULONG_PTR *k; // rbx
  ULONG_PTR v6; // rbx
  PVOID v7; // rsi
  unsigned __int64 v8; // r15
  PIMAGE_NT_HEADERS v9; // r14
  unsigned __int64 v10; // r9
  int v11; // eax
  ULONG_PTR j; // rbx
  _QWORD v13[14]; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v14[24]; // [rsp+C0h] [rbp-E8h] BYREF

  memset(v14, 0, 0xB8uLL);
  v14[3] = 0LL;
  LODWORD(v14[1]) = 20;
  sub_1406F5B50();
  v2 = (ULONG_PTR *)(a1 + 16);
  for ( i = *(_QWORD *)(a1 + 16); (ULONG_PTR *)i != v2; i = *(_QWORD *)i )
  {
    if ( qword_140D068F0 != *(PVOID *)(i + 48) )
      sub_14075C2E0(i);
    sub_140B050A8(a1, i, v14);
  }
  sub_14032F1B0((__int64)v14);
  if ( (xmmword_140D06920 & 0x20000000000LL) != 0 )
  {
    v6 = *v2;
    if ( (ULONG_PTR *)*v2 != v2 )
    {
      do
      {
        v7 = *(PVOID *)(v6 + 48);
        v8 = ((unsigned __int64)*(unsigned int *)(v6 + 64) + 4095) >> 12;
        v9 = RtlImageNtHeader(v7);
        sub_1407615BC(v6);
        if ( (xmmword_140D06920 & 0x20000000000LL) != 0
          && v7 != qword_140D068F0
          && v7 != qword_140D06988
          && (v9->FileHeader.Characteristics & 1) == 0
          && v9->OptionalHeader.NumberOfRvaAndSizes > 5 )
        {
          if ( !(unsigned int)sub_1402FDD20(*(_QWORD *)(v6 + 48)) )
          {
            v10 = sub_1405A1F60((unsigned __int64)v7, v8);
            if ( (dword_140D06880 & 0x8000) != 0 )
            {
              memset(v13, 0, 0x68uLL);
              v13[1] = v7;
              LOBYTE(v13[2]) = 1;
              v11 = sub_140358A20(2u, 221, 0, (__int64)v13);
            }
            else
            {
              v11 = sub_1405EF24C(
                      (char *)v7,
                      (__int64)v7,
                      *(_DWORD *)(v6 + 64),
                      v10,
                      (__int64)qword_140C4F420,
                      1,
                      0LL,
                      0LL,
                      0);
            }
            if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741637 )
              KeBugCheckEx(0x1Au, 0x1080uLL, v6, *(_QWORD *)(v6 + 48), v11);
          }
          if ( (unsigned int)sub_1402D9A20(*(void **)(v6 + 48)) )
            sub_140970C6C(*(_QWORD *)(v6 + 48));
        }
        v6 = *(_QWORD *)v6;
      }
      while ( (ULONG_PTR *)v6 != v2 );
      for ( j = *(_QWORD *)(a1 + 16); (ULONG_PTR *)j != v2; j = *(_QWORD *)j )
      {
        if ( (*(_DWORD *)(j + 104) & 0x1000000) == 0 && !(unsigned int)sub_1402D9A20(*(void **)(j + 48)) )
          sub_140970C6C(*(_QWORD *)(j + 48));
      }
    }
  }
  sub_140B07074(a1);
  if ( (dword_140D06880 & 0x4000) != 0 )
  {
    for ( k = (ULONG_PTR *)*v2; k != v2; k = (ULONG_PTR *)*k )
      sub_14080C778(0LL, k[6], 0, 2u);
  }
  sub_1406F5AF0((__int64)KeGetCurrentThread());
  return 1LL;
}
