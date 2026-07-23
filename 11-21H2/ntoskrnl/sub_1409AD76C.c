/*
 * XREFs of sub_1409AD76C @ 0x1409AD76C
 * Callers:
 *     sub_1407F5540 @ 0x1407F5540 (sub_1407F5540.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140683844 @ 0x140683844 (sub_140683844.c)
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 */

__int64 __fastcall sub_1409AD76C(__int64 BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  int v5; // edi
  signed __int64 *v6; // rbx
  __int64 v7; // rsi
  unsigned int v8; // eax
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --*((_WORD *)CurrentThread + 242);
  v6 = (signed __int64 *)(BugCheckParameter1 + 1080);
  ExAcquirePushLockSharedEx(BugCheckParameter1 + 1080, 0LL);
  v7 = *(_QWORD *)(BugCheckParameter1 + 1296);
  if ( v7 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 56), 1u);
    v5 = *(_DWORD *)(v7 + 1056) != 0 ? 2 : 0;
    if ( *(_DWORD *)(v7 + 1048) )
      v5 = 1;
  }
  v8 = v5 & 0xFFFFFFFD;
  v9 = v5 | 2;
  if ( !a2 )
    v9 = v8;
  sub_140683844(BugCheckParameter1, v9, 1);
  if ( v7 )
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  sub_1402AFC00((ULONG_PTR)v6);
  v13 = sub_140687754((char *)BugCheckParameter1, v10, v11, v12);
  sub_1402F9540((__int64)CurrentThread);
  return v13;
}
