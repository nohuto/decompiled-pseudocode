/*
 * XREFs of ?SetCaptureEndpoint@CBtAudioResourceManagerBase@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800FAA90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBtAudioResourceManagerBase::SetCaptureEndpoint(CBtAudioResourceManagerBase *this, LPCWCH *a2)
{
  void **v4; // rbx
  const WCHAR *v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  const unsigned __int16 *v10; // r8
  unsigned __int64 v11; // rax
  __int64 v13; // rcx
  LPCWCH v14; // rax
  __int64 v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = (void **)((char *)this + 48);
  v5 = (const WCHAR *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    if ( CompareStringOrdinal(v5, -1, a2[6], -1, 1) != 2 )
    {
      v6 = -2147418113;
      v7 = 140LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v4,
      0LL);
    v10 = a2[6];
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v6 = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, v10, v11, v15, (unsigned __int16 **)v4);
    if ( v6 < 0 )
    {
      v7 = 136LL;
      goto LABEL_8;
    }
  }
  v13 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  *((_QWORD *)this + 8) = 0LL;
  v14 = *a2;
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(LPCWCH *, GUID *, __int64 *))v14)(
         a2,
         &GUID_00000038_0000_0000_c000_000000000046,
         &v17);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 24LL))(v17, (char *)this + 64);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v17);
  if ( v6 < 0 )
  {
    v7 = 142LL;
    goto LABEL_8;
  }
  return 0LL;
}
