/*
 * XREFs of sub_140A513D4 @ 0x140A513D4
 * Callers:
 *     sub_140A50D3C @ 0x140A50D3C (sub_140A50D3C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ObQueryNameString @ 0x14070F640 (ObQueryNameString.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_WORD *__fastcall sub_140A513D4(void *a1)
{
  _WORD *v1; // rbx
  _WORD *Pool2; // rax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-228h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+30h] [rbp-218h] BYREF

  ReturnLength[0] = 0;
  v1 = 0LL;
  if ( ObQueryNameString(a1, &ObjectNameInfo, 0x200u, ReturnLength) >= 0 )
  {
    if ( ObjectNameInfo.Name.Buffer )
    {
      Pool2 = (_WORD *)ExAllocatePool2(64LL, ObjectNameInfo.Name.Length + 2LL, 1766084676LL);
      v1 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, ObjectNameInfo.Name.Buffer, ObjectNameInfo.Name.Length);
        v1[(unsigned __int64)ObjectNameInfo.Name.Length >> 1] = 0;
      }
    }
  }
  return v1;
}
