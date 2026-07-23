/*
 * XREFs of sub_1409CE444 @ 0x1409CE444
 * Callers:
 *     sub_1409CD850 @ 0x1409CD850 (sub_1409CD850.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1409CE3A8 @ 0x1409CE3A8 (sub_1409CE3A8.c)
 */

__int64 __fastcall sub_1409CE444(struct _LIST_ENTRY **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  signed __int64 *v4; // rbx
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v3 = -1073741275;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx(off_140D3B060, 0LL);
  sub_1409CE3A8(*(PRTL_DYNAMIC_HASH_TABLE *)(off_140D3B060 + 8), a1, &v6);
  if ( v6 )
    v3 = *(_BYTE *)(v6 + 48) != 0 ? 0xC0000225 : 0;
  v4 = (signed __int64 *)off_140D3B060;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)off_140D3B060, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  sub_1402AFC00((ULONG_PTR)v4);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v3;
}
