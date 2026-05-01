/*
 * XREFs of ?GetVolume@AppList@GamingAudio@@QEAAJHPEAH@Z @ 0x18040D660
 * Callers:
 *     ?GetVolume@GamingOverlayExperienceManager@@UEAAJHPEAH@Z @ 0x1803FFDB0 (-GetVolume@GamingOverlayExperienceManager@@UEAAJHPEAH@Z.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GamingAudio::AppList::GetVolume(GamingAudio::AppList *this, int a2, int *a3)
{
  __int64 *v6; // rdi
  __int64 *v7; // rbx
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 112));
  v6 = (__int64 *)*((_QWORD *)this + 20);
  v7 = (__int64 *)*((_QWORD *)this + 21);
  while ( v6 != v7 )
  {
    if ( !*v6 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D5,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)0x80004003LL);
    v8 = *v6;
    if ( *v6 && a2 == *(_DWORD *)(v8 + 48) )
    {
      *a3 = (int)(float)(*(float *)(v8 + 64) * 100.0);
      break;
    }
    ++v6;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
