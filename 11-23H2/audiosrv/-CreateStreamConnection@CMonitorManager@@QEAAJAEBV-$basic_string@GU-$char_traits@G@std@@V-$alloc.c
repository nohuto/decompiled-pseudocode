/*
 * XREFs of ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x18012C7C8
 * Callers:
 *     ?CreateStreamConnection@CStreamConnectionManagerImpl@@UEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x18012C990 (-CreateStreamConnection@CStreamConnectionManagerImpl@@UEAAJAEBV-$basic_string@GU-$char_traits@G@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E3A34 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F0FC0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CStreamConnectionImpl@CMonitorManager@@QEAA@V?$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V?$ComPtr@VCaptureMonitor@CMonitorManager@@@34@@Z @ 0x18012B814 (--0CStreamConnectionImpl@CMonitorManager@@QEAA@V-$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V-$Co.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x18012C564 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::CreateStreamConnection(__int64 a1, __int64 **a2, __int64 **a3, int a4, __int64 *a5)
{
  __int64 *v9; // rdi
  std::_Ref_count_base *v10; // rcx
  int v11; // eax
  __int64 *v12; // rbx
  const char *v13; // r9
  __int64 *v14; // rcx
  __int64 v15; // rbx
  _DWORD *v16; // rax
  std::_Ref_count_base *v17; // rcx
  const char *v18; // r9
  __int64 result; // rax
  int v20; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v22; // [rsp+58h] [rbp+10h] BYREF
  __int64 v23; // [rsp+60h] [rbp+18h] BYREF

  v9 = a5;
  *a5 = 0LL;
  v10 = (std::_Ref_count_base *)v9[1];
  v9[1] = 0LL;
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  a5 = 0LL;
  if ( (unsigned __int64)a3[3] >= 8 )
    a3 = (__int64 **)*a3;
  if ( (unsigned __int64)a2[3] >= 8 )
    a2 = (__int64 **)*a2;
  try
  {
    v11 = CMonitorManager::CreateMonitor(a1, a2, a3, a4, 1, &a5);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        138LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        (const char *)(unsigned int)v11,
        v20);
    v12 = (__int64 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v12;
    if ( v12 )
    {
      v14 = a5;
      a5 = 0LL;
      v22 = v14;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v22);
      v23 = a1;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v23);
      v15 = CMonitorManager::CStreamConnectionImpl::CStreamConnectionImpl((__int64)v12, &v23, &v22);
    }
    else
    {
      v15 = 0LL;
    }
    if ( !v15 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        140LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        v13);
    v16 = operator new(0x18uLL);
    if ( v16 )
    {
      v16[2] = 1;
      v16[3] = 1;
      *(_QWORD *)v16 = &std::_Ref_count<CMonitorManager::CStreamConnectionImpl>::`vftable';
      *((_QWORD *)v16 + 2) = v15;
    }
    *v9 = v15;
    v17 = (std::_Ref_count_base *)v9[1];
    v9[1] = (__int64)v16;
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x90,
                           (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
                           v18);
  }
  return result;
}
