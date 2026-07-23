/*
 * XREFs of sub_14069F668 @ 0x14069F668
 * Callers:
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14071C288 @ 0x14071C288 (sub_14071C288.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14069F668(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v7; // rax
  volatile signed __int64 *v8; // rbx

  v3 = *(_QWORD **)(a1 + 16);
  if ( !v3 )
    return;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (volatile signed __int64 *)(*(_QWORD *)(v7 + 32) + 1680LL);
  if ( a2 || (ExAcquirePushLockExclusiveEx(*(_QWORD *)(v7 + 32) + 1680LL, 0LL), (v3 = *(_QWORD **)(a1 + 16)) != 0LL) )
  {
    if ( (_QWORD *)v3[2] == v3 + 2
      || (sub_14071C288((_DWORD)v3, a2, a3, 267, 0, 0LL, a3), (v3 = *(_QWORD **)(a1 + 16)) != 0LL) )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v3 + 7));
      *(_QWORD *)v3[1] = *v3;
      if ( *v3 )
        *(_QWORD *)(*v3 + 8LL) = v3[1];
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !a2 )
      {
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        sub_1402AFC00((ULONG_PTR)v8);
      }
      ExFreePoolWithTag(v3, 0);
      return;
    }
    if ( a2 )
      return;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  sub_1402AFC00((ULONG_PTR)v8);
}
