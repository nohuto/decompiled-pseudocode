/*
 * XREFs of ??1InputSinkDataCache@@QEAA@XZ @ 0x180055F30
 * Callers:
 *     _InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__ @ 0x180083A50 (_InputSinkDataCache--GetInstance_--_2_--_dynamic_atexit_destructor_for__instance__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x1800AA000 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@QEAV1@AEA.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AA1C4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall InputSinkDataCache::~InputSinkDataCache(InputSinkDataCache *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 12);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<NotificationData>>(v2, *((_QWORD *)this + 10));
    std::_Deallocate<16,0>(*((void **)this + 9), 32 * ((__int64)(*((_QWORD *)this + 11) - *((_QWORD *)this + 9)) >> 5));
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  std::_Deallocate<16,0>(*((void **)this + 4), (*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v3,
    *((_QWORD *)this + 2));
  std::_Deallocate<16,0>(*((void **)this + 2), 0x20uLL);
}
