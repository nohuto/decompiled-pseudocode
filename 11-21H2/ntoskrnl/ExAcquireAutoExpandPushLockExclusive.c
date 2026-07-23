/*
 * XREFs of ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30
 * Callers:
 *     FsRtlInsertPerFileContext @ 0x1402563D0 (FsRtlInsertPerFileContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1402A2FE0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1402A3510 (FsRtlInsertPerFileObjectContext.c)
 *     sub_1402D96AC @ 0x1402D96AC (sub_1402D96AC.c)
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 *     FsRtlRemovePerFileContext @ 0x1405417D0 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1405418D0 (FsRtlRemovePerStreamContext.c)
 *     sub_1405AA6C4 @ 0x1405AA6C4 (sub_1405AA6C4.c)
 *     sub_1405AAA4C @ 0x1405AAA4C (sub_1405AAA4C.c)
 *     sub_1405AB970 @ 0x1405AB970 (sub_1405AB970.c)
 *     sub_1405AB9B8 @ 0x1405AB9B8 (sub_1405AB9B8.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406B41F0 (FsRtlTeardownPerFileContexts.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1407B1200 (FsRtlTeardownPerStreamContexts.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_14039F294 @ 0x14039F294 (sub_14039F294.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 result; // rax

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    v5 = *((unsigned __int8 *)CurrentThread + 792);
    if ( *((_BYTE *)CurrentThread + 792) || (v5 = sub_14029F6A8(BugCheckParameter2, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v6, v5);
      *((_BYTE *)CurrentThread + 792) = v5 & ~(1 << v6);
      _enable();
      v2 = (__int64)CurrentThread + 96 * v6 + 1696;
      if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        v7 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      else
        v7 = -1;
      *(_DWORD *)(v2 + 8) = v7;
      *(_QWORD *)v2 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    sub_14029F120((unsigned __int64 *)BugCheckParameter2, v2, BugCheckParameter2);
  result = *(unsigned int *)(BugCheckParameter2 + 8);
  if ( (result & 1) != 0 )
    result = sub_14039F294((unsigned int)result & 0xFFFFFFF8, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
