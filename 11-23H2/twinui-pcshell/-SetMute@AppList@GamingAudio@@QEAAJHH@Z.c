/*
 * XREFs of ?SetMute@AppList@GamingAudio@@QEAAJHH@Z @ 0x18040E428
 * Callers:
 *     ?SetMute@GamingOverlayExperienceManager@@UEAAJHH@Z @ 0x180407340 (-SetMute@GamingOverlayExperienceManager@@UEAAJHH@Z.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMute@SessionInfoItem@GamingAudio@@QEAAJH@Z @ 0x18040E4E8 (-SetMute@SessionInfoItem@GamingAudio@@QEAAJH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingAudio::AppList::SetMute(GamingAudio::AppList *this, int a2, int a3)
{
  GamingAudio::SessionInfoItem **v6; // rdi
  GamingAudio::SessionInfoItem **v7; // rbx
  GamingAudio::SessionInfoItem *v8; // rcx
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 112));
  v6 = (GamingAudio::SessionInfoItem **)*((_QWORD *)this + 20);
  v7 = (GamingAudio::SessionInfoItem **)*((_QWORD *)this + 21);
  while ( 1 )
  {
    if ( v6 == v7 )
    {
      v9 = 0;
      goto LABEL_9;
    }
    if ( !*v6 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20D,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)0x80004003LL);
    v8 = *v6;
    if ( *v6 )
    {
      if ( a2 == *((_DWORD *)v8 + 12) )
        break;
    }
    ++v6;
  }
  v9 = GamingAudio::SessionInfoItem::SetMute(v8, a3);
LABEL_9:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
