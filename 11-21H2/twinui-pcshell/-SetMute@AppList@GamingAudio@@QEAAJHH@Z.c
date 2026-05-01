/*
 * XREFs of ?SetMute@AppList@GamingAudio@@QEAAJHH@Z @ 0x1803407B8
 * Callers:
 *     ?SetMute@GamingOverlayExperienceManager@@UEAAJHH@Z @ 0x180339750 (-SetMute@GamingOverlayExperienceManager@@UEAAJHH@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMute@SessionInfoItem@GamingAudio@@QEAAJH@Z @ 0x180340878 (-SetMute@SessionInfoItem@GamingAudio@@QEAAJH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingAudio::AppList::SetMute(GamingAudio::AppList *this, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  GamingAudio::SessionInfoItem **v7; // rbx
  GamingAudio::SessionInfoItem **v8; // rsi
  unsigned int v9; // edi
  GamingAudio::SessionInfoItem *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v13 = v6;
  v7 = (GamingAudio::SessionInfoItem **)*((_QWORD *)this + 20);
  v8 = (GamingAudio::SessionInfoItem **)*((_QWORD *)this + 21);
  v9 = 0;
  while ( v7 != v8 )
  {
    v10 = *v7;
    if ( *v7
      || (wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x20D,
            (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
            (const char *)0x80004003LL),
          (v10 = *v7) != 0LL) )
    {
      if ( a2 == *((_DWORD *)v10 + 12) )
      {
        v9 = GamingAudio::SessionInfoItem::SetMute(v10, a3);
        break;
      }
    }
    ++v7;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
  return v9;
}
