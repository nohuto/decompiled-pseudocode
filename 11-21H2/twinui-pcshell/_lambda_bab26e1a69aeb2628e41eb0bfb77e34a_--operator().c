/*
 * XREFs of _lambda_bab26e1a69aeb2628e41eb0bfb77e34a_::operator() @ 0x1804C9108
 * Callers:
 *     CSimpleHashTable_HWND_____MultitaskingViewAnimationCoordinatorBase::ThumbnailData_CDefaultHashPolicy_HWND______CDefaultKeyCompare_HWND______CDefaultResizePolicy_CDefaultRehashPolicy_::s_EnumAdaptor__lambda_bab26e1a69aeb2628e41eb0bfb77e34a___ @ 0x1804C8DC0 (CSimpleHashTable_HWND_____MultitaskingViewAnimationCoordinatorBase--ThumbnailData_CDefaultHashPo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_bab26e1a69aeb2628e41eb0bfb77e34a_::operator()(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v6; // r14
  __int64 v7; // rdi
  int WindowThumbnailSourceSize; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v13[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v14[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v6 = *(_QWORD **)a1;
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a3 + 8) + 208LL))(
         *(_QWORD *)(a3 + 8),
         **(_QWORD **)a1) )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)(v7 + 32);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v14, &v12, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    v15 = 0LL;
    v13[0] = 0;
    v13[1] = 0;
    WindowThumbnailSourceSize = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v7 + 152LL))(
                                  v7,
                                  *(_QWORD *)a3,
                                  &v15);
    v9 = retaddr;
    if ( WindowThumbnailSourceSize >= 0 )
    {
      WindowThumbnailSourceSize = DwmpQueryWindowThumbnailSourceSize(*a2, 0LL, v13);
      v9 = retaddr;
      if ( WindowThumbnailSourceSize >= 0 )
      {
        WindowThumbnailSourceSize = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int128 *, _DWORD, _QWORD))(**(_QWORD **)(a3 + 8) + 120LL))(
                                      *(_QWORD *)(a3 + 8),
                                      *v6,
                                      v13,
                                      &v15,
                                      *(_DWORD *)(v7 + 148),
                                      0LL);
        v9 = retaddr;
        if ( WindowThumbnailSourceSize >= 0 )
        {
LABEL_9:
          DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v14);
          return 0LL;
        }
        v10 = 289LL;
      }
      else
      {
        v10 = 287LL;
      }
    }
    else
    {
      v10 = 286LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v9,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)WindowThumbnailSourceSize);
    goto LABEL_9;
  }
  return 1LL;
}
