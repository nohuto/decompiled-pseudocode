/*
 * XREFs of sub_1800161E4 @ 0x1800161E4
 * Callers:
 *     SubscribeActivityCoordinatorPolicy @ 0x180015F90 (SubscribeActivityCoordinatorPolicy.c)
 * Callees:
 *     sub_1800065B0 @ 0x1800065B0 (sub_1800065B0.c)
 *     CrmActivityRequest @ 0x180009810 (CrmActivityRequest.c)
 *     sub_18001599C @ 0x18001599C (sub_18001599C.c)
 *     sub_180015FBC @ 0x180015FBC (sub_180015FBC.c)
 *     UnsubscribeActivityCoordinatorPolicy_0 @ 0x1800162F4 (UnsubscribeActivityCoordinatorPolicy_0.c)
 */

__int64 __fastcall sub_1800161E4(__int64 a1, __int64 a2, __int64 a3, __int64 **a4)
{
  unsigned int v8; // ebx
  int v9; // ecx
  _DWORD *i; // rax
  __int64 *v11; // rax
  __int64 *v12; // rdi
  int v13; // ebx

  if ( a2 )
  {
    v9 = 0;
    for ( i = (_DWORD *)a1; *i == 2; ++i )
    {
      if ( (unsigned int)++v9 >= 7 )
        return (unsigned int)-2147024809;
    }
    v11 = (__int64 *)sub_1800065B0(0x28uLL);
    v12 = v11;
    if ( v11 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[4] = 0LL;
      v11[2] = a2;
      v11[3] = a3;
      v13 = sub_180015FBC(v11);
      if ( v13 >= 0
        && (v13 = sub_18001599C(
                    v12 + 1,
                    *v12,
                    0x515u,
                    a1,
                    (__int64)L"ActivityCoordinator Adapter Callback",
                    0LL,
                    (__int64)sub_1800160C0,
                    (__int64)v12),
            v13 >= 0)
        && (v13 = CrmActivityRequest(v12[1]), v13 >= 0) )
      {
        *a4 = v12;
        return 0;
      }
      else
      {
        v8 = v13 | 0x10000000;
        UnsubscribeActivityCoordinatorPolicy_0(v12);
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v8;
}
