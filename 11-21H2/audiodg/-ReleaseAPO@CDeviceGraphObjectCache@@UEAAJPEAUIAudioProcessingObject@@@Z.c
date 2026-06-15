/*
 * XREFs of ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14000CCB0
 * Callers:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x140021FBC (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000CF38 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ??1CAPONode@@UEAA@XZ @ 0x14000EE00 (--1CAPONode@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAAEAPEAVCConnectionNode@@_K@Z @ 0x140068978 (--A-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAAEAPEAVCConnectionNode@@_K.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x140068F80 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     ?CommitAttachCount@CConnectionNode@@QEAAXXZ @ 0x14008178C (-CommitAttachCount@CConnectionNode@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectCache::ReleaseAPO(
        CDeviceGraphObjectCache *this,
        struct IAudioProcessingObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  char *v5; // r15
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // ebp
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  LPVOID v14; // rbx
  CConnectionNode *v16; // rbx
  CConnectionNode *v17; // rbx
  struct IAudioProcessingObject *v18; // [rsp+68h] [rbp-90h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-88h] BYREF
  _DWORD v20[2]; // [rsp+78h] [rbp-80h] BYREF
  __int64 v21; // [rsp+80h] [rbp-78h]
  unsigned __int16 *v22; // [rsp+90h] [rbp-68h] BYREF
  int v23; // [rsp+98h] [rbp-60h]
  int v24; // [rsp+9Ch] [rbp-5Ch]
  void *v25; // [rsp+A0h] [rbp-58h]
  __int64 v26; // [rsp+A8h] [rbp-50h]
  __int64 v27; // [rsp+B0h] [rbp-48h]
  __int64 v28; // [rsp+B8h] [rbp-40h]
  struct IAudioProcessingObject **v29; // [rsp+C0h] [rbp-38h]
  __int64 v30; // [rsp+C8h] [rbp-30h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v5 = (char *)this + 104;
  v6 = (_QWORD *)*((_QWORD *)this + 13);
  if ( !v6 )
    goto LABEL_26;
  while ( 1 )
  {
    v7 = v6;
    v8 = v6[2];
    v6 = (_QWORD *)*v6;
    if ( *(struct IAudioProcessingObject **)(v8 + 8) == a2 )
      break;
    if ( !v6 )
      goto LABEL_26;
  }
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 32) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 48) + 32LL))(
        *(_QWORD *)(v8 + 48),
        *(_QWORD *)(v8 + 8));
    v9 = *((_QWORD *)this + 40);
    v10 = 0;
    if ( *(_DWORD *)v9 > 4u )
    {
      v18 = a2;
      v29 = &v18;
      v30 = 8LL;
      v27 = v8 + 320;
      v28 = 16LL;
      v20[0] = 184549376;
      v20[1] = 4;
      v21 = 0LL;
      v22 = *(unsigned __int16 **)(v9 + 8);
      v23 = *v22;
      v24 = 2;
      v25 = &unk_1400A6E3E;
      v26 = 0x100000025LL;
      EtwEventWriteTransfer(*(_QWORD *)(v9 + 32), v20, 0LL, 0LL, 4, &v22);
    }
    ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(v5, v7);
    while ( *(_QWORD *)(v8 + 136) )
    {
      v16 = *(CConnectionNode **)ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::operator[](v8 + 128, 0LL);
      ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v8 + 128, 0LL);
      --*((_DWORD *)v16 + 3);
      CConnectionNode::CommitAttachCount(v16);
    }
    while ( *(_QWORD *)(v8 + 168) )
    {
      v17 = *(CConnectionNode **)ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::operator[](v8 + 160, 0LL);
      ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v8 + 160, 0LL);
      --*((_DWORD *)v17 + 3);
      CConnectionNode::CommitAttachCount(v17);
    }
    CoDisconnectObject(*(LPUNKNOWN *)(v8 + 8), 0);
    CAPONode::~CAPONode((CAPONode *)v8);
    v14 = 0LL;
    if ( InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context) )
      v14 = Context;
    if ( g_bSkipRTHeap )
    {
      operator delete[]((void *)v8);
    }
    else
    {
      if ( v14 )
        RtlFreeMemoryBlockLookaside(v14, v8);
      if ( (byte_1400C1841 & 4) != 0 )
        McTemplateU0pqpqqqqqq_EventWriteTransfer(v12, v11, v13, 6, (char)v14, 0, 0, 0);
    }
  }
  else
  {
LABEL_26:
    v10 = -2005139430;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v10;
}
