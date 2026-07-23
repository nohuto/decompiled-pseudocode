/*
 * XREFs of sub_1409E47C4 @ 0x1409E47C4
 * Callers:
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall sub_1409E47C4(struct _EX_RUNDOWN_REF *BugCheckParameter1)
{
  ULONG_PTR Count; // rbx
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v4; // r9
  unsigned __int8 v5; // bl
  __int64 v6; // rax
  __int64 *v7; // rcx
  _OWORD v9[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  Count = BugCheckParameter1[170].Count;
  if ( !Count )
    return 0;
  v3 = BugCheckParameter1 + 139;
  if ( !sub_140347810(BugCheckParameter1 + 139) )
    return 0;
  sub_14030D5C0((ULONG_PTR)BugCheckParameter1, 0LL, (__int64)v9, v4);
  v5 = _bittest((const signed __int32 *)(Count + 888), 0);
  v6 = 0LL;
  v7 = (__int64 *)BugCheckParameter1[176].Count;
  if ( v7 )
    v6 = *v7;
  if ( v6 && (v5 || _bittest((const signed __int32 *)(v6 + 576), 0)) )
    v5 = 1;
  sub_1402D0930((__int64)v9, 0LL);
  sub_1402AD030(v3);
  return v5;
}
