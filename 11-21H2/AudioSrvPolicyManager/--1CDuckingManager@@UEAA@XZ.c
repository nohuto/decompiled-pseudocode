/*
 * XREFs of ??1CDuckingManager@@UEAA@XZ @ 0x180008BF0
 * Callers:
 *     ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x180009210 (--_ECDuckingManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@0@@Z @ 0x1800082D4 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@@s.c)
 *     ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAA@XZ @ 0x180008A28 (--1-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UCRenderEndp.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 */

void __fastcall CDuckingManager::~CDuckingManager(CDuckingManager *this)
{
  struct _TP_POOL *v2; // rcx
  _QWORD *v3; // rcx
  char *v4; // rcx
  char *v5; // rbx

  std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)this + 432);
  std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)this + 416);
  v2 = (struct _TP_POOL *)*((_QWORD *)this + 30);
  if ( v2 )
  {
    CloseThreadpool(v2);
    *((_QWORD *)this + 30) = 0LL;
  }
  _Mtx_destroy_in_situ((CDuckingManager *)((char *)this + 328));
  std::_Deallocate<16,0>(
    *((char **)this + 25),
    (*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  std::list<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>::~list<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>((char **)this + 23);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v3 = (_QWORD *)*((_QWORD *)this + 14);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>(
      v3,
      *((_QWORD **)this + 15));
    std::_Deallocate<16,0>(
      *((char **)this + 14),
      (*((_QWORD *)this + 16) - *((_QWORD *)this + 14)) & 0xFFFFFFFFFFFFFFC0uLL);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v4 = (char *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v4 )
  {
    do
    {
      v5 = *(char **)v4;
      std::_Deallocate<16,0>(v4, 0x10uLL);
      v4 = v5;
    }
    while ( v5 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}
