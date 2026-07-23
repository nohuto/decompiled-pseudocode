/*
 * XREFs of sub_140673B4C @ 0x140673B4C
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_140B27E7C @ 0x140B27E7C (sub_140B27E7C.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140673C3C @ 0x140673C3C (sub_140673C3C.c)
 */

__int64 __fastcall sub_140673B4C(struct _EX_RUNDOWN_REF *BugCheckParameter1)
{
  ULONG_PTR Count; // rbp
  char v3; // si
  struct _EX_RUNDOWN_REF *v4; // rdi
  __int64 v5; // r9
  int v6; // ebx
  _OWORD v8[3]; // [rsp+20h] [rbp-58h] BYREF

  Count = BugCheckParameter1[285].Count;
  v3 = 0;
  memset(v8, 0, sizeof(v8));
  if ( qword_140C5AE28 )
  {
    v4 = BugCheckParameter1 + 139;
    if ( *((struct _EX_RUNDOWN_REF **)KeGetCurrentThread() + 23) != BugCheckParameter1 )
    {
      if ( !sub_140347810(BugCheckParameter1 + 139) )
        return (unsigned int)-1073741558;
      sub_14030D5C0((ULONG_PTR)BugCheckParameter1, 0LL, (__int64)v8, v5);
      v3 = 1;
    }
    v6 = sub_140673C3C(BugCheckParameter1, Count + 448);
    if ( v6 >= 0 )
      v6 = 0;
    if ( v3 )
    {
      sub_1402D0930((__int64)v8, 0LL);
      sub_1402AD030(v4);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v6;
}
