/*
 * XREFs of sub_140A853A0 @ 0x140A853A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A83D24 @ 0x140A83D24 (sub_140A83D24.c)
 *     sub_140A87EFC @ 0x140A87EFC (sub_140A87EFC.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A885FC @ 0x140A885FC (sub_140A885FC.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 *     sub_140A896FC @ 0x140A896FC (sub_140A896FC.c)
 */

char __fastcall sub_140A853A0(__int64 a1, ULONG_PTR a2, const void *a3, const void *a4, int a5, char a6)
{
  __int64 v10; // rbp
  char result; // al
  __int64 v12; // r13
  char v13; // r12
  const void *v14; // [rsp+40h] [rbp-48h] BYREF
  const void *v15; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-38h] BYREF

  v16[1] = sub_140A88738(a1);
  v10 = sub_140A88430(a1);
  if ( v10 && (sub_140A83D24(), a3 != (const void *)-559026163LL) && (v12 = sub_140A885FC(a3)) != 0 )
  {
    v16[0] = a2;
    v14 = a4;
    v15 = a3;
    if ( (unsigned int)sub_140A896FC(&v15, v16, &v14) )
    {
      v13 = sub_14042A5E0(a1, v16[0]);
      sub_140A87EFC(v12, a6);
      if ( v13 )
        _InterlockedExchange((volatile __int32 *)(v10 + 188), 0);
      return v13;
    }
    else
    {
      if ( a5 )
      {
        sub_140A88948(
          byte_140C0D978,
          "Cannot flush map register that isn't mapped! (Map register base %p, flushing address %p, MDL %p)",
          (const void *)0x20,
          a3,
          a4);
        sub_1405FFA20(0xE6u, 0x20uLL, (ULONG_PTR)a3, (ULONG_PTR)a4, a2, byte_140C0D978);
      }
      return 0;
    }
  }
  else
  {
    result = sub_14042A5E0(a1, a2);
    if ( v10 )
    {
      if ( result )
        _InterlockedExchange((volatile __int32 *)(v10 + 188), 0);
    }
  }
  return result;
}
