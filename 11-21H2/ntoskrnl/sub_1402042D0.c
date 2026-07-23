/*
 * XREFs of sub_1402042D0 @ 0x1402042D0
 * Callers:
 *     RtlQueryPackageIdentity @ 0x140204280 (RtlQueryPackageIdentity.c)
 *     sub_1406E91DC @ 0x1406E91DC (sub_1406E91DC.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140204330 (RtlQueryPackageClaims.c)
 */

NTSTATUS __fastcall sub_1402042D0(void *a1, WCHAR *a2, ULONG_PTR *a3, WCHAR *a4, ULONG_PTR *a5, __int64 a6, _QWORD *a7)
{
  _QWORD *v7; // rbx
  NTSTATUS result; // eax

  a6 = 0LL;
  v7 = a7;
  result = RtlQueryPackageClaims(
             a1,
             a2,
             a3,
             a4,
             a5,
             0LL,
             (PPS_PKG_CLAIM)((unsigned __int64)&a6 & -(__int64)(a7 != 0LL)),
             0LL);
  if ( result >= 0 )
  {
    if ( v7 )
      *v7 = (unsigned int)a6;
  }
  return result;
}
