/*
 * XREFs of sub_1406B6830 @ 0x1406B6830
 * Callers:
 *     sub_1406B67A0 @ 0x1406B67A0 (sub_1406B67A0.c)
 * Callees:
 *     sub_14066A520 @ 0x14066A520 (sub_14066A520.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 */

char __fastcall sub_1406B6830(__int64 *a1)
{
  void *v1; // rax
  char v2; // bl
  int v4; // [rsp+38h] [rbp+10h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  LODWORD(TokenInformation) = 0;
  v1 = (void *)sub_14066A520(a1, &v4);
  v2 = 1;
  if ( v4 != 1 )
    return 0;
  SeQueryInformationToken(v1, TokenVirtualizationEnabled, &TokenInformation);
  if ( !(_DWORD)TokenInformation )
    return 0;
  return v2;
}
