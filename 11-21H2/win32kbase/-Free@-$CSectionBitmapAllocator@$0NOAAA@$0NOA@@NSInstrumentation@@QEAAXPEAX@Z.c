/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00D9E04
 * Callers:
 *     ?Free@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00D9EB8 (-Free@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C0022230 (GreLeaveCriticalRegionAndReleasePushLockExclusive.c)
 *     GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C0022C80 (GreEnterCriticalRegionAndAcquirePushLockExclusive.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Free(__int64 a1, void *a2)
{
  __int64 v2; // rbx
  ULONG v5; // edi

  if ( a2 )
  {
    v2 = *(_QWORD *)a1;
    GreEnterCriticalRegionAndAcquirePushLockExclusive(*(_QWORD *)a1);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0xDE0
       + ((unsigned int)((_DWORD)a2 - (*(_DWORD *)(a1 + 16) ^ *(_DWORD *)(a1 + 8))) >> 12);
    RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    memset(a2, 0, 0xDE0uLL);
    *(_DWORD *)(a1 + 32) = v5;
    GreLeaveCriticalRegionAndReleasePushLockExclusive(v2);
  }
}
