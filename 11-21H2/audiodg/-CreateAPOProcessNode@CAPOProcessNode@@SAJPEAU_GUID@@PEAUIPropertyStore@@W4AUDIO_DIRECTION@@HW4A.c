/*
 * XREFs of ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140013CA0
 * Callers:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140009DBC (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000B1F4 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B748 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140012210 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400129B4 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14001327C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140059894 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140011B80 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400146D0 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014AC8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1400516A8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF__guid_ @ 0x14005A2D0 (WPP_SF__guid_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x14005A468 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??_GCAPOInstance@@QEAAPEAXI@Z @ 0x14005A56C (--_GCAPOInstance@@QEAAPEAXI@Z.c)
 *     ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x14006DF74 (-GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CAPOProcessNode::CreateAPOProcessNode(
        const struct _GUID *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        _OWORD *a6,
        _QWORD *a7)
{
  __int64 v11; // rbx
  OLECHAR *v12; // rax
  int Common; // ebx
  HKEY v14; // rdi
  unsigned int v15; // r15d
  LSTATUS ValueW; // eax
  struct APO_REG_PROPERTIES *v17; // rcx
  APO_REG_PROPERTIES *v18; // rax
  __int64 v19; // rdx
  APO_FLAG Flags; // ebx
  _QWORD *v21; // rax
  _QWORD *v22; // rsi
  void (__fastcall ***v23)(_QWORD, __int64); // rdi
  unsigned __int128 v24; // rax
  __int64 v25; // r14
  CAPOInstance *v26; // rbx
  const unsigned __int16 *v27; // r12
  int v29; // eax
  CONFIGRET DevNodeW; // eax
  DWORD v31; // eax
  CONFIGRET v32; // eax
  DWORD v33; // eax
  int APOPropertiesInternal; // eax
  __int64 v35; // rdx
  char *v36; // rcx
  unsigned __int64 v37; // kr00_8
  int v38; // r13d
  void *v39; // rax
  __int64 v40; // rdx
  OLECHAR *phkResult; // [rsp+20h] [rbp-E0h]
  HKEY hkey; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pdnDevInst[2]; // [rsp+48h] [rbp-B8h] BYREF
  char *v44; // [rsp+50h] [rbp-B0h]
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h]
  _QWORD *v47; // [rsp+70h] [rbp-90h]
  struct APO_REG_PROPERTIES v48; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v49; // [rsp+4D0h] [rbp+3D0h] BYREF
  int v50; // [rsp+4E0h] [rbp+3E0h]
  APO_REG_PROPERTIES v51; // [rsp+4F0h] [rbp+3F0h] BYREF
  OLECHAR sz[40]; // [rsp+940h] [rbp+840h] BYREF
  WCHAR SubKey[80]; // [rsp+990h] [rbp+890h] BYREF
  OLECHAR pvData[532]; // [rsp+A30h] [rbp+930h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E98h] [rbp+D98h]

  v47 = a7;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_459a70a20f2b395031111be1427f992c_Traceguids, a1);
  }
  v49 = *a1;
  v50 = 100;
  *(_OWORD *)pvar = 0LL;
  v46 = 0LL;
  if ( a2 )
  {
    v29 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(a2, &v49, pvar);
    v15 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)(unsigned int)v29,
        (int)phkResult);
      goto LABEL_35;
    }
  }
  if ( LOWORD(pvar[0]) != 31 )
  {
    v11 = 39LL;
    if ( StringFromGUID2(a1, sz, 39) <= 0 )
    {
LABEL_48:
      Common = -2147024809;
    }
    else
    {
      v12 = sz;
      while ( *v12 )
      {
        ++v12;
        if ( !--v11 )
          goto LABEL_48;
      }
      if ( v11 == 1 )
      {
        phkResult = sz;
        Common = StringCchPrintfW(SubKey, 0x4BuLL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects");
        if ( Common >= 0 )
        {
          if ( RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &hkey) )
          {
            Common = -2005139398;
          }
          else
          {
            v14 = hkey;
            Common = InnerGetCommon(hkey, a1, &v51);
            v15 = 0;
            if ( Common >= 0 )
            {
              v51.u32NumAPOInterfaces = 1;
              pdnDevInst[0] = 1024;
              ValueW = RegGetValueW(v14, 0LL, L"APOInterface0", 2u, 0LL, pvData, pdnDevInst);
              Common = ValueW;
              if ( ValueW )
              {
                if ( ValueW > 0 )
                  Common = (unsigned __int16)ValueW | 0x80070000;
              }
              else
              {
                Common = CLSIDFromString(pvData, v51.iidAPOInterfaceList);
                if ( Common >= 0 )
                {
                  v17 = &v48;
                  v18 = &v51;
                  v19 = 8LL;
                  do
                  {
                    v17->clsid = v18->clsid;
                    *(_OWORD *)&v17->Flags = *(_OWORD *)&v18->Flags;
                    *(_OWORD *)&v17->szFriendlyName[6] = *(_OWORD *)&v18->szFriendlyName[6];
                    *(_OWORD *)&v17->szFriendlyName[14] = *(_OWORD *)&v18->szFriendlyName[14];
                    *(_OWORD *)&v17->szFriendlyName[22] = *(_OWORD *)&v18->szFriendlyName[22];
                    *(_OWORD *)&v17->szFriendlyName[30] = *(_OWORD *)&v18->szFriendlyName[30];
                    *(_OWORD *)&v17->szFriendlyName[38] = *(_OWORD *)&v18->szFriendlyName[38];
                    v17 = (struct APO_REG_PROPERTIES *)((char *)v17 + 128);
                    v17[-1].iidAPOInterfaceList[0] = *(IID *)&v18->szFriendlyName[46];
                    v18 = (APO_REG_PROPERTIES *)((char *)v18 + 128);
                    --v19;
                  }
                  while ( v19 );
                  v17->clsid = v18->clsid;
                  *(_OWORD *)&v17->Flags = *(_OWORD *)&v18->Flags;
                  *(_OWORD *)&v17->szFriendlyName[6] = *(_OWORD *)&v18->szFriendlyName[6];
                  *(_OWORD *)&v17->szFriendlyName[14] = *(_OWORD *)&v18->szFriendlyName[14];
                  *(_DWORD *)&v17->szFriendlyName[22] = *(_DWORD *)&v18->szFriendlyName[22];
                }
              }
            }
            RegCloseKey(hkey);
            if ( Common >= 0 )
            {
              PropVariantClear(pvar);
              *(_OWORD *)pvar = 0LL;
              v46 = 0LL;
              goto LABEL_21;
            }
          }
        }
      }
      else
      {
        Common = -2147418113;
      }
    }
    v35 = 562LL;
LABEL_50:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)Common,
      (int)phkResult);
    goto LABEL_51;
  }
  DevNodeW = CM_Locate_DevNodeW(pdnDevInst, (DEVINSTID_W)pvar[1], 0);
  v31 = CM_MapCrToWin32Err(DevNodeW, 0x507u);
  if ( v31 )
  {
    v15 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x225,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
            (const char *)v31,
            (unsigned int)phkResult);
    goto LABEL_35;
  }
  v15 = 0;
  hkey = 0LL;
  v32 = CM_Open_DevNode_Key(pdnDevInst[0], 0x20019u, 0, 1u, &hkey, 1u);
  v33 = CM_MapCrToWin32Err(v32, 0x507u);
  if ( v33 )
  {
    Common = wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x229,
               (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
               (const char *)v33,
               (unsigned int)phkResult);
LABEL_46:
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
LABEL_51:
    v15 = Common;
    goto LABEL_35;
  }
  APOPropertiesInternal = GetAPOPropertiesInternal(hkey, a1, &v48);
  Common = APOPropertiesInternal;
  if ( APOPropertiesInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22C,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)APOPropertiesInternal,
      (int)phkResult);
    goto LABEL_46;
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
LABEL_21:
  Flags = v48.Flags;
  if ( (v48.u32MaxOutputConnections != 1 || v48.u32MaxInputConnections != 1) && (v48.Flags & 0x10) == 0 )
  {
    Common = -2005139401;
    v35 = 568LL;
    goto LABEL_50;
  }
  v21 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v21;
  v44 = (char *)v21;
  if ( v21 )
  {
    v21[1] = 0LL;
    v21[2] = 0LL;
    *((_DWORD *)v21 + 6) = a3;
    v21[4] = 0LL;
    *((_DWORD *)v21 + 10) = 2;
    *v21 = &CAPOProcessNode::`vftable';
    *((_DWORD *)v21 + 12) = Flags;
  }
  else
  {
    v22 = 0LL;
  }
  v23 = (void (__fastcall ***)(_QWORD, __int64))v22;
  if ( v22 )
  {
    *(_QWORD *)&v24 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v25 = v24;
    v44 = (char *)v24;
    if ( (_QWORD)v24 )
    {
      *(_QWORD *)(v24 + 40) = 0LL;
      *(_DWORD *)(v24 + 48) = 1;
      *(_DWORD *)(v24 + 52) = 1;
      *(_QWORD *)(v24 + 56) = 0LL;
    }
    else
    {
      v25 = 0LL;
    }
    v26 = (CAPOInstance *)v25;
    if ( v25 )
    {
      v27 = (const unsigned __int16 *)pvar[1];
      *(_DWORD *)v25 = a4;
      *(_DWORD *)(v25 + 4) = a5;
      *(CLSID *)(v25 + 8) = v48.clsid;
      *(_OWORD *)(v25 + 24) = *a6;
      if ( !v27 )
        goto LABEL_30;
      *(_QWORD *)&v24 = -1LL;
      do
        *(_QWORD *)&v24 = v24 + 1;
      while ( v27[(_QWORD)v24] );
      hkey = (HKEY)v24;
      v36 = 0LL;
      *((_QWORD *)&v24 + 1) = v24 + 1;
      *(_QWORD *)pdnDevInst = v24 + 1;
      if ( (__int64)v24 + 1 >= (unsigned __int64)v24
        && (v37 = v24 + 1, v24 = *((unsigned __int64 *)&v24 + 1) * (unsigned __int128)2uLL, is_mul_ok(v37, 2uLL)) )
      {
        v36 = (char *)CoTaskMemAlloc(v24);
        v44 = v36;
        if ( v36 )
        {
          v38 = 0;
          StringCchCopyNExW(v36, *(unsigned __int64 *)pdnDevInst, v27, (unsigned __int64)hkey);
          v36 = v44;
        }
        else
        {
          v38 = -2147024882;
        }
      }
      else
      {
        v38 = -2147024362;
      }
      v39 = *(void **)(v25 + 56);
      *(_QWORD *)(v25 + 56) = v36;
      if ( v39 )
        CoTaskMemFree(v39);
      if ( v38 >= 0 )
      {
LABEL_30:
        v26 = 0LL;
        v22[4] = v25;
        v23 = 0LL;
        *v47 = v22;
        goto LABEL_31;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.h",
        (const char *)(unsigned int)v38,
        (int)phkResult);
      v40 = 576LL;
    }
    else
    {
      v38 = -2147024882;
      v40 = 574LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)v38,
      (int)phkResult);
    v15 = v38;
LABEL_31:
    if ( v26 )
      CAPOInstance::`scalar deleting destructor'(v26, DWORD2(v24));
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23B,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
    (const char *)0x8007000ELL,
    (int)phkResult);
  v15 = -2147024882;
LABEL_33:
  if ( v23 )
    (**v23)(v23, 1LL);
LABEL_35:
  PropVariantClear(pvar);
  return v15;
}
