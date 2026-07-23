/*
 * XREFs of sub_1406D7440 @ 0x1406D7440
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406D7440(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // ebp
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = BugCheckParameter4;
  sub_1407C97FC(&v8);
  ExAcquirePushLockSharedEx(BugCheckParameter3 + 72, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v4 = sub_1406BF400(BugCheckParameter3, v3, &v8);
  else
    v4 = sub_1407C9820(BugCheckParameter3);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -1073741670;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(v4 + 2) & 0xC) != 0xC )
  {
    v6 = sub_14071F300(BugCheckParameter3, v3);
    if ( v6 < 0 )
      goto LABEL_8;
    *(_WORD *)(v5 + 2) |= 0xCu;
  }
  v6 = 0;
LABEL_8:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v8);
  else
    sub_1407C97C0(BugCheckParameter3, &v8);
LABEL_10:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
  sub_1402AFC00(BugCheckParameter3 + 72);
  return (unsigned int)v6;
}
