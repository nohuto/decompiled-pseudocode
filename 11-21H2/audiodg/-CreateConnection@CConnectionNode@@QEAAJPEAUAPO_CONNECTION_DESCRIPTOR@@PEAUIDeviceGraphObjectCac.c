/*
 * XREFs of ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x140010D80
 * Callers:
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000FA90 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400117E0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?CalculateAlignmentMask@@YAIPEBU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x1400119A8 (-CalculateAlignmentMask@@YAIPEBU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x14002FC98 (--_U@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14006E350 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConnectionNode::CreateConnection(
        CConnectionNode *this,
        struct APO_CONNECTION_DESCRIPTOR *a2,
        struct IDeviceGraphObjectCache *a3)
{
  unsigned __int16 *v6; // r8
  int v7; // r15d
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  void *v12; // rdi
  void *v13; // r9
  char v14; // di
  int v15; // eax
  unsigned int v16; // esi
  _QWORD *v17; // r9
  __int64 v18; // r10
  unsigned int v20; // eax
  unsigned __int16 v21; // cx
  void *v22; // rax
  int v23; // [rsp+20h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  void *v25; // [rsp+B0h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp+10h] BYREF

  v6 = (unsigned __int16 *)((__int64 (__fastcall *)(IAudioMediaType *))a2->pFormat->lpVtbl->GetAudioFormat)(a2->pFormat);
  *((_DWORD *)this + 10) = v6[1];
  *((_DWORD *)this + 11) = v6[7] >> 3;
  *((float *)this + 13) = (float)*((int *)v6 + 1);
  v7 = 1;
  if ( *v6 == 0xFFFE )
  {
    *(_OWORD *)((char *)this + 24) = *(_OWORD *)(v6 + 12);
    *((_DWORD *)this + 12) = v6[9];
    v8 = *((_DWORD *)v6 + 5);
  }
  else
  {
    *(GUID *)((char *)this + 24) = GUID_00000001_0000_0010_8000_00aa00389b71;
    *((_DWORD *)this + 6) = *v6;
    *((_DWORD *)this + 12) = v6[7];
    v21 = v6[1];
    if ( v21 == 1 )
    {
      v8 = 1;
    }
    else
    {
      v8 = 0;
      if ( v21 == 2 )
        v8 = 3;
    }
  }
  *((_DWORD *)this + 14) = v8;
  v12 = 0LL;
  if ( InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context) )
    v12 = Context;
  if ( g_bSkipRTHeap )
  {
    v13 = operator new[](0x28uLL);
  }
  else
  {
    v25 = 0LL;
    if ( v12 && (unsigned int)RtlAllocateMemoryBlockLookaside(v12, 40LL, &v25) == -1073741670 )
    {
      AERTAddMemoryToHeap(v12, 0x100000uLL);
      RtlAllocateMemoryBlockLookaside(v12, 40LL, &v25);
    }
    if ( (byte_1400C1841 & 4) != 0 )
      McTemplateU0pqpqqqqqq_EventWriteTransfer(v10, v9, v11, 6, (char)v12, 40, 0, 0);
    v13 = v25;
  }
  *((_QWORD *)this + 13) = v13;
  if ( !v13 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"avcore\\audiocore\\engine\\core\\objectcache\\devicegraphobjects.cpp",
      (const char *)0x8007000ELL,
      v23);
    return 2147942414LL;
  }
  v14 = 1;
  *((_OWORD *)this + 4) = *(_OWORD *)&a2->Type;
  *((_OWORD *)this + 5) = *(_OWORD *)&a2->u32MaxFrameCount;
  *((_QWORD *)this + 12) = *(_QWORD *)&a2->u32Signature;
  if ( *((_QWORD *)this + 9) )
  {
    v20 = CalculateAlignmentMask((const struct _UNCOMPRESSEDAUDIOFORMAT *)((char *)this + 24));
    if ( (v20 & (unsigned int)v18) != 0 )
    {
      v16 = -2147467261;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"avcore\\audiocore\\engine\\core\\objectcache\\devicegraphobjects.cpp",
        (const char *)0x80004003LL,
        v23);
      goto LABEL_17;
    }
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectCache *, char *, char *))(*(_QWORD *)a3 + 40LL))(
            a3,
            (char *)this + 64,
            (char *)this + 144);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7C,
        (unsigned int)"avcore\\audiocore\\engine\\core\\objectcache\\devicegraphobjects.cpp",
        (const char *)(unsigned int)v15,
        v23);
      goto LABEL_17;
    }
    v7 = 0;
    v17 = (_QWORD *)*((_QWORD *)this + 13);
    v18 = *((_QWORD *)this + 9);
  }
  *((_DWORD *)this + 16) = v7;
  *v17 = v18;
  *(_DWORD *)(*((_QWORD *)this + 13) + 8LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 13) + 16LL) = 1094930505;
  *(_QWORD *)(*((_QWORD *)this + 13) + 24LL) = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 13) + 32LL) = 0;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 8LL))(*((_QWORD *)this + 11));
  v14 = 0;
  v16 = 0;
LABEL_17:
  if ( v14 )
  {
    v22 = (void *)AERTGetDLLRTHeap();
    AERTFree(*((void **)this + 13), v22);
    *((_QWORD *)this + 13) = 0LL;
  }
  return v16;
}
