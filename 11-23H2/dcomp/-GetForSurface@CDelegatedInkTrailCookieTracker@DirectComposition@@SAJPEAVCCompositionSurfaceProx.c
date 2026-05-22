/*
 * XREFs of ?GetForSurface@CDelegatedInkTrailCookieTracker@DirectComposition@@SAJPEAVCCompositionSurfaceProxy@2@PEAPEAV12@@Z @ 0x1800E5AB4
 * Callers:
 *     ?Initialize@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@@Z @ 0x1800E6AB0 (-Initialize@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCCompositionSurface.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AD0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$_Emplace_reallocate@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@?$vector@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@V?$allocator@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@std@@@std@@QEAAPEAPEAVCDelegatedInkTrailCookieTracker@DirectComposition@@QEAPEAV23@$$QEAPEAV23@@Z @ 0x1800E5810 (--$_Emplace_reallocate@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@-$vector@PEAVCDel.c)
 *     ??1?$ComPtr@VCDelegatedInkTrailCookieTracker@DirectComposition@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E591C (--1-$ComPtr@VCDelegatedInkTrailCookieTracker@DirectComposition@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCDelegatedInkTrailCookieTracker@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@PEAVCDelegatedInkTrailCookieTracker@DirectComposition@@@Z @ 0x1800E59D4 (--4-$ComPtr@VCDelegatedInkTrailCookieTracker@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@PEAV.c)
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailCookieTracker::GetForSurface(
        struct DirectComposition::CCompositionSurfaceProxy *a1,
        struct DirectComposition::CDelegatedInkTrailCookieTracker **a2)
{
  void (__fastcall ****v4)(_QWORD); // rdx
  _DWORD *v5; // rax
  const char *v6; // rcx
  struct DirectComposition::CDelegatedInkTrailCookieTracker *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct DirectComposition::CDelegatedInkTrailCookieTracker *v10; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  AcquireSRWLockExclusive(&DirectComposition::CDelegatedInkTrailCookieTracker::s_lock);
  v4 = (void (__fastcall ****)(_QWORD))DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers;
  v11 = &DirectComposition::CDelegatedInkTrailCookieTracker::s_lock;
  while ( v4 != (void (__fastcall ****)(_QWORD))qword_180220998 && (*v4)[3] != (void (__fastcall **)(_QWORD))a1 )
    ++v4;
  v10 = 0LL;
  if ( v4 == (void (__fastcall ****)(_QWORD))qword_180220998 )
  {
    v5 = DefaultHeap::Alloc(0x20uLL);
    if ( v5 )
    {
      v5[2] = 0;
      v5[4] = 0;
      v5[5] = 0;
      *(_QWORD *)v5 = &DirectComposition::CDelegatedInkTrailCookieTracker::`vftable';
      *((_QWORD *)v5 + 3) = a1;
      if ( a1 )
        _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    }
    Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailCookieTracker>::operator=(
      &v10,
      (void (__fastcall ***)(_QWORD))v5);
    v7 = v10;
    if ( !v10 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\delegatedinktrailcookietracker.cpp",
        (const char *)0x8007000ELL);
      Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailCookieTracker>::~ComPtr<DirectComposition::CDelegatedInkTrailCookieTracker>(&v10);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
      return 2147942414LL;
    }
    if ( qword_180220998 == qword_1802209A0 )
    {
      std::vector<DirectComposition::CDelegatedInkTrailCookieTracker *>::_Emplace_reallocate<DirectComposition::CDelegatedInkTrailCookieTracker *>(
        v6,
        (_BYTE *)qword_180220998,
        &v10);
    }
    else
    {
      *(_QWORD *)qword_180220998 = v10;
      qword_180220998 += 8LL;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailCookieTracker>::operator=(&v10, *v4);
    v7 = v10;
  }
  *a2 = v7;
  ReleaseSRWLockExclusive(&DirectComposition::CDelegatedInkTrailCookieTracker::s_lock);
  return 0LL;
}
