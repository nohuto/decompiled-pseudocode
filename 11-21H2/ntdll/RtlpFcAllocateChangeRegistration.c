/*
 * XREFs of RtlpFcAllocateChangeRegistration @ 0x18005997C
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1800598A0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpAllocWork @ 0x18001F6F0 (TpAllocWork.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpFcAllocateChangeRegistration(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 Heap; // rax
  __int64 v6; // rbx

  v3 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 48LL);
  v6 = Heap;
  if ( Heap )
  {
    if ( (int)TpAllocWork((_PEB_LDR_DATA *)(Heap + 40), (__int64)RtlpFcChangeRegistrationCallback, Heap, 0LL) < 0 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      *(_QWORD *)(v6 + 16) = a1;
      v3 = v6;
      *(_QWORD *)(v6 + 24) = a2;
    }
  }
  return v3;
}
