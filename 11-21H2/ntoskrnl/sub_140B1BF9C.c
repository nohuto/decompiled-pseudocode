/*
 * XREFs of sub_140B1BF9C @ 0x140B1BF9C
 * Callers:
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B1C6B0 @ 0x140B1C6B0 (sub_140B1C6B0.c)
 */

_DWORD *sub_140B1BF9C()
{
  __int64 v0; // rcx
  _DWORD *result; // rax
  __int64 v2; // rcx
  _DWORD *v3; // rdi
  _DWORD *v4; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  dword_140C5B11C = 0;
  dword_140C5B120 = 0;
  qword_140C5B128 = 0LL;
  qword_140C15B60 = 0LL;
  v4 = 0LL;
  v5[0] = 1527004268;
  v5[1] = 1201445829;
  v5[2] = 1736995215;
  v5[3] = 1054971003;
  if ( (int)KsrGetFirmwareInformation(&v4) >= 0 && v4 && *v4 >= 8u && (v4[81] & 1) != 0 )
    dword_140C5B11C |= 0x10000000u;
  if ( (qword_140C15C78 & 4) != 0 )
  {
    dword_140C5B120 = 2;
    dword_140C5B11C = 2;
  }
  LODWORD(v4) = 0;
  result = (_DWORD *)sub_140B1C6B0(v0, v5, 0LL, 0LL, &v4);
  if ( (_DWORD)result == -1073741789 )
  {
    result = ExAllocatePoolWithTag(PagedPool, (unsigned int)v4 + 4LL, 0x64506142u);
    v3 = result;
    if ( result )
    {
      sub_140B1C6B0(v2, v5, 0LL, result + 1, &v4);
      *v3 = (_DWORD)v4;
      qword_140C5B128 = v3;
      result = (_DWORD *)KsrInitPageDatabase(v3 + 1);
      if ( (int)result >= 0 )
        dword_140C5B11C |= 4u;
    }
  }
  return result;
}
