/*
 * XREFs of ?SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001CB40
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePenDeviceManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001B8A8 (-UpdatePenDeviceManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 *     ?UpdateSystemCursorControllerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001B9B0 (-UpdateSystemCursorControllerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStu.c)
 *     ?UpdateTestCommandsRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001BC30 (-UpdateTestCommandsRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mic.c)
 *     ?UpdateUIAHitTestRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001BEB0 (-UpdateUIAHitTestRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Micro.c)
 *     ?UpdateResizeContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001FD20 (-UpdateResizeContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamo.c)
 *     ?UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001FFA0 (-UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 *     ?UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180020220 (-UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 *     ?UpdateInputObserverManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800204A0 (-UpdateInputObserverManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 *     ?UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180020720 (-UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 *     ?UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800209A0 (-UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 *     ?UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180020C20 (-UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 *     ?UpdateDragProcessorManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180020EA0 (-UpdateDragProcessorManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 *     ?UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180021120 (-UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x18008AB08 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v6; // r12
  char *v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // r15
  void (__fastcall *v17)(_QWORD *, __int64, __int64); // r14
  __int64 v18; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v23; // rcx
  unsigned int v24; // esi
  __int64 v25; // r8
  unsigned int *v26; // rbx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rbx
  _QWORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // r15
  void (__fastcall *v37)(_QWORD *, __int64, __int64); // r14
  __int64 v38; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v43; // rcx
  unsigned int v44; // esi
  __int64 v45; // r8
  unsigned int *v46; // rbx
  unsigned int v47; // ecx
  unsigned int v48; // eax
  int v49; // eax
  struct IMessageCallSendHost *v50; // rbx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v56; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v61; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  int v70; // [rsp+20h] [rbp-88h]
  __int64 v71; // [rsp+40h] [rbp-68h] BYREF
  __int64 v72; // [rsp+48h] [rbp-60h]
  _QWORD v73[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v74[9]; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  char *v76; // [rsp+B0h] [rbp+8h] BYREF
  struct IMessageCallSendHost *v77; // [rsp+B8h] [rbp+10h]
  __int64 v78; // [rsp+C0h] [rbp+18h] BYREF

  v77 = a2;
  v6 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v6 + 48) )
  {
    v55 = (__int64)a2 + 56;
    if ( !a2 )
      v55 = 72LL;
    *(_BYTE *)v55 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v52 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v53 = *(_QWORD *)(v52 + 64);
    if ( v53 )
    {
      v54 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoInputSystemPrincipalImpl *, char *))(*(_QWORD *)v53 + 24LL))(
              v53,
              *(unsigned int *)(v52 + 28),
              this,
              (char *)this + 24);
      if ( v54 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3FF,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v54,
          v70);
    }
  }
  v71 = *(unsigned int *)(v6 + 36);
  v72 = *(unsigned int *)(v6 + 40);
  v7 = 0LL;
  LOWORD(v70) = 45;
  v8 = CoreUICallSend(a2, &v71, 2LL, 0LL);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9734,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v70);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v9 = *((_QWORD *)this + 5);
    if ( v9 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v13 = v12;
      if ( *(_QWORD *)(v12 + 24) != v11[2] )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x164,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)0x87B20819LL,
          v70);
      v14 = v11[4];
      if ( !v14 )
        goto LABEL_11;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v14 + 40) + 36LL) == *(_DWORD *)(v12 + 36) )
          break;
        v14 = *(_QWORD *)(v14 + 48);
      }
      while ( v14 );
      if ( !v14 )
      {
LABEL_11:
        v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64, char **))(*v11 + 72LL))(v11, v12, &v76);
        if ( v15 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x259,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v15,
            v70);
        v14 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v76 + 32LL))(v76);
        *(_QWORD *)(v14 + 24) = v11;
        v16 = *(_QWORD *)(v14 + 40);
        *(_QWORD *)(v14 + 40) = v13;
        (**(void (__fastcall ***)(__int64))v13)(v13);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        *(_QWORD *)(v14 + 48) = v11[4];
        v11[4] = v14;
        *(_QWORD *)(v14 + 56) = *(_QWORD *)(v13 + 56);
        *(_QWORD *)(v13 + 56) = v14;
      }
      if ( !*(_BYTE *)(v14 + 32) )
      {
        *(_BYTE *)(v14 + 32) = 1;
        v17 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*v11 + 64LL);
        v18 = *(_QWORD *)(v14 + 40);
        v19 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v18 + 24) + 32LL);
        if ( *(_BYTE *)(v18 + 48) )
        {
          v56 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v19);
          v20 = v56 ? (__int64)v56 + 16 : 0LL;
        }
        else
        {
          v20 = *((_QWORD *)v19 + 9);
        }
        v17(v11, v20, v14);
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
        if ( v21 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x183,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v21,
            v70);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 16));
      v7 = 0LL;
    }
    v22 = *((_QWORD *)a3 + 5);
    v23 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v22 + 24) + 32LL);
    if ( *((_BYTE *)a3 + 32) && *((_QWORD *)v23 + 8) )
    {
      if ( *(_BYTE *)(v22 + 48) )
      {
        v57 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v23);
        if ( v57 )
          v7 = (char *)v57 + 16;
        v22 = *((_QWORD *)a3 + 5);
      }
      else
      {
        v7 = (char *)*((_QWORD *)v23 + 9);
      }
      v24 = *(_DWORD *)(v22 + 36);
      v25 = *((_QWORD *)a3 + 3);
      v26 = (unsigned int *)(v25 + 24);
      if ( !*(_DWORD *)(v25 + 24) && *(int *)(v25 + 8) > 0 )
      {
        v58 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 32LL);
        v59 = *(_QWORD *)(v58 + 64);
        if ( v59 )
        {
          v60 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v59 + 24LL))(
                  v59,
                  *(unsigned int *)(v58 + 28),
                  v25,
                  v25 + 24);
          if ( v60 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v60,
              v70);
        }
      }
      v27 = *v26;
      _InterlockedIncrement((volatile signed __int32 *)a3 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v70);
      v27 = (unsigned int)v76;
      v24 = (unsigned int)v76;
      v7 = v76;
    }
    v73[0] = v24;
    v73[1] = v27;
    LOWORD(v70) = 0;
    v28 = CoreUICallSend(v7, v73, 2LL, 58LL);
    if ( ((v28 + 0x80000000) & 0x80000000) == 0 && v28 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x97BB,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v28,
        v70);
    v7 = 0LL;
  }
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateControllerNavigationManagerRemoteCache(this, a3);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v29 = *((_QWORD *)this + 7);
    if ( v29 )
    {
      v30 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v31 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
      v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
      v33 = v32;
      if ( *(_QWORD *)(v32 + 24) != v31[2] )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x164,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)0x87B20819LL,
          v70);
      v34 = v31[4];
      if ( !v34 )
        goto LABEL_35;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v34 + 40) + 36LL) == *(_DWORD *)(v32 + 36) )
          break;
        v34 = *(_QWORD *)(v34 + 48);
      }
      while ( v34 );
      if ( !v34 )
      {
LABEL_35:
        v35 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v31 + 72LL))(v31, v32, &v78);
        if ( v35 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x259,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v35,
            v70);
        v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v78 + 32LL))(v78);
        *(_QWORD *)(v34 + 24) = v31;
        v36 = *(_QWORD *)(v34 + 40);
        *(_QWORD *)(v34 + 40) = v33;
        (**(void (__fastcall ***)(__int64))v33)(v33);
        if ( v36 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
        *(_QWORD *)(v34 + 48) = v31[4];
        v31[4] = v34;
        *(_QWORD *)(v34 + 56) = *(_QWORD *)(v33 + 56);
        *(_QWORD *)(v33 + 56) = v34;
      }
      if ( !*(_BYTE *)(v34 + 32) )
      {
        *(_BYTE *)(v34 + 32) = 1;
        v37 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*v31 + 64LL);
        v38 = *(_QWORD *)(v34 + 40);
        v39 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v38 + 24) + 32LL);
        if ( *(_BYTE *)(v38 + 48) )
        {
          v61 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v39);
          v40 = v61 ? (__int64)v61 + 16 : 0LL;
        }
        else
        {
          v40 = *((_QWORD *)v39 + 9);
        }
        v37(v31, v40, v34);
        v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 48LL))(v34);
        if ( v41 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x183,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v41,
            v70);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v34 + 16));
      v7 = 0LL;
    }
    if ( *((_BYTE *)a3 + 32)
      && (v42 = *((_QWORD *)a3 + 5),
          v43 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v42 + 24) + 32LL),
          *((_QWORD *)v43 + 8)) )
    {
      if ( *(_BYTE *)(v42 + 48) )
      {
        v62 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v43);
        if ( v62 )
          v7 = (char *)v62 + 16;
        v42 = *((_QWORD *)a3 + 5);
      }
      else
      {
        v7 = (char *)*((_QWORD *)v43 + 9);
      }
      v44 = *(_DWORD *)(v42 + 36);
      v45 = *((_QWORD *)a3 + 3);
      v46 = (unsigned int *)(v45 + 24);
      if ( !*(_DWORD *)(v45 + 24) && *(int *)(v45 + 8) > 0 )
      {
        v63 = *(_QWORD *)(*(_QWORD *)(v45 + 16) + 32LL);
        v64 = *(_QWORD *)(v63 + 64);
        if ( v64 )
        {
          v65 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v64 + 24LL))(
                  v64,
                  *(unsigned int *)(v63 + 28),
                  v45,
                  v45 + 24);
          if ( v65 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v65,
              v70);
        }
      }
      v47 = *v46;
      _InterlockedIncrement((volatile signed __int32 *)a3 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v70);
      v47 = (unsigned int)v76;
      v44 = (unsigned int)v76;
      v7 = v76;
    }
    v71 = v44;
    v72 = v47;
    LOWORD(v70) = 2;
    v48 = CoreUICallSend(v7, &v71, 2LL, 58LL);
    if ( (int)(v48 + 0x80000000) >= 0 && v48 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9825,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v48,
        v70);
  }
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateDragProcessorManagerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateEdgyControllerServerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateHeatGripServiceRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputDeliveryServerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputObserverManagerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputSiteManagerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenDeviceManagerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenEventsDispatcherRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateResizeContextualProcessorRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateSystemCursorControllerRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateTestCommandsRemoteCache(this, a3);
  BamoImpl::BamoInputSystemPrincipalImpl::UpdateUIAHitTestRemoteCache(this, a3);
  v49 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v49 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9743,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v49,
      v70);
  v50 = v77;
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 48LL) )
  {
    v66 = (__int64)v77 + 56;
    if ( !v77 )
      v66 = 72LL;
    *(_BYTE *)v66 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v67 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v68 = *(_QWORD *)(v67 + 64);
    if ( v68 )
    {
      v69 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoInputSystemPrincipalImpl *, char *))(*(_QWORD *)v68 + 24LL))(
              v68,
              *(unsigned int *)(v67 + 28),
              this,
              (char *)this + 24);
      if ( v69 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3FF,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v69,
          v70);
    }
  }
  v74[0] = *(unsigned int *)(v6 + 36);
  v74[1] = *(unsigned int *)(v6 + 40);
  LOWORD(v70) = 76;
  v51 = CoreUICallSend(v50, v74, 2LL, 0LL);
  if ( v51 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9759,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v51,
      v70);
}
