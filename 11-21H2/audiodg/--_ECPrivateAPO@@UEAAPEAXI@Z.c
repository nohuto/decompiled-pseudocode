/*
 * XREFs of ??_ECPrivateAPO@@UEAAPEAXI@Z @ 0x140024770
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x14002E29C (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
CPrivateAPO *__fastcall CPrivateAPO::`vector deleting destructor'(CPrivateAPO *this, char a2)
{
  __int64 v4; // rcx
  BOOL inited; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  unsigned __int64 v9; // rdi
  LPVOID Context; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)this = &CPrivateAPO::`vftable';
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x18uLL);
    }
    else
    {
      inited = InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context);
      v9 = (unsigned __int64)Context & -(__int64)inited;
      if ( g_bSkipRTHeap )
      {
        operator delete[](this);
      }
      else
      {
        if ( v9 )
          RtlFreeMemoryBlockLookaside(v9, this);
        if ( (byte_1400C1841 & 4) != 0 )
          McTemplateU0pqpqqqqqq_EventWriteTransfer(v7, v6, v8, 6, v9, 0, 0, 0);
      }
    }
  }
  return this;
}
