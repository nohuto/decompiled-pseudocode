/*
 * XREFs of ?GetPosition@KioskPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1805A8300
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x180125A98 (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePos.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KioskPositioner::GetPosition(KioskPositioner *this, HWND a2, const struct _GUID *a3, void **a4)
{
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  const char *v10; // r9
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v13)(_QWORD, const struct _GUID *, void **); // [rsp+30h] [rbp+8h] BYREF
  HWND v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = a2;
  *a4 = 0LL;
  if ( *((_BYTE *)this + 528) )
  {
    v13 = 0LL;
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
           (void **)&v13,
           &v14);
    v8 = v7;
    if ( v7 >= 0 )
    {
      try
      {
        if ( v13 )
        {
          v9 = (**v13)(v13, a3, a4);
          if ( v9 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x1815,
              (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
              (const char *)(unsigned int)v9,
              v11);
        }
        else
        {
          *a4 = 0LL;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
        result = 0LL;
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x25A,
                               (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                               v10);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x256,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x254,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}
