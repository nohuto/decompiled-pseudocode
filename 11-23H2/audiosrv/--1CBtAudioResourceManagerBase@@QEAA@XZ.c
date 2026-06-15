/*
 * XREFs of ??1CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800F54C0
 * Callers:
 *     ??1CBtLeAudioResourceManager@@UEAA@XZ @ 0x1800F5590 (--1CBtLeAudioResourceManager@@UEAA@XZ.c)
 *     ??_GCBtAudioResourceManager@@UEAAPEAXI@Z @ 0x1800F5700 (--_GCBtAudioResourceManager@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCBtAudioResourceManagerBase@@UISessionInternalEvents@@UIEndpointCustomFormatHandler@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800F5750 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCBtAudioResourceManagerBase@@UISessi.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x180018FE8 (--1_RecurringTask@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x1800F4D48 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@PEAX@s.c)
 *     ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x1800FB4D0 (-clear@-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEA.c)
 */

void __fastcall CBtAudioResourceManagerBase::~CBtAudioResourceManagerBase(CBtAudioResourceManagerBase *this)
{
  void **v1; // rbx
  void *v3; // rbx
  void *v4; // rcx
  void *v5; // rcx

  v1 = (void **)((char *)this + 200);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>(
    (__int64)this + 200,
    (__int64)this + 200,
    *(_QWORD *)(*((_QWORD *)this + 25) + 8LL));
  std::_Deallocate<16,0>(*v1, 0x68uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v3 = (void *)*((_QWORD *)this + 17);
  if ( v3 )
  {
    _RecurringTask::~_RecurringTask(*((PTP_TIMER **)this + 17));
    operator delete(v3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  std::forward_list<DisplacedStreamGroup>::clear((char *)this + 88);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 8);
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
    CoTaskMemFree(v4);
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 )
    CoTaskMemFree(v5);
}
