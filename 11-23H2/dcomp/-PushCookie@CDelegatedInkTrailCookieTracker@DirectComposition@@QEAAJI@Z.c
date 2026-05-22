/*
 * XREFs of ?PushCookie@CDelegatedInkTrailCookieTracker@DirectComposition@@QEAAJI@Z @ 0x1800E5C2C
 * Callers:
 *     ?RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z @ 0x1800E6CC0 (-RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AD0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1800E5EA0 (McTemplateU0pq_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailCookieTracker::PushCookie(
        DirectComposition::CDelegatedInkTrailCookieTracker *this,
        unsigned int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  AcquireSRWLockExclusive(&DirectComposition::CDelegatedInkTrailCookieTracker::s_lock);
  v11 = &DirectComposition::CDelegatedInkTrailCookieTracker::s_lock;
  if ( (unsigned int)v3 <= *((_DWORD *)this + 4) && *((_DWORD *)this + 4) != -1 )
  {
    v4 = 0;
LABEL_6:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
    return v4;
  }
  v5 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
         (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 3) + 8LL),
         3,
         v3);
  v8 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\delegatedinktrailcookietracker.cpp",
      (const char *)(unsigned int)v5);
    v4 = v8;
    goto LABEL_6;
  }
  *((_DWORD *)this + 4) = v3;
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x400) != 0 )
    McTemplateU0pq_EventWriteTransfer(v7, v6, this, (unsigned int)v3);
  ReleaseSRWLockExclusive(&DirectComposition::CDelegatedInkTrailCookieTracker::s_lock);
  return 0LL;
}
