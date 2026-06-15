/*
 * XREFs of ??_ECConnectionNode@@UEAAPEAXI@Z @ 0x140010660
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x14002E29C (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=2
CConnectionNode *__fastcall CConnectionNode::`vector deleting destructor'(CConnectionNode *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  LPVOID v12; // rdi
  LPVOID Context; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)this = &CConnectionNode::`vftable';
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 15) = 0LL;
  }
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 16) = 0LL;
  }
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 17) = 0LL;
  }
  v7 = _InterlockedExchange64((volatile __int64 *)this + 20, 0LL);
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
  {
    CloseHandle(*(HANDLE *)v7);
    operator delete((void *)v7);
  }
  v8 = *((_QWORD *)this + 14);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0xA8uLL);
    }
    else
    {
      v12 = 0LL;
      if ( InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context) )
        v12 = Context;
      if ( g_bSkipRTHeap )
      {
        operator delete[](this);
      }
      else
      {
        if ( v12 )
          RtlFreeMemoryBlockLookaside(v12, this);
        if ( (byte_1400C1841 & 4) != 0 )
          McTemplateU0pqpqqqqqq_EventWriteTransfer(v10, v9, v11, 6, (char)v12, 0, 0, 0);
      }
    }
  }
  return this;
}
