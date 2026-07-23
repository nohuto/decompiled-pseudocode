/*
 * XREFs of RtlQueryPackageIdentity @ 0x140204280
 * Callers:
 *     sub_1406745EC @ 0x1406745EC (sub_1406745EC.c)
 *     sub_14070B934 @ 0x14070B934 (sub_14070B934.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1407DCA0C @ 0x1407DCA0C (sub_1407DCA0C.c)
 *     sub_1409F4DA0 @ 0x1409F4DA0 (sub_1409F4DA0.c)
 * Callees:
 *     sub_1402042D0 @ 0x1402042D0 (sub_1402042D0.c)
 */

NTSTATUS __cdecl RtlQueryPackageIdentity(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PBOOLEAN Packaged)
{
  NTSTATUS result; // eax

  result = sub_1402042D0(
             (_DWORD)TokenHandle,
             (_DWORD)PackageFullName,
             (_DWORD)PackageSize,
             (_DWORD)AppId,
             (__int64)AppIdSize);
  if ( result >= 0 )
  {
    if ( Packaged )
      *Packaged = 0;
  }
  return result;
}
