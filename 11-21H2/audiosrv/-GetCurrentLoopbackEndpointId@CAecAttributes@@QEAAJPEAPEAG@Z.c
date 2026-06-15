/*
 * XREFs of ?GetCurrentLoopbackEndpointId@CAecAttributes@@QEAAJPEAPEAG@Z @ 0x18010581C
 * Callers:
 *     ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x18000F910 (-GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetActiveRenderEndpointWithFallbackToDefault@CAecAttributes@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAPEAG@Z @ 0x18010553C (-GetActiveRenderEndpointWithFallbackToDefault@CAecAttributes@@QEAAJW4__MIDL___MIDL_itf_mmdevicea.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAecAttributes::GetCurrentLoopbackEndpointId(CAecAttributes *this, unsigned __int16 **a2)
{
  const unsigned __int16 *v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r14
  int ActiveRenderEndpointWithFallbackToDefault; // ebx
  __int64 v7; // rdx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (const unsigned __int16 *)*((_QWORD *)this + 2);
  if ( !v3 )
  {
    v9 = *((_DWORD *)this + 6);
    if ( v9 < 0 )
      return 0LL;
    if ( v9 <= 1 )
    {
      v14 = 0LL;
      v10 = *(_QWORD *)g_DeviceEnumerator;
      v14 = 0LL;
      v11 = 2LL;
      if ( v9 != 1 )
        v11 = 0LL;
      if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(v10 + 32))(g_DeviceEnumerator, 0LL, v11, &v14) < 0
        || (v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v14 + 40LL))(v14, a2),
            ActiveRenderEndpointWithFallbackToDefault = v12,
            v12 >= 0) )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp",
        (const char *)(unsigned int)v12);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
      return (unsigned int)ActiveRenderEndpointWithFallbackToDefault;
    }
    if ( v9 != 2 )
      return 0LL;
    ActiveRenderEndpointWithFallbackToDefault = CAecAttributes::GetActiveRenderEndpointWithFallbackToDefault(
                                                  this,
                                                  eCommunications,
                                                  a2);
    if ( ActiveRenderEndpointWithFallbackToDefault >= 0 )
      return 0LL;
    v7 = 143LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp",
      (const char *)(unsigned int)ActiveRenderEndpointWithFallbackToDefault);
    return (unsigned int)ActiveRenderEndpointWithFallbackToDefault;
  }
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  v5 = v4 + 1;
  if ( v4 + 1 < v4 || !is_mul_ok(v5, 2uLL) )
  {
    ActiveRenderEndpointWithFallbackToDefault = -2147024362;
    goto LABEL_9;
  }
  ActiveRenderEndpointWithFallbackToDefault = CTCoAllocPolicy::Alloc(
                                                this,
                                                (v5 * (unsigned __int128)2uLL) >> 64,
                                                2 * v5,
                                                (void **)a2);
  if ( ActiveRenderEndpointWithFallbackToDefault < 0 )
  {
LABEL_9:
    v7 = 122LL;
    goto LABEL_10;
  }
  StringCchCopyNExW((char *)*a2, v4 + 1, v3, v4);
  return 0LL;
}
