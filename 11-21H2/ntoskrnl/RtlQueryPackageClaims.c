/*
 * XREFs of RtlQueryPackageClaims @ 0x140204330
 * Callers:
 *     sub_140203E24 @ 0x140203E24 (sub_140203E24.c)
 *     sub_140203EE0 @ 0x140203EE0 (sub_140203EE0.c)
 *     sub_1402042D0 @ 0x1402042D0 (sub_1402042D0.c)
 *     sub_14025E12C @ 0x14025E12C (sub_14025E12C.c)
 * Callees:
 *     sub_1402044B8 @ 0x1402044B8 (sub_1402044B8.c)
 *     sub_140204630 @ 0x140204630 (sub_140204630.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 */

NTSTATUS __cdecl RtlQueryPackageClaims(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PGUID DynamicId,
        PPS_PKG_CLAIM PkgClaim,
        PULONG64 AttributesPresent)
{
  int v10; // esi
  int v12; // edx
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  PSIZE_T v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  PSIZE_T v19; // [rsp+50h] [rbp-B0h]
  char v20; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v21[102]; // [rsp+60h] [rbp-A0h] BYREF

  v10 = (int)TokenHandle;
  v18 = 0LL;
  v19 = AppIdSize;
  memset(v21, 0, sizeof(v21));
  v17 = 0LL;
  result = sub_1402044B8(v10, v12, (unsigned int)v21, (_DWORD)PkgClaim, (__int64)AttributesPresent);
  v14 = result;
  if ( result < 0 )
    return result;
  if ( PackageFullName )
  {
    if ( PackageSize )
    {
      result = sub_140204630(
                 (_DWORD)PackageFullName,
                 *PackageSize,
                 (unsigned int)&v17,
                 (unsigned int)&v20,
                 2048,
                 (__int64)L"%wZ",
                 *(_QWORD *)(v21[1] + 32LL));
      v14 = result;
      if ( result < 0 )
        return result;
      *PackageSize = v17 - (_QWORD)PackageFullName + 2;
      goto LABEL_7;
    }
    return -1073741811;
  }
  if ( PackageSize )
    return -1073741811;
LABEL_7:
  if ( AppId )
  {
    v15 = v19;
    result = sub_140204630(
               (_DWORD)AppId,
               *v19,
               (unsigned int)&v18,
               0,
               2048,
               (__int64)L"%wZ",
               *(_QWORD *)(v21[1] + 32LL) + 16LL);
    v14 = result;
    if ( result < 0 )
      return result;
    *v15 = v18 - (_QWORD)AppId + 2;
  }
  if ( DynamicId )
  {
    v16 = v21[1];
    *DynamicId = 0LL;
    if ( *(_DWORD *)(v16 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v16 + 32) + 48LL), DynamicId);
  }
  return v14;
}
