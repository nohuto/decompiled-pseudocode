/*
 * XREFs of ?GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z @ 0x180166AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18007A3FC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z @ 0x18031DD0C (--$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagR.c)
 */

__int64 __fastcall ApplicationViewOperation::GetPosition(
        ApplicationViewOperation *this,
        struct IApplicationViewPosition **a2)
{
  __int64 *v2; // rdi
  char v6; // al
  __int64 v7; // rdx
  int v8; // ebx
  char *v9; // r14
  int v10; // ecx
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a2 = 0LL;
  v2 = (__int64 *)((char *)this + 72);
  if ( *((_QWORD *)this + 9) )
    goto LABEL_2;
  v6 = *((_BYTE *)this + 92);
  if ( !v6 && !*((_DWORD *)this + 20) )
    return 2147943568LL;
  if ( !*((_DWORD *)this + 21) || *((_DWORD *)this + 20) == 4 )
  {
    v9 = (char *)this + 88;
    if ( *((_DWORD *)this + 22) && !*((_DWORD *)this + 20) )
    {
      v7 = 65LL;
      goto LABEL_10;
    }
    v10 = *((_DWORD *)this + 20);
    if ( v10 )
    {
      v11 = 0LL;
      if ( v6 )
      {
        if ( (unsigned int)(v10 - 3) > 1 )
        {
          v7 = 73LL;
          goto LABEL_10;
        }
        v11 = *((_OWORD *)this + 6);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
      v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePosition,IApplicationViewPosition,tagRECT &,enum ARRANGEMENT_BASED_VIEW_STATE &,unsigned long &,enum ARRANGEMENT_BASED_VIEW_STATE_OPTIONS &>(
             (_DWORD)v2,
             (unsigned int)&v11,
             (int)this + 80,
             (int)this + 84,
             (__int64)v9);
      if ( v8 < 0 )
      {
        v7 = 76LL;
        goto LABEL_11;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
      v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
             (void **)v2,
             (struct tagRECT *)this + 6);
      if ( v8 < 0 )
      {
        v7 = 81LL;
        goto LABEL_11;
      }
    }
LABEL_2:
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v2);
    *a2 = (struct IApplicationViewPosition *)*v2;
    return 0LL;
  }
  v7 = 61LL;
LABEL_10:
  v8 = -2147024809;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\internal\\shell\\inc\\private\\ApplicationViewOperationHelpers.h",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
