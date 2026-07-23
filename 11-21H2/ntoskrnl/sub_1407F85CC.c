/*
 * XREFs of sub_1407F85CC @ 0x1407F85CC
 * Callers:
 *     sub_1407F8C00 @ 0x1407F8C00 (sub_1407F8C00.c)
 *     sub_1409ABED8 @ 0x1409ABED8 (sub_1409ABED8.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1407FCA44 @ 0x1407FCA44 (sub_1407FCA44.c)
 *     sub_1409192C8 @ 0x1409192C8 (sub_1409192C8.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

__int64 **__fastcall sub_1407F85CC(ULONG_PTR BugCheckParameter2)
{
  __int64 *v2; // rdx
  __int64 **v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 **result; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 **v10; // rax
  __int64 *v11; // rcx
  __int64 **v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v13; // [rsp+28h] [rbp-8h]

  sub_1407FCA44();
  *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFFC | 2;
  v2 = *(__int64 **)(BugCheckParameter2 + 16);
  v13 = (__int64 **)&v12;
  v12 = (__int64 **)&v12;
  if ( v2 != (__int64 *)(BugCheckParameter2 + 16) )
  {
    v3 = *(__int64 ***)(BugCheckParameter2 + 24);
    v12 = (__int64 **)v2;
    v13 = v3;
    v2[1] = (__int64)&v12;
    *v3 = (__int64 *)&v12;
    *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
    *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  }
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  result = (__int64 **)&v12;
  if ( v12 != (__int64 **)&v12 )
  {
    sub_140AB4370(v5, v4, v6);
    v10 = v12;
    v11 = *v12;
    if ( v12[1] != (__int64 *)&v12 )
LABEL_5:
      __fastfail(3u);
    while ( 1 )
    {
      if ( (__int64 **)v11[1] != v10 )
        goto LABEL_5;
      v12 = (__int64 **)v11;
      v11[1] = (__int64)&v12;
      if ( v10 == (__int64 **)&v12 )
        return (__int64 **)sub_140AB4260(&v12, &v12, v8, v9);
      sub_1409192C8(v10);
      v10 = v12;
      if ( v12[1] != (__int64 *)&v12 )
        goto LABEL_5;
      v11 = *v12;
    }
  }
  return result;
}
