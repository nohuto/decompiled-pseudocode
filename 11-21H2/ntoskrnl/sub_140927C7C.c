/*
 * XREFs of sub_140927C7C @ 0x140927C7C
 * Callers:
 *     sub_140928C60 @ 0x140928C60 (sub_140928C60.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140927D44 @ 0x140927D44 (sub_140927D44.c)
 *     sub_140928158 @ 0x140928158 (sub_140928158.c)
 */

__int64 __fastcall sub_140927C7C(ULONG_PTR BugCheckParameter1, struct _KEVENT *a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v8; // r9
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v11[3]; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0LL;
  Object = 0LL;
  memset(v11, 0, sizeof(v11));
  v10 = 0LL;
  result = sub_140927D44(BugCheckParameter1, a2, 0LL, &Object, &v10);
  if ( (int)result >= 0 )
  {
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v11, v8);
    sub_140928158((PVOID)BugCheckParameter1, Object, a2);
    sub_1402D0930((__int64)v11, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x4F676244u);
    result = 0LL;
    v4 = v10;
  }
  *a3 = v4;
  return result;
}
