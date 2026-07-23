/*
 * XREFs of sub_1409E4A50 @ 0x1409E4A50
 * Callers:
 *     sub_1409E4318 @ 0x1409E4318 (sub_1409E4318.c)
 *     sub_1409E491C @ 0x1409E491C (sub_1409E491C.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1409E4A50(struct _EX_RUNDOWN_REF *BugCheckParameter1, __int64 a2)
{
  ULONG_PTR Count; // rdi
  struct _EX_RUNDOWN_REF *v5; // rbx
  __int64 v6; // r9
  char v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 *v10; // rcx
  _OWORD v12[3]; // [rsp+28h] [rbp-50h] BYREF

  memset(v12, 0, sizeof(v12));
  Count = BugCheckParameter1[170].Count;
  if ( Count )
  {
    v5 = BugCheckParameter1 + 139;
    if ( sub_140347810(BugCheckParameter1 + 139) )
    {
      sub_14030D5C0((ULONG_PTR)BugCheckParameter1, 0LL, (__int64)v12, v6);
      v7 = *(_BYTE *)(a2 + 4);
      v8 = *(_DWORD *)a2;
      if ( v7 )
        _interlockedbittestandset((volatile signed __int32 *)(Count + 888), v8);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(Count + 888), v8);
      v9 = 0LL;
      v10 = (__int64 *)BugCheckParameter1[176].Count;
      if ( v10 )
        v9 = *v10;
      if ( v9 )
      {
        if ( v7 )
          _interlockedbittestandset((volatile signed __int32 *)(v9 + 576), v8);
        else
          _interlockedbittestandreset((volatile signed __int32 *)(v9 + 576), v8);
      }
      sub_1402D0930((__int64)v12, 0LL);
      sub_1402AD030(v5);
    }
  }
  return 0LL;
}
