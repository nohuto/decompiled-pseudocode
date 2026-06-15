/*
 * XREFs of ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800DA9E0
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800D1B34 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081448 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c5ba6885c59c7d44add3d2e24646e672___ @ 0x1800D8254 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800D8254.c)
 *     ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x1800D8484 (--0-$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D8770 (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 *     ?GetOffloadStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18010C568 (-GetOffloadStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Mic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioResourceManager::DisconnectOffloadStreams(__int64 a1, __int64 a2)
{
  int OffloadStreamGroups; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int128 v7; // [rsp+20h] [rbp-59h] BYREF
  __int64 v8; // [rsp+30h] [rbp-49h]
  _BYTE v9[64]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v10[64]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v7 = 0LL;
  v8 = 0LL;
  OffloadStreamGroups = DeviceGraphStore::GetOffloadStreamGroups(&v7);
  v4 = OffloadStreamGroups;
  if ( OffloadStreamGroups >= 0 )
  {
    std::function<void (bool)>::function<void (bool)>((__int64)v9, a2);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c5ba6885c59c7d44add3d2e24646e672___(
      (__int64)v10,
      v7,
      *((__int64 *)&v7 + 1),
      (__int64)v9);
    std::_Func_class<void,>::_Tidy((__int64)v10, v6);
    if ( (_QWORD)v7 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v7,
        *((__int64 **)&v7 + 1));
      std::_Deallocate<16,0>((void *)v7, (v8 - v7) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)OffloadStreamGroups);
    std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64)&v7);
    return v4;
  }
}
