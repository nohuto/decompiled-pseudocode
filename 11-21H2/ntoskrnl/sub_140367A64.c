/*
 * XREFs of sub_140367A64 @ 0x140367A64
 * Callers:
 *     sub_140348640 @ 0x140348640 (sub_140348640.c)
 *     sub_14074F700 @ 0x14074F700 (sub_14074F700.c)
 * Callees:
 *     sub_140366C48 @ 0x140366C48 (sub_140366C48.c)
 *     sub_140366FB0 @ 0x140366FB0 (sub_140366FB0.c)
 *     sub_140367B44 @ 0x140367B44 (sub_140367B44.c)
 *     sub_140367DEC @ 0x140367DEC (sub_140367DEC.c)
 *     sub_140461DE4 @ 0x140461DE4 (sub_140461DE4.c)
 */

char *__fastcall sub_140367A64(ULONG_PTR BugCheckParameter2)
{
  char *result; // rax
  __int64 v3; // rax
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR Amount; // [rsp+50h] [rbp+18h] BYREF

  Amount = 0LL;
  LODWORD(v4) = 0;
  if ( !dword_140C11770 || (v3 = sub_140366C48(BugCheckParameter2), result = (char *)sub_140461DE4(v3), !(_DWORD)result) )
  {
    sub_140366FB0(BugCheckParameter2);
    result = (char *)sub_140367B44(BugCheckParameter2, (__int64)&Amount, (__int64)&v4);
    if ( (unsigned __int64)(result - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      return (char *)sub_140367DEC(result, Amount);
  }
  return result;
}
