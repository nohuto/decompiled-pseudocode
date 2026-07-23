/*
 * XREFs of sub_140A91824 @ 0x140A91824
 * Callers:
 *     sub_140A807E4 @ 0x140A807E4 (sub_140A807E4.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_1405FFA00 @ 0x1405FFA00 (sub_1405FFA00.c)
 *     sub_140A83EE0 @ 0x140A83EE0 (sub_140A83EE0.c)
 *     sub_140A840C4 @ 0x140A840C4 (sub_140A840C4.c)
 *     sub_140A89224 @ 0x140A89224 (sub_140A89224.c)
 *     sub_140A91AD0 @ 0x140A91AD0 (sub_140A91AD0.c)
 *     sub_140A92074 @ 0x140A92074 (sub_140A92074.c)
 *     sub_140A92124 @ 0x140A92124 (sub_140A92124.c)
 *     sub_140A92CE0 @ 0x140A92CE0 (sub_140A92CE0.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 *     sub_140A9B6E0 @ 0x140A9B6E0 (sub_140A9B6E0.c)
 */

LONG_PTR __fastcall sub_140A91824(struct _LIST_ENTRY *BugCheckParameter2, const void *a2)
{
  struct _LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v6; // rax
  LONG_PTR result; // rax
  __int64 v8; // rcx
  void *v9; // rsi
  char v10[40]; // [rsp+20h] [rbp-68h] BYREF
  char v11[40]; // [rsp+48h] [rbp-40h] BYREF

  v3 = BugCheckParameter2;
  if ( dword_140C1AE0C )
  {
    Blink = BugCheckParameter2[19].Blink;
    if ( !Blink )
      goto LABEL_22;
    do
    {
      Flink = Blink[3].Flink;
      if ( !Flink )
        break;
      Blink = Flink[19].Blink;
      BugCheckParameter2 = Flink;
    }
    while ( Blink );
    if ( BugCheckParameter2 == v3 )
    {
LABEL_22:
      while ( 1 )
      {
        v6 = sub_140A83EE0(v3);
        if ( !v6 )
          break;
        sub_140A89224((ULONG_PTR)v6);
      }
    }
    else
    {
      sub_140A840C4(BugCheckParameter2);
    }
  }
  result = (unsigned int)dword_140D4E000;
  if ( !dword_140D4E000 )
  {
    sub_140A91AD0((ULONG_PTR)v3);
    if ( (unsigned int)sub_140A92124(v3, 0LL) )
    {
      sub_140A92CE0(576LL);
      if ( (int)sub_1403BF7F4(v10, 38LL, (__int64)"CulpritAddress = %p.\n", a2) >= 0 )
        sub_1405FDF9C(v10);
      sub_140A92D34(576LL, a2, 0LL, 0LL);
    }
    sub_1405FFA00((__int64)v3, 0LL);
    result = sub_140A92074(v8);
    v9 = (void *)result;
    if ( result )
    {
      sub_140A92CE0(513LL);
      if ( (int)sub_1403BF7F4(v11, 38LL, (__int64)"CulpritAddress = %p.\n", a2) >= 0 )
        sub_1405FDF9C(v11);
      sub_140A92D34(513LL, a2, 0LL, 0LL);
      result = ObfDereferenceObjectWithTag(v9, 0x49667256u);
    }
    if ( (dword_140C29FC0 & 0x400) != 0 )
      return sub_140A9B6E0(v3);
  }
  return result;
}
