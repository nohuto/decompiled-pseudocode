/*
 * XREFs of sub_180024160 @ 0x180024160
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021898 @ 0x180021898 (sub_180021898.c)
 *     sub_180021E5C @ 0x180021E5C (sub_180021E5C.c)
 *     sub_180024220 @ 0x180024220 (sub_180024220.c)
 *     sub_1800246F8 @ 0x1800246F8 (sub_1800246F8.c)
 */

__int64 __fastcall sub_180024160(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int128 v7; // xmm0
  volatile signed __int64 *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  result = *a2;
  if ( !*a2 )
    result = a2[1];
  if ( result )
  {
    v5 = sub_180021E5C();
    *(_QWORD *)&v9 = v5;
    v6 = v5;
    if ( v5 )
    {
      v7 = *(_OWORD *)a2;
      *(_QWORD *)(v5 + 152) = 127LL;
      v9 = v7;
      sub_180021898(v5, &v9);
    }
    else
    {
      v6 = 0LL;
    }
    sub_1800246F8(a1 + 112, v6);
    v8 = *(volatile signed __int64 **)(a1 + 112);
    _InterlockedExchangeAdd64(v8 + 18, 0LL);
    return sub_180024220((void *)v8);
  }
  return result;
}
