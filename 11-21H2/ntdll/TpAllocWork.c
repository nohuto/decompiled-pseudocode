/*
 * XREFs of TpAllocWork @ 0x18001F6F0
 * Callers:
 *     RtlpFcAllocateChangeRegistration @ 0x18005997C (RtlpFcAllocateChangeRegistration.c)
 *     LdrpEnableParallelLoading @ 0x180074450 (LdrpEnableParallelLoading.c)
 *     RtlpCtContextInit @ 0x18010EE94 (RtlpCtContextInit.c)
 * Callees:
 *     TppWorkInitialize @ 0x18001C310 (TppWorkInitialize.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     TppCleanupGroupAddMember @ 0x18007D77C (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocWork(_PEB_LDR_DATA *Ldr, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _PEB_LDR_DATA *v7; // r14
  unsigned int v8; // edi
  __int64 Heap; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  int v13; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+88h] [rbp+20h]

  v7 = Ldr;
  if ( a4 )
    v8 = *(_DWORD *)(a4 + 56);
  else
    v8 = 0;
  if ( !Ldr || !a2 || (v8 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    *(_QWORD *)&v7->Length = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8u, 240LL);
    v10 = (_QWORD *)Heap;
    v15 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v11 = TppWorkInitialize(Heap, a3, a4, v8, (__int64)TppWorkpCleanupGroupMemberVFuncs, (__int64)TppWorkpTaskVFuncs);
      v13 = v11;
      if ( v11 >= 0 )
      {
        v10[10] = a2;
        v11 = 0;
        v13 = 0;
        if ( a4 )
          v10[4] = *(_QWORD *)(a4 + 48);
        if ( v10[2] )
          TppCleanupGroupAddMember(v10);
      }
    }
    else
    {
      v11 = -1073741801;
      v13 = -1073741801;
    }
    if ( v11 >= 0 )
      goto LABEL_15;
    if ( v10 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), v15);
      v10 = 0LL;
      v11 = v13;
    }
    if ( v11 >= 0 )
LABEL_15:
      *(_QWORD *)&v7->Length = v10;
    return (unsigned int)v11;
  }
}
