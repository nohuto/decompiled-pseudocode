/*
 * XREFs of ??1CBtAudioResourceManager@@UEAA@XZ @ 0x18011397C
 * Callers:
 *     ??_GCBtAudioResourceManager@@UEAAPEAXI@Z @ 0x180113A10 (--_GCBtAudioResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1?$map@_KV?$function@$$A6AX_N@Z@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x180066824 (--1-$map@_KV-$function@$$A6AX_N@Z@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB_KV-$function@$$A6A.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0 (--1_RecurringTask@@QEAA@XZ.c)
 *     ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x180117994 (-clear@-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEA.c)
 */

void __fastcall CBtAudioResourceManager::~CBtAudioResourceManager(CBtAudioResourceManager *this)
{
  void *v2; // rdi

  std::map<unsigned __int64,std::function<void (bool)>>::~map<unsigned __int64,std::function<void (bool)>>((void **)this + 22);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 3);
  v2 = (void *)*((_QWORD *)this + 14);
  if ( v2 )
  {
    _RecurringTask::~_RecurringTask(*((PTP_TIMER **)this + 14));
    operator delete(v2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  std::forward_list<DisplacedStreamGroup>::clear((char *)this + 64);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)this + 6);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)this + 5);
  *((_DWORD *)this + 5) = -1073741823;
}
