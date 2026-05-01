/*
 * XREFs of ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@_K@Z @ 0x18052B720
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180032CA8 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18010FDA8 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z @ 0x18052B480 (-RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall JointResizeAcc::UpdateDrag(
        IRawElementProviderSimple *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        __int64 a3)
{
  unsigned __int16 **v6; // r8
  int ViewTitle; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  const WCHAR *v10; // r9
  unsigned __int16 *v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v11);
  v12 = -1LL;
  v13 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(a2, &v11, v6);
  v8 = retaddr;
  if ( ViewTitle >= 0 )
  {
    v10 = &LocaleName;
    if ( v11 )
      v10 = v11;
    ViewTitle = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
                  (__int64)&this[10],
                  &_ImageBase,
                  0x7DCu,
                  v10,
                  a3);
    v8 = retaddr;
    if ( ViewTitle >= 0 )
    {
      JointResizeAcc::RaisePropertyChangeNotification(this - 2, 30139);
      JointResizeAcc::RaisePropertyChangeNotification(this - 2, 30140);
      goto LABEL_9;
    }
    v9 = 195LL;
  }
  else
  {
    v9 = 189LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v8,
    (void *)v9,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
    (const char *)(unsigned int)ViewTitle);
LABEL_9:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v11);
}
