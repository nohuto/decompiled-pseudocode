/*
 * XREFs of ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802969AC
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18029B260 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x180024D8C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x180024E64 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x1801932D8 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180297DE4 (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator@U-$pair@$$CB.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180297F04 (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicViewData@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x18029CF8C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveInteropTexture(
        CHolographicManager *this,
        struct CHolographicInteropTexture *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct CHolographicInteropTexture **i; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  CHolographicInteropTaskQueue *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct IStereoscopicContentManager *StereoscopicContentManager; // rdi
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+40h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+50h] [rbp+7h] BYREF
  int *v23; // [rsp+70h] [rbp+27h]
  int v24; // [rsp+78h] [rbp+2Fh]
  int v25; // [rsp+7Ch] [rbp+33h]

  v2 = (RTL_SRWLOCK *)((char *)this + 104);
  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  for ( i = (struct CHolographicInteropTexture **)*((_QWORD *)this + 18);
        i != *((struct CHolographicInteropTexture ***)this + 19);
        ++i )
  {
    if ( *i == a2 )
    {
      memmove_0(i, i + 1, *((_QWORD *)this + 19) - (_QWORD)(i + 1));
      *((_QWORD *)this + 19) -= 8LL;
      v9 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
      if ( v9 && *((_BYTE *)this + 240) )
        CHolographicInteropTaskQueue::PostMessageW(
          v9,
          3u,
          (struct IUnknown *)(((unsigned __int64)a2 + 80) & -(__int64)(a2 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL);
      if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this + 3), v6, v7, v8) )
      {
        StereoscopicContentManager = CComposition::GetStereoscopicContentManager(
                                       *((CComposition **)this + 3),
                                       v10,
                                       v12,
                                       v13);
        v20 = *((_DWORD *)a2 + 56);
        v21 = (struct _RTL_CRITICAL_SECTION *)((char *)StereoscopicContentManager + 96);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)StereoscopicContentManager + 96));
        std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::erase(
          (char *)StereoscopicContentManager + 328,
          &v20);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v21);
        v21 = (struct _RTL_CRITICAL_SECTION *)((char *)StereoscopicContentManager + 40);
        EnterCriticalSection((LPCRITICAL_SECTION)StereoscopicContentManager + 1);
        std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::erase(
          (char *)StereoscopicContentManager + 80,
          &v20);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v21);
      }
      v15 = *((_DWORD *)a2 + 56);
      if ( CompositorTracing::IsEnabled(v11) )
      {
        wil::details::static_lazy<CompositorTracing>::get(
          v16,
          _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
        v18 = (_DWORD *)wil::details::static_lazy<CompositorTracing>::get(
                          v17,
                          _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
        if ( *v18 > 4u )
        {
          if ( tlgKeywordOn((__int64)v18, 0x400000000000LL) )
          {
            v25 = 0;
            v23 = &v20;
            v20 = v15;
            v24 = 4;
            tlgWriteTransfer_EventWriteTransfer(v19, (unsigned __int8 *)dword_180373B70, 0LL, 0LL, 3u, &v22);
          }
        }
      }
      CResource::InternalRelease(a2);
      break;
    }
  }
  ReleaseSRWLockExclusive(v2);
}
