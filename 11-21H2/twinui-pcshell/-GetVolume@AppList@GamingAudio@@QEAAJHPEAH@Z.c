/*
 * XREFs of ?GetVolume@AppList@GamingAudio@@QEAAJHPEAH@Z @ 0x18033FA10
 * Callers:
 *     ?GetVolume@GamingOverlayExperienceManager@@UEAAJHPEAH@Z @ 0x180332740 (-GetVolume@GamingOverlayExperienceManager@@UEAAJHPEAH@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GamingAudio::AppList::GetVolume(GamingAudio::AppList *this, int a2, int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v12 = v3;
  v7 = (__int64 *)*((_QWORD *)this + 20);
  v8 = (__int64 *)*((_QWORD *)this + 21);
  while ( v7 != v8 )
  {
    v9 = *v7;
    if ( *v7
      || (wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1D5,
            (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
            (const char *)0x80004003LL),
          (v9 = *v7) != 0) )
    {
      if ( a2 == *(_DWORD *)(v9 + 48) )
      {
        *a3 = (int)(float)(*(float *)(v9 + 64) * 100.0);
        break;
      }
    }
    ++v7;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v12);
  return 0LL;
}
