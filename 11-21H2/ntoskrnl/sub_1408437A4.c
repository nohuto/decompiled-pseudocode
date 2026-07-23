/*
 * XREFs of sub_1408437A4 @ 0x1408437A4
 * Callers:
 *     sub_1408433DC @ 0x1408433DC (sub_1408433DC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 *     sub_1407ED29C @ 0x1407ED29C (sub_1407ED29C.c)
 *     sub_14084388C @ 0x14084388C (sub_14084388C.c)
 */

__int64 __fastcall sub_1408437A4(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int v7; // eax
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v13; // eax
  int v14; // eax
  int v15; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  v16 = 0LL;
  v15 = 0;
  v5 = a2;
  v7 = sub_140792CCC(a1, a2, 36868);
  if ( v7 && (unsigned int)sub_1407ED29C(a1, v7, (__int64)&v16, 0x10u) )
  {
    v8 = sub_14084388C(&v16, &v15);
    v9 = v8 != 0 ? v15 : 0;
    v10 = sub_140792CCC(a1, v5, 28685);
    if ( v10 )
    {
      v9 |= 0x1000u;
      v13 = sub_140792CCC(a1, v10, 16400);
      if ( v13 )
      {
        v14 = sub_1407ECF5C(a1, v13, 0);
        if ( v14 == 2 )
          v9 |= 0x2000u;
      }
    }
    v11 = sub_140792CCC(a1, v5, 16434);
    if ( v11 )
      v9 |= (unsigned int)sub_1407ECF5C(a1, v11, 0) << 16;
    *a3 = v9;
    return 1;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpGetExeEntryFlags");
  }
  return v4;
}
