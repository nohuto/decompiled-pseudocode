/*
 * XREFs of MiIncrementCombinedPte @ 0x140217740
 * Callers:
 *     MiCreateCombineAnchor @ 0x14021503C (MiCreateCombineAnchor.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 * Callees:
 *     MiReferenceCloneProto @ 0x140217788 (MiReferenceCloneProto.c)
 */

__int64 __fastcall MiIncrementCombinedPte(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(((a2 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  result = MiReferenceCloneProto(a1, *(_QWORD *)v2, a2, 0, 0LL);
  if ( (_DWORD)result )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 392), 1u);
  return result;
}
