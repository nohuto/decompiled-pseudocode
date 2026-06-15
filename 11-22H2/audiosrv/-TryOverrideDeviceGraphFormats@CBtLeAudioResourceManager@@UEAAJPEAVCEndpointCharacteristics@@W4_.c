/*
 * XREFs of ?TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@AEAV?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@233@Z @ 0x1800FD3A0
 * Callers:
 *     ?TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@WNA@EAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@AEAV?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@233@Z @ 0x1800769E0 (-TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@WNA@EAAJPEAVCEndpointCharacteristics@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180056B38 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     CreateAudioMediaTypeFromUncompressedAudioFormat @ 0x180069890 (CreateAudioMediaTypeFromUncompressedAudioFormat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBtLeAudioResourceManager::TryOverrideDeviceGraphFormats(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        int a6,
        IAudioMediaType **a7,
        IAudioMediaType **ppIAudioMediaType)
{
  int v8; // eax
  unsigned int v9; // esi
  __int64 v11; // rcx
  HRESULT v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  HRESULT v15; // eax
  unsigned int v16; // ebx
  UNCOMPRESSEDAUDIOFORMAT pUncompressedAudioFormat; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a3
    || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2)
    || *(_WORD *)(((__int64 (__fastcall *)(_QWORD))(*ppIAudioMediaType)->lpVtbl->GetAudioFormat)(*ppIAudioMediaType) + 2) == 2 )
  {
    return 0LL;
  }
  v8 = ((__int64 (__fastcall *)(_QWORD, UNCOMPRESSEDAUDIOFORMAT *))(*ppIAudioMediaType)->lpVtbl->GetUncompressedAudioFormat)(
         *ppIAudioMediaType,
         &pUncompressedAudioFormat);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x281,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  pUncompressedAudioFormat.dwSamplesPerFrame = 2;
  pUncompressedAudioFormat.dwChannelMask = 3;
  v11 = (__int64)*ppIAudioMediaType;
  *ppIAudioMediaType = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = CreateAudioMediaTypeFromUncompressedAudioFormat(&pUncompressedAudioFormat, ppIAudioMediaType);
  if ( v12 < 0 )
  {
    v13 = 646LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  if ( !*a7 )
    wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)a7, *a5);
  if ( *(_WORD *)(((__int64 (__fastcall *)(_QWORD))(*a7)->lpVtbl->GetAudioFormat)(*a7) + 2) == 2 )
    return 0LL;
  v12 = ((__int64 (__fastcall *)(_QWORD, UNCOMPRESSEDAUDIOFORMAT *))(*a7)->lpVtbl->GetUncompressedAudioFormat)(
          *a7,
          &pUncompressedAudioFormat);
  if ( v12 < 0 )
  {
    v13 = 656LL;
    goto LABEL_10;
  }
  pUncompressedAudioFormat.dwSamplesPerFrame = 2;
  pUncompressedAudioFormat.dwChannelMask = 3;
  v14 = (__int64)*a7;
  *a7 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = CreateAudioMediaTypeFromUncompressedAudioFormat(&pUncompressedAudioFormat, a7);
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x295,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
    (const char *)(unsigned int)v15);
  return v16;
}
