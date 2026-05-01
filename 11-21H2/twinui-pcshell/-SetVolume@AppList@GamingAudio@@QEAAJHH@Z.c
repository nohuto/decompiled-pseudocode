/*
 * XREFs of ?SetVolume@AppList@GamingAudio@@QEAAJHH@Z @ 0x180340914
 * Callers:
 *     ?SetVolume@GamingOverlayExperienceManager@@UEAAJHH@Z @ 0x1803397A0 (-SetVolume@GamingOverlayExperienceManager@@UEAAJHH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingAudio::AppList::SetVolume(GamingAudio::AppList *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rdx
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v16 = v4;
  v6 = (__int64 *)*((_QWORD *)this + 20);
  v7 = (__int64 *)*((_QWORD *)this + 21);
  if ( v6 != v7 )
  {
    v8 = -2147467261;
    while ( 1 )
    {
      v9 = *v6;
      if ( *v6
        || (wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1E8,
              (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
              (const char *)0x80004003LL),
            (v9 = *v6) != 0) )
      {
        if ( a2 == *(_DWORD *)(v9 + 48) )
          break;
      }
      if ( ++v6 == v7 )
        goto LABEL_7;
    }
    v11 = *(_QWORD *)(v9 + 744);
    if ( !v11 )
    {
      v12 = 2147500035LL;
      v13 = 221LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)v12);
      goto LABEL_8;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, v5, 0LL);
    v8 = v14;
    if ( v14 < 0 )
    {
      v12 = (unsigned int)v14;
      v13 = 223LL;
      goto LABEL_11;
    }
  }
LABEL_7:
  v8 = 0;
LABEL_8:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v16);
  return v8;
}
