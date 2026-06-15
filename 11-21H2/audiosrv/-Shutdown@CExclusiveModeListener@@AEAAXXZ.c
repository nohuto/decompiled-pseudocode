/*
 * XREFs of ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x18012DED8
 * Callers:
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x18012C5D4 (--1CExclusiveModeListener@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180066930 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@@Z @ 0x18012C55C (--0-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18012E6D4 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CB.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CExclusiveModeListener::Shutdown(CExclusiveModeListener *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  const CHAR *v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+10h] BYREF
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  *((_BYTE *)this + 377) = 0;
  v5 = *((_QWORD *)this + 44);
  if ( v5 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v5);
    *((_QWORD *)this + 44) = 0LL;
  }
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x84,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v7);
      *((_QWORD *)this + 15) = 0LL;
    }
    if ( *((_QWORD *)this + 16) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 80LL))(*((_QWORD *)this + 9));
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8A,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v8);
      *((_QWORD *)this + 16) = 0LL;
    }
    v9 = **((_QWORD **)this + 20);
    v18 = v9;
    while ( !*(_BYTE *)(v9 + 25) )
    {
      v10 = *(_QWORD *)(v9 + 48);
      if ( v10 && *(_QWORD *)(v9 + 56) )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(
          &v17,
          v10);
        v16 = 0LL;
        v11 = (**v17)(v17, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v16);
        if ( v11 >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 104LL))(v16, *(_QWORD *)(v9 + 56));
          *(_QWORD *)(v9 + 56) = 0LL;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x93,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
            (const char *)(unsigned int)v11);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(&v18);
      v9 = v18;
    }
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::clear((char *)this + 160);
  }
  v12 = (const CHAR *)*((_QWORD *)this + 7);
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(const CHAR *, CExclusiveModeListener *))(*(_QWORD *)v12 + 56LL))(v12, this);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9F,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)v13);
    v12 = (const CHAR *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(const CHAR *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v14 = *((unsigned int *)this + 92);
  if ( (_DWORD)v14 )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, char *))(*(_QWORD *)g_PolicyManager + 352LL))(
      g_PolicyManager,
      v14,
      (char *)this + 8);
    *((_DWORD *)this + 92) = 0;
  }
  CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerRunning(v12, 0, a3, a4);
}
