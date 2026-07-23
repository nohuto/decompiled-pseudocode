/*
 * XREFs of sub_1407B66E0 @ 0x1407B66E0
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1406785F0 (SeCheckForCriticalAceRemoval.c)
 *     sub_140696CCC @ 0x140696CCC (sub_140696CCC.c)
 *     SeLocateProcessImageName @ 0x1406D0AC0 (SeLocateProcessImageName.c)
 *     sub_1407240A0 @ 0x1407240A0 (sub_1407240A0.c)
 *     sub_1407241BC @ 0x1407241BC (sub_1407241BC.c)
 *     sub_14079D470 @ 0x14079D470 (sub_14079D470.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_140847400 @ 0x140847400 (sub_140847400.c)
 *     sub_140847BB4 @ 0x140847BB4 (sub_140847BB4.c)
 *     sub_1409188E8 @ 0x1409188E8 (sub_1409188E8.c)
 *     sub_1409C6D8C @ 0x1409C6D8C (sub_1409C6D8C.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7340 (SeAuditFipsCryptoSelftests.c)
 *     sub_1409C7C84 @ 0x1409C7C84 (sub_1409C7C84.c)
 *     sub_1409C7E08 @ 0x1409C7E08 (sub_1409C7E08.c)
 *     SeAuditTransactionStateChange @ 0x1409C7FD0 (SeAuditTransactionStateChange.c)
 *     sub_1409C820C @ 0x1409C820C (sub_1409C820C.c)
 *     sub_1409C8548 @ 0x1409C8548 (sub_1409C8548.c)
 *     sub_1409C8774 @ 0x1409C8774 (sub_1409C8774.c)
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 *     sub_1409C99C0 @ 0x1409C99C0 (sub_1409C99C0.c)
 *     sub_1409C9C64 @ 0x1409C9C64 (sub_1409C9C64.c)
 *     sub_1409F5F90 @ 0x1409F5F90 (sub_1409F5F90.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1407B66E0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx

  if ( *(_QWORD *)(a1 + 2240) && (_QWORD)xmmword_140C1BE40 )
    return sub_14042A5E0(a1, a2);
  v3 = *(_QWORD *)(a1 + 1472);
  if ( !v3 )
    return 3221226021LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)(v3 + 2) + 16LL, 0x6E497350u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  *(_OWORD *)PoolWithTag = *(_OWORD *)v3;
  if ( PoolWithTag[1] )
  {
    PoolWithTag[1] = PoolWithTag + 2;
    memmove(PoolWithTag + 2, *(const void **)(v3 + 8), *(unsigned __int16 *)(v3 + 2));
  }
  *a2 = v5;
  return 0LL;
}
