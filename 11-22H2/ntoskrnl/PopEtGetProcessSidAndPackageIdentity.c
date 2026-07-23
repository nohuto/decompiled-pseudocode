/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x1407B366C
 * Callers:
 *     PopEtGetProcessAppId @ 0x1407B16E0 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140225FB0 (RtlQueryPackageIdentity.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 *     SeQueryUserSidToken @ 0x140714EB0 (SeQueryUserSidToken.c)
 *     PsQueryProcessAttributesByToken @ 0x14071DEF0 (PsQueryProcessAttributesByToken.c)
 */

signed __int64 __fastcall PopEtGetProcessSidAndPackageIdentity(__int64 a1, _DWORD *a2, __int64 a3)
{
  void *v6; // rsi
  ULONG_PTR PackageSize; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR AppIdSize; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  LOBYTE(PackageSize) = 0;
  v6 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  PsQueryProcessAttributesByToken((__int64)v6, (bool *)&PackageSize, (bool *)&AppIdSize);
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
  if ( (int)SeQueryUserSidToken((__int64)v6, a2, 0x44u, (ULONG *)&PackageSize) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    a2[2] = 0;
  }
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), (unsigned __int64)v6, 0x746C6644u);
}
