/*
 * XREFs of TpSimpleTryPost @ 0x180032F00
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180033038 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkInitialize @ 0x1800331F4 (TppWorkInitialize.c)
 *     TppWorkPost @ 0x1800351B8 (TppWorkPost.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     TppCleanupGroupAddMember @ 0x1800610A0 (TppCleanupGroupAddMember.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180127278 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpSimpleTryPost(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  _PEB_LDR_DATA *v6; // r14
  int v7; // edi
  __int64 Heap; // rax
  _QWORD *v9; // rbx
  int v10; // edi
  int v12; // [rsp+34h] [rbp-24h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+70h] [rbp+18h]

  v5 = a2;
  v6 = Ldr;
  if ( a3 )
    v7 = *(_DWORD *)(a3 + 56);
  else
    v7 = 0;
  if ( !Ldr || (v7 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8u, 240LL);
    v9 = (_QWORD *)Heap;
    v14 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v10 = TppWorkInitialize(
              Heap,
              v5,
              a3,
              v7,
              (__int64)TppSimplepCleanupGroupMemberVFuncs,
              (__int64)TppSimplepTaskVFuncs);
      v12 = v10;
      if ( v10 >= 0 )
      {
        v10 = 0;
        v12 = 0;
        v9[10] = v6;
        if ( a3 )
          v9[4] = *(_QWORD *)(a3 + 48);
        if ( v9[2] )
          TppCleanupGroupAddMember(v9);
      }
    }
    else
    {
      v10 = -1073741801;
      v12 = -1073741801;
    }
    if ( v10 >= 0 )
      goto LABEL_15;
    if ( v9 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), v14);
      v9 = 0LL;
      v10 = v12;
    }
    if ( v10 >= 0 )
LABEL_15:
      TppWorkPost(v9);
    return (unsigned int)v10;
  }
}
