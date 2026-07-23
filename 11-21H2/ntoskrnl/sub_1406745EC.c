/*
 * XREFs of sub_1406745EC @ 0x1406745EC
 * Callers:
 *     sub_140673C3C @ 0x140673C3C (sub_140673C3C.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140204280 (RtlQueryPackageIdentity.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_14066A374 @ 0x14066A374 (sub_14066A374.c)
 *     PsQueryProcessAttributesByToken @ 0x14070BA70 (PsQueryProcessAttributesByToken.c)
 */

__int64 __fastcall sub_1406745EC(__int64 a1, _DWORD *a2, __int64 a3)
{
  void *v6; // rsi
  ULONG_PTR PackageSize; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR AppIdSize; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  LOBYTE(PackageSize) = 0;
  v6 = (void *)sub_140347920(a1, 0x746C6644u);
  PsQueryProcessAttributesByToken(v6, &PackageSize, &AppIdSize);
  if ( (_BYTE)PackageSize )
  {
    PackageSize = 256LL;
    AppIdSize = 132LL;
    if ( RtlQueryPackageIdentity(v6, (PWSTR)(a3 + 4), &PackageSize, (PWSTR)(a3 + 260), &AppIdSize, 0LL) >= 0 )
    {
      *(_WORD *)a3 = (PackageSize >> 1) - 1;
      *(_WORD *)(a3 + 2) = (AppIdSize >> 1) - 1;
    }
  }
  if ( (int)sub_14066A374((__int64)v6, a2, 0x44u, (ULONG *)&PackageSize) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    a2[2] = 0;
  }
  return sub_1402F89B0((signed __int64 *)(a1 + 1208), (unsigned __int64)v6, 0x746C6644u);
}
