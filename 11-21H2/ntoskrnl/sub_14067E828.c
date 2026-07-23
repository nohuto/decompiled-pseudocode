/*
 * XREFs of sub_14067E828 @ 0x14067E828
 * Callers:
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407F6698 @ 0x1407F6698 (sub_1407F6698.c)
 *     sub_14085BE8C @ 0x14085BE8C (sub_14085BE8C.c)
 *     sub_14091210C @ 0x14091210C (sub_14091210C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140722534 @ 0x140722534 (sub_140722534.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_1407F7A58 @ 0x1407F7A58 (sub_1407F7A58.c)
 */

__int64 __fastcall sub_14067E828(__int64 a1, __int64 a2, char a3)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v12; // rcx
  ULONG_PTR v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx

  v5 = *(unsigned int *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    v8 = sub_1406BF400(v7, v5);
  else
    v8 = sub_1407C9820(v7);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = v8;
  if ( a3 )
  {
    sub_140722534(v9, v8, *(unsigned int *)(a1 + 40));
  }
  else if ( (unsigned __int8)sub_1407F7A58(v9, v8) )
  {
    if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
      sub_1406BF450(v12, a2);
    else
      sub_1407C97C0(v12, a2);
    ExAcquirePushLockSharedEx(*(_QWORD *)(a1 + 32) + 72LL, 0LL);
    v13 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
      v14 = sub_1406BF400(v13, *(unsigned int *)(a1 + 40));
    else
      v14 = sub_1407C9820(v13);
    v10 = v14;
    sub_140722534(*(_QWORD *)(a1 + 32), v14, *(unsigned int *)(a1 + 40));
    v15 = *(_QWORD *)(a1 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v15 + 72));
    sub_1402AFC00(v15 + 72);
  }
  return v10;
}
