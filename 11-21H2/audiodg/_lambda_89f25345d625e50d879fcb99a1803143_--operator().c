/*
 * XREFs of _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x1400108C0
 * Callers:
 *     ?CreateAPO@CDeviceGraphObjectCache@@UEAAJAEBU_GUID@@W4APO_TYPE@@PEBG2PEAPEAUIAudioProcessingObject@@@Z @ 0x14000D6F0 (-CreateAPO@CDeviceGraphObjectCache@@UEAAJAEBU_GUID@@W4APO_TYPE@@PEBG2PEAPEAUIAudioProcessingObje.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ?Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioProcessingObjectRT@@PEAPEAUIAudioProcessingObjectConfiguration@@PEAPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14000D8B0 (-Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAU.c)
 *     ??0CAPONode@@QEAA@AEBU_GUID@@PEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudioProcessingObjectConfiguration@@PEAUIAudioProcessingObjectNotifications@@PEAUIAPOProcessingHost@@@Z @ 0x14000DA90 (--0CAPONode@@QEAA@AEBU_GUID@@PEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudi.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400105A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140010CC0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011930 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??_ECAPONode@@UEAAPEAXI@Z @ 0x1400689F0 (--_ECAPONode@@UEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall lambda_89f25345d625e50d879fcb99a1803143_::operator()(__int64 a1)
{
  void *v2; // rax
  struct IUnknown *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  void *v6; // rax
  struct IUnknown *v7; // rax
  struct IAudioProcessingObjectNotifications *v8; // rcx
  struct IAudioProcessingObjectConfiguration *v9; // rdi
  struct IAudioProcessingObjectRT *v10; // rbx
  CAPONode *v11; // r14
  struct _RTL_CRITICAL_SECTION *v12; // r13
  __int64 v13; // r14
  struct IUnknown **v14; // rcx
  struct IUnknown *v15; // rax
  __int64 v16; // rax
  struct IAudioProcessingObject *v17; // rdx
  struct ATL::CAtlPlex *v19; // r8
  int v20; // edx
  _QWORD *v21; // rcx
  int i; // edx
  int v23; // eax
  unsigned int v24; // r13d
  struct IUnknown *v25; // rcx
  int v26; // [rsp+20h] [rbp-B8h]
  int v27; // [rsp+20h] [rbp-B8h]
  int v28; // [rsp+20h] [rbp-B8h]
  struct IAudioProcessingObject *v29; // [rsp+50h] [rbp-88h] BYREF
  struct IAudioProcessingObjectNotifications *v30; // [rsp+58h] [rbp-80h] BYREF
  struct IUnknown *v31; // [rsp+60h] [rbp-78h] BYREF
  CAPONode *v32; // [rsp+68h] [rbp-70h]
  struct IUnknown *v33; // [rsp+70h] [rbp-68h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-60h]
  CAPONode *v35; // [rsp+80h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+88h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  struct IUnknown *v38; // [rsp+E8h] [rbp+10h] BYREF
  struct IAudioProcessingObjectRT *v39; // [rsp+F0h] [rbp+18h] BYREF
  struct IAudioProcessingObjectConfiguration *v40; // [rsp+F8h] [rbp+20h] BYREF

  v31 = 0LL;
  v2 = AERTGetDLLRTHeap();
  v3 = (struct IUnknown *)AERTAllocate(0x18uLL, v2);
  v38 = v3;
  if ( v3 )
  {
    v3->lpVtbl = (struct IUnknownVtbl *)&CPrivateAPO::`vftable';
    HIDWORD(v3[1].lpVtbl) = 1;
    LOBYTE(v3[1].lpVtbl) = 0;
    v3[2].lpVtbl = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v33 = v3;
  v31 = v3;
  if ( !v3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x127,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)0x8007000ELL,
      v26);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
    return 2147942414LL;
  }
  v30 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  v29 = 0LL;
  v4 = CPrivateAPO::Initialize(
         (__int64)v3,
         *(const IID **)a1,
         **(_QWORD **)(a1 + 8),
         **(_DWORD **)(a1 + 16),
         **(_QWORD **)(a1 + 24),
         &v29,
         &v39,
         &v40,
         (__int64)&v30);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v4,
      v27);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v30);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v40);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v39);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v29);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
    return v5;
  }
  v35 = 0LL;
  v6 = AERTGetDLLRTHeap();
  v7 = (struct IUnknown *)AERTAllocate(0x158uLL, v6);
  v38 = v7;
  if ( v7 )
  {
    v8 = v30;
    if ( !v30 )
      v8 = 0LL;
    v9 = v40;
    v10 = v39;
    v11 = CAPONode::CAPONode(
            (CAPONode *)v7,
            *(const struct _GUID **)a1,
            v29,
            v39,
            v40,
            v8,
            *(struct IAPOProcessingHost **)(*(_QWORD *)(a1 + 32) + 104LL));
    v32 = v11;
  }
  else
  {
    v11 = 0LL;
    v32 = 0LL;
    v10 = v39;
    v9 = v40;
  }
  v35 = v11;
  if ( !v11 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x132,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)0x8007000ELL,
      v27);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v30);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v40);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v39);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v29);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
    return 2147942414LL;
  }
  v38 = 0LL;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))v11 + 1))(
         *((_QWORD *)v11 + 1),
         &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
         &v38) >= 0 )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v11 + 6) + 24LL))(
            *((_QWORD *)v11 + 6),
            *((_QWORD *)v11 + 1));
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
        (const char *)(unsigned int)v23,
        v27);
      ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>((__int64 *)&v38);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x135,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
        (const char *)v24,
        v28);
      CAPONode::`vector deleting destructor'(v11, 1u);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v30);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v40);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v39);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v29);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
      return v24;
    }
    v25 = v38;
    if ( *((struct IUnknown **)v11 + 4) != v38 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)v11 + 4, v38);
      v25 = v38;
    }
    if ( v25 )
      ((void (__fastcall *)(struct IUnknown *))v25->lpVtbl->Release)(v25);
  }
  else
  {
    ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>((__int64 *)&v38);
  }
  **(_BYTE **)(a1 + 40) = *((_QWORD *)v11 + 4) != 0LL;
  **(_BYTE **)(a1 + 48) = v30 != 0LL;
  v12 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 32) + 64LL);
  lpCriticalSection = v12;
  EnterCriticalSection(v12);
  v36 = v12;
  v13 = *(_QWORD *)(a1 + 32);
  v38 = *(struct IUnknown **)(v13 + 112);
  if ( !*(_QWORD *)(v13 + 144) )
  {
    v19 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(v13 + 136), *(unsigned int *)(v13 + 152), 0x18uLL);
    if ( !v19 )
      ATL::AtlThrowImpl(-2147024882);
    v20 = *(_DWORD *)(v13 + 152);
    v21 = (_QWORD *)((char *)v19 + 16 * (v20 - 1) + 8 * (unsigned int)(v20 - 1) + 8);
    for ( i = v20 - 1; i >= 0; --i )
    {
      *v21 = *(_QWORD *)(v13 + 144);
      *(_QWORD *)(v13 + 144) = v21;
      v21 -= 3;
    }
  }
  v14 = *(struct IUnknown ***)(v13 + 144);
  v15 = *v14;
  v14[2] = (struct IUnknown *)v32;
  *(_QWORD *)(v13 + 144) = v15;
  v14[1] = 0LL;
  *v14 = v38;
  ++*(_QWORD *)(v13 + 128);
  v16 = *(_QWORD *)(v13 + 112);
  if ( v16 )
    *(_QWORD *)(v16 + 8) = v14;
  else
    *(_QWORD *)(v13 + 120) = v14;
  *(_QWORD *)(v13 + 112) = v14;
  if ( v12 )
    LeaveCriticalSection(v12);
  v17 = v29;
  v29 = 0LL;
  ***(_QWORD ***)(a1 + 56) = v17;
  if ( v30 )
    (*(void (__fastcall **)(struct IAudioProcessingObjectNotifications *))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v9 )
    ((void (__fastcall *)(struct IAudioProcessingObjectConfiguration *))v9->lpVtbl->Release)(v9);
  if ( v10 )
    ((void (__fastcall *)(struct IAudioProcessingObjectRT *))v10->lpVtbl->Release)(v10);
  ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->Release)(v3);
  return 0LL;
}
