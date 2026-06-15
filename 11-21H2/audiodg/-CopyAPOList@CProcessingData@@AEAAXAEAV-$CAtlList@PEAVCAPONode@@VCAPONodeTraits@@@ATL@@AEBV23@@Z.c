/*
 * XREFs of ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000FDA0
 * Callers:
 *     ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x14000C168 (-NonRTGrabSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ.c)
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14000C3DC (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x14008199C (--4CProcessingData@@QEAAXAEAV0@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000B15C (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?Copy@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAXAEBV12@@Z @ 0x1400103E0 (-Copy@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTION_P.c)
 *     ?Copy@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z @ 0x1400104C0 (-Copy@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400105A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??4?$CComPtr@UIAudioProcessingObject@@@ATL@@QEAAPEAUIAudioProcessingObject@@AEBV01@@Z @ 0x140010600 (--4-$CComPtr@UIAudioProcessingObject@@@ATL@@QEAAPEAUIAudioProcessingObject@@AEBV01@@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011930 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x14002FC98 (--_U@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14006E350 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=16
void __fastcall CProcessingData::CopyAPOList(void *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 *v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  LPVOID v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rsi
  int v30; // ecx
  int v31; // r8d
  void *v32; // rdi
  char *v33; // rdi
  __int64 v34; // rcx
  struct IUnknown *v35; // rdx
  struct IUnknown *v36; // rdx
  struct IUnknown *v37; // rdx
  struct IUnknown *v38; // rdx
  __int64 *v39; // rsi
  __int64 *v40; // rcx
  __int64 v41; // rax
  struct ATL::CAtlPlex *v42; // r8
  int v43; // edx
  _QWORD *v44; // rcx
  int i; // edx
  LPVOID Context; // [rsp+B0h] [rbp+8h] BYREF
  char *v47; // [rsp+B8h] [rbp+10h]
  LPVOID v48; // [rsp+C8h] [rbp+20h] BYREF

  Context = a1;
LABEL_2:
  v5 = 0LL;
  while ( *(_QWORD *)(a2 + 16) )
  {
    v6 = *(__int64 **)a2;
    if ( !*(_QWORD *)a2 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = (_QWORD *)v6[2];
    v8 = *v6;
    *(_QWORD *)a2 = *v6;
    if ( v8 )
      *(_QWORD *)(v8 + 8) = 0LL;
    else
      *(_QWORD *)(a2 + 8) = 0LL;
    *v6 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 32) = v6;
    if ( (*(_QWORD *)(a2 + 16))-- == 1LL )
    {
      ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll(a2);
      v5 = 0LL;
    }
    if ( v7 )
    {
      *v7 = &CAPONode::`vftable';
      v10 = v7[2];
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 16LL))(v10, 0LL);
        v7[2] = 0LL;
      }
      v11 = (void *)v7[36];
      if ( v11 )
        free(v11);
      v12 = (void *)v7[32];
      if ( v12 )
        free(v12);
      v13 = (void *)v7[28];
      if ( v13 )
        free(v13);
      v14 = (void *)v7[24];
      if ( v14 )
        free(v14);
      v15 = (void *)v7[20];
      if ( v15 )
        free(v15);
      v16 = (void *)v7[16];
      if ( v16 )
        free(v16);
      v17 = (void *)v7[12];
      if ( v17 )
        free(v17);
      v18 = (void *)v7[8];
      if ( v18 )
        free(v18);
      v19 = v7[6];
      if ( v19 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 16LL))(v19, v5);
      v20 = v7[5];
      if ( v20 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 16LL))(v20, v5);
      v21 = v7[4];
      if ( v21 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 16LL))(v21, v5);
      v22 = v7[3];
      if ( v22 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 16LL))(v22, v5);
      v23 = v7[1];
      if ( v23 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 16LL))(v23, v5);
      if ( InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context) )
        v27 = Context;
      else
        v27 = 0LL;
      if ( g_bSkipRTHeap )
      {
        operator delete[](v7);
      }
      else
      {
        if ( v27 )
          RtlFreeMemoryBlockLookaside(v27, v7);
        if ( (byte_1400C1841 & 4) != 0 )
          McTemplateU0pqpqqqqqq_EventWriteTransfer(v25, v24, v26, 6, (char)v27, 0, 0, 0);
      }
      goto LABEL_2;
    }
  }
  v28 = *(_QWORD *)(a3 + 8);
  while ( v28 )
  {
    v29 = *(_QWORD *)(v28 + 16);
    v28 = *(_QWORD *)(v28 + 8);
    if ( InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &v48) )
      v32 = v48;
    else
      v32 = 0LL;
    if ( g_bSkipRTHeap )
    {
      v33 = (char *)operator new[](0x158uLL);
    }
    else
    {
      Context = 0LL;
      if ( v32 && (unsigned int)RtlAllocateMemoryBlockLookaside(v32, 344LL, &Context) == -1073741670 )
      {
        AERTAddMemoryToHeap(v32, 0x100000uLL);
        RtlAllocateMemoryBlockLookaside(v32, 344LL, &Context);
      }
      if ( (byte_1400C1841 & 4) != 0 )
        McTemplateU0pqpqqqqqq_EventWriteTransfer(v30, 0, v31, 6, (char)v32, 88, 0, 0);
      v33 = (char *)Context;
    }
    v47 = v33;
    if ( v33 )
    {
      *(_QWORD *)v33 = &CAPONode::`vftable';
      *((_QWORD *)v33 + 1) = 0LL;
      *((_QWORD *)v33 + 3) = 0LL;
      *((_QWORD *)v33 + 4) = 0LL;
      *((_QWORD *)v33 + 5) = 0LL;
      *((_QWORD *)v33 + 6) = 0LL;
      v33[56] = 0;
      *((_QWORD *)v33 + 8) = 0LL;
      *((_QWORD *)v33 + 9) = 0LL;
      *((_QWORD *)v33 + 10) = 0LL;
      *((_DWORD *)v33 + 22) = 0;
      *((_QWORD *)v33 + 12) = 0LL;
      *((_QWORD *)v33 + 13) = 0LL;
      *((_QWORD *)v33 + 14) = 0LL;
      *((_DWORD *)v33 + 30) = 0;
      *((_QWORD *)v33 + 16) = 0LL;
      *((_QWORD *)v33 + 17) = 0LL;
      *((_QWORD *)v33 + 18) = 0LL;
      *((_DWORD *)v33 + 38) = 0;
      *((_QWORD *)v33 + 20) = 0LL;
      *((_QWORD *)v33 + 21) = 0LL;
      *((_QWORD *)v33 + 22) = 0LL;
      *((_DWORD *)v33 + 46) = 0;
      *((_QWORD *)v33 + 24) = 0LL;
      *((_QWORD *)v33 + 25) = 0LL;
      *((_QWORD *)v33 + 26) = 0LL;
      *((_DWORD *)v33 + 54) = 0;
      *((_QWORD *)v33 + 28) = 0LL;
      *((_QWORD *)v33 + 29) = 0LL;
      *((_QWORD *)v33 + 30) = 0LL;
      *((_DWORD *)v33 + 62) = 0;
      *((_QWORD *)v33 + 32) = 0LL;
      *((_QWORD *)v33 + 33) = 0LL;
      *((_QWORD *)v33 + 34) = 0LL;
      *((_DWORD *)v33 + 70) = 0;
      *((_QWORD *)v33 + 36) = 0LL;
      *((_QWORD *)v33 + 37) = 0LL;
      *((_QWORD *)v33 + 38) = 0LL;
      *((_DWORD *)v33 + 78) = 0;
      ATL::CComPtr<IAudioProcessingObject>::operator=(v33 + 8, v29 + 8);
      v34 = *(_QWORD *)(v29 + 16);
      *((_QWORD *)v33 + 2) = v34;
      if ( v34 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
      v35 = *(struct IUnknown **)(v29 + 24);
      if ( *((struct IUnknown **)v33 + 3) != v35 )
        ATL::AtlComPtrAssign((struct IUnknown **)v33 + 3, v35);
      v36 = *(struct IUnknown **)(v29 + 40);
      if ( *((struct IUnknown **)v33 + 5) != v36 )
        ATL::AtlComPtrAssign((struct IUnknown **)v33 + 5, v36);
      v37 = *(struct IUnknown **)(v29 + 32);
      if ( *((struct IUnknown **)v33 + 4) != v37 )
        ATL::AtlComPtrAssign((struct IUnknown **)v33 + 4, v37);
      v38 = *(struct IUnknown **)(v29 + 48);
      if ( *((struct IUnknown **)v33 + 6) != v38 )
        ATL::AtlComPtrAssign((struct IUnknown **)v33 + 6, v38);
      ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy(v33 + 64, v29 + 64);
      ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy(v33 + 96, v29 + 96);
      ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy(v33 + 128, v29 + 128);
      ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy(v33 + 160, v29 + 160);
      ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
        v33 + 192,
        v29 + 192);
      ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
        v33 + 224,
        v29 + 224);
      ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
        v33 + 256,
        v29 + 256);
      ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
        v33 + 288,
        v29 + 288);
      *((_OWORD *)v33 + 20) = *(_OWORD *)(v29 + 320);
      *((_DWORD *)v33 + 84) = *(_DWORD *)(v29 + 336);
      v33[56] = *(_BYTE *)(v29 + 56);
    }
    else
    {
      v33 = 0LL;
    }
    v47 = v33;
    if ( v33 )
    {
      v39 = *(__int64 **)a2;
      if ( !*(_QWORD *)(a2 + 32) )
      {
        v42 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a2 + 24), *(unsigned int *)(a2 + 40), 0x18uLL);
        if ( !v42 )
          ATL::AtlThrowImpl(-2147024882);
        v43 = *(_DWORD *)(a2 + 40);
        v44 = (_QWORD *)((char *)v42 + 16 * (v43 - 1) + 8 * (unsigned int)(v43 - 1) + 8);
        for ( i = v43 - 1; i >= 0; --i )
        {
          *v44 = *(_QWORD *)(a2 + 32);
          *(_QWORD *)(a2 + 32) = v44;
          v44 -= 3;
        }
      }
      v40 = *(__int64 **)(a2 + 32);
      v41 = *v40;
      v40[2] = (__int64)v33;
      *(_QWORD *)(a2 + 32) = v41;
      v40[1] = 0LL;
      *v40 = (__int64)v39;
      ++*(_QWORD *)(a2 + 16);
      if ( *(_QWORD *)a2 )
        *(_QWORD *)(*(_QWORD *)a2 + 8LL) = v40;
      else
        *(_QWORD *)(a2 + 8) = v40;
      *(_QWORD *)a2 = v40;
    }
  }
}
