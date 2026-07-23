/*
 * XREFs of sub_14022B1D0 @ 0x14022B1D0
 * Callers:
 *     sub_1406A26A8 @ 0x1406A26A8 (sub_1406A26A8.c)
 *     sub_1406A2C44 @ 0x1406A2C44 (sub_1406A2C44.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14022B1D0(__int64 a1)
{
  __int64 v1; // r9
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // edx

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(result) = 0;
  v3 = 1LL;
  v4 = 37LL;
  do
  {
    v5 = result + 1;
    if ( (v1 & v3) == 0 )
      v5 = result;
    v3 = __ROL8__(v3, 1);
    result = v5;
    --v4;
  }
  while ( v4 );
  return result;
}
