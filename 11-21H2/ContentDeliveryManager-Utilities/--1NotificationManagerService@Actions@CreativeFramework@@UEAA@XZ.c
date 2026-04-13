/*
 * XREFs of ??1NotificationManagerService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800CA39C
 * Callers:
 *     ??_ENotificationManagerService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800CA780 (--_ENotificationManagerService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18006E19C (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@U-$.c)
 *     ??1ToastHelpers@NotificationManager@CreativeFramework@@QEAA@XZ @ 0x1800CA46C (--1ToastHelpers@NotificationManager@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::NotificationManagerService::~NotificationManagerService(
        CreativeFramework::Actions::NotificationManagerService *this)
{
  CreativeFramework::NotificationManager::ToastHelpers *v1; // rdi

  v1 = (CreativeFramework::NotificationManager::ToastHelpers *)*((_QWORD *)this + 17);
  if ( v1 )
  {
    CreativeFramework::NotificationManager::ToastHelpers::~ToastHelpers(v1);
    operator delete(v1);
  }
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>((void **)this + 15);
  if ( *((_QWORD *)this + 13) >= 8uLL )
    operator delete(*((void **)this + 10));
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 7LL;
  *((_WORD *)this + 40) = 0;
  if ( *((_QWORD *)this + 9) >= 8uLL )
    operator delete(*((void **)this + 6));
  *((_QWORD *)this + 9) = 7LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 24) = 0;
  if ( *((_QWORD *)this + 5) >= 8uLL )
    operator delete(*((void **)this + 2));
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 7LL;
  *((_WORD *)this + 8) = 0;
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
}
