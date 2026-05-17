/*
 * XREFs of RtlFindMessage @ 0x180035010
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFindMessageInTable @ 0x1800350CC (RtlpFindMessageInTable.c)
 *     LdrpAccessResourceData @ 0x180038740 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x180040060 (LdrpSearchResourceSection_U.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFindMessage(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[5]; // [rsp+40h] [rbp-38h] BYREF

  v10[1] = a2;
  v10[3] = a3;
  v10[2] = 1LL;
  v10[4] = a4;
  result = LdrpSearchResourceSection_U(a1, (__int64)&v9);
  if ( (int)result >= 0 )
  {
    result = LdrpAccessResourceData(a1, v9, v10, &v8);
    if ( (int)result >= 0 )
      return RtlpFindMessageInTable(v10[0], v8, a4, a5);
  }
  return result;
}
