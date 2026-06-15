/*
 * XREFs of ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140012F94
 * Callers:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140006FD4 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000A320 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000C590 (-CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STRE.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140013CE0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400168AC (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14001CF18 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14005C650 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1400144C8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x140014CB4 (-GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x14005202C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     WPP_SF__guid_ @ 0x14005CFC0 (WPP_SF__guid_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14005D0B4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ??1?$unique_ptr@VCAPOInstance@@U?$default_delete@VCAPOInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14005D0D8 (--1-$unique_ptr@VCAPOInstance@@U-$default_delete@VCAPOInstance@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCAPOProcessNode@@U?$default_delete@VCAPOProcessNode@@@wistd@@@wistd@@QEAA@XZ @ 0x14005D0FC (--1-$unique_ptr@VCAPOProcessNode@@U-$default_delete@VCAPOProcessNode@@@wistd@@@wistd@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAPOProcessNode::CreateAPOProcessNode(
        const struct _GUID *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        _OWORD *a6,
        _QWORD *a7)
{
  int APOPropertiesInternal; // eax
  unsigned int v12; // ebx
  APO_FLAG Flags; // ebx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  _WORD *v18; // r8
  __int64 v20; // rdx
  CONFIGRET v21; // eax
  DWORD v22; // eax
  CONFIGRET v23; // eax
  DWORD v24; // eax
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // r9
  int v28; // esi
  void *v29; // rcx
  unsigned int phkDevice; // [rsp+20h] [rbp-E0h]
  int phkDevicea; // [rsp+20h] [rbp-E0h]
  HKEY hKey; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-C8h] BYREF
  DEVNODE pdnDevInst; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v35; // [rsp+48h] [rbp-B8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  void **v38; // [rsp+68h] [rbp-98h]
  void *v39; // [rsp+70h] [rbp-90h]
  char v40; // [rsp+78h] [rbp-88h]
  struct APO_REG_PROPERTIES v41; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v42; // [rsp+4D0h] [rbp+3D0h] BYREF
  int v43; // [rsp+4E0h] [rbp+3E0h]
  wil::details::in1diag3 *retaddr; // [rsp+518h] [rbp+418h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_62a3f78b253e347743ca076fbdb7a17c_Traceguids, a1);
  }
  v42 = *a1;
  v43 = 100;
  *(_OWORD *)pvar = 0LL;
  v37 = 0LL;
  if ( a2 )
  {
    APOPropertiesInternal = (*(__int64 (__fastcall **)(__int64, struct _GUID *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(
                              a2,
                              &v42,
                              pvar);
    v12 = APOPropertiesInternal;
    if ( APOPropertiesInternal < 0 )
    {
      v20 = 556LL;
LABEL_32:
      v26 = (unsigned int)APOPropertiesInternal;
LABEL_33:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)v26,
        phkDevice);
      goto LABEL_17;
    }
  }
  if ( LOWORD(pvar[0]) != 31 )
  {
    APOPropertiesInternal = GetAPOPropertiesInternal(HKEY_CLASSES_ROOT, a1, &v41);
    v12 = APOPropertiesInternal;
    if ( APOPropertiesInternal < 0 )
    {
      v20 = 578LL;
      goto LABEL_32;
    }
    PropVariantClear(pvar);
    *(_OWORD *)pvar = 0LL;
    v37 = 0LL;
LABEL_7:
    Flags = v41.Flags;
    if ( (v41.u32MaxOutputConnections != 1 || v41.u32MaxInputConnections != 1) && (v41.Flags & 0x10) == 0 )
    {
      v12 = -2005139401;
      v26 = 2289827895LL;
      v20 = 584LL;
      goto LABEL_33;
    }
    v14 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    v33 = v14;
    if ( v14 )
    {
      v14[1] = 0LL;
      v14[2] = 0LL;
      *((_DWORD *)v14 + 6) = a3;
      v14[4] = 0LL;
      *((_DWORD *)v14 + 10) = 2;
      *v14 = &CAPOProcessNode::`vftable';
      *((_DWORD *)v14 + 12) = Flags;
    }
    else
    {
      v15 = 0LL;
    }
    v35 = v15;
    if ( v15 )
    {
      v16 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v17 = v16;
      v33 = v16;
      if ( v16 )
      {
        v16[5] = 0LL;
        *((_DWORD *)v16 + 12) = 1;
        *((_DWORD *)v16 + 13) = 1;
        v16[7] = 0LL;
      }
      else
      {
        v17 = 0LL;
      }
      v33 = v17;
      if ( v17 )
      {
        v18 = pvar[1];
        *(_DWORD *)v17 = a4;
        *((_DWORD *)v17 + 1) = a5;
        *(CLSID *)(v17 + 1) = v41.clsid;
        *(_OWORD *)(v17 + 3) = *a6;
        if ( !v18 )
          goto LABEL_16;
        v38 = (void **)(v17 + 7);
        v39 = 0LL;
        v40 = 1;
        v27 = -1LL;
        do
          ++v27;
        while ( v18[v27] );
        v28 = _AllocStringWorker<CTCoAllocPolicy>();
        if ( v40 )
        {
          v29 = *v38;
          *v38 = v39;
          if ( v29 )
            CoTaskMemFree(v29);
        }
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x27D,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.h",
            (const char *)(unsigned int)v28,
            phkDevice);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x250,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
            (const char *)(unsigned int)v28,
            phkDevicea);
          wistd::unique_ptr<CAPOInstance,wistd::default_delete<CAPOInstance>>::~unique_ptr<CAPOInstance,wistd::default_delete<CAPOInstance>>(&v33);
          wistd::unique_ptr<CAPOProcessNode,wistd::default_delete<CAPOProcessNode>>::~unique_ptr<CAPOProcessNode,wistd::default_delete<CAPOProcessNode>>(&v35);
          v12 = v28;
        }
        else
        {
LABEL_16:
          v15[4] = v17;
          *a7 = v15;
          v12 = 0;
        }
        goto LABEL_17;
      }
      v12 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24E,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)0x8007000ELL,
        phkDevice);
      wistd::unique_ptr<CAPOInstance,wistd::default_delete<CAPOInstance>>::~unique_ptr<CAPOInstance,wistd::default_delete<CAPOInstance>>(&v33);
    }
    else
    {
      v12 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24B,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)0x8007000ELL,
        phkDevice);
    }
    wistd::unique_ptr<CAPOProcessNode,wistd::default_delete<CAPOProcessNode>>::~unique_ptr<CAPOProcessNode,wistd::default_delete<CAPOProcessNode>>(&v35);
    goto LABEL_17;
  }
  v21 = CM_Locate_DevNodeW(&pdnDevInst, (DEVINSTID_W)pvar[1], 0);
  v22 = CM_MapCrToWin32Err(v21, 0x507u);
  if ( v22 )
  {
    v12 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x235,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
            (const char *)v22,
            phkDevice);
    goto LABEL_17;
  }
  hKey = 0LL;
  v23 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, &hKey, 1u);
  v24 = CM_MapCrToWin32Err(v23, 0x507u);
  if ( v24 )
  {
    v12 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x239,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
            (const char *)v24,
            phkDevice);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
    goto LABEL_17;
  }
  v25 = GetAPOPropertiesInternal(hKey, a1, &v41);
  v12 = v25;
  if ( v25 >= 0 )
  {
    if ( hKey )
      RegCloseKey(hKey);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23C,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
    (const char *)(unsigned int)v25,
    phkDevice);
  if ( hKey )
    RegCloseKey(hKey);
LABEL_17:
  PropVariantClear(pvar);
  return v12;
}
