/*
 * XREFs of sub_140A9CB44 @ 0x140A9CB44
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A812D0 @ 0x140A812D0 (sub_140A812D0.c)
 *     sub_140A9AF40 @ 0x140A9AF40 (sub_140A9AF40.c)
 */

__int64 __fastcall sub_140A9CB44(const UNICODE_STRING *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !(_QWORD)xmmword_140C1B2B0 || !byte_140C1AD98 && (dword_140C1AA7C & 0x800) == 0 )
    return 3221228668LL;
  result = sub_140A9AF40(a1);
  v2 = result;
  if ( result )
  {
    if ( (dword_140C1AA7C & 0x800) == 0 )
      return sub_140A812D0(v2, &v3, 4);
    if ( byte_140C1AD98 )
      return sub_140A812D0(v2, &v3, 4);
    if ( qword_140C1ACB0 )
      return sub_140A812D0(v2, &v3, 4);
    qword_140C1ACB0 = (PVOID)ExAllocatePool2(64LL, 24LL * (unsigned int)dword_140C1ACB8, 0x6D4D7644u);
    if ( qword_140C1ACB0 )
      return sub_140A812D0(v2, &v3, 4);
    else
      return 3221225495LL;
  }
  return result;
}
