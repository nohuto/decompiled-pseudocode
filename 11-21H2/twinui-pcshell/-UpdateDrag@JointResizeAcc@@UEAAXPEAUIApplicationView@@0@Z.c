/*
 * XREFs of ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z @ 0x18052B5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180032CA8 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18010FDA8 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z @ 0x18052B480 (-RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall JointResizeAcc::UpdateDrag(
        IRawElementProviderSimple *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64))
{
  unsigned __int16 **v6; // r8
  int ViewTitle; // eax
  unsigned __int16 **v8; // r8
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  int v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
  v16 = -1LL;
  v17 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(a2, &v15, v6);
  if ( ViewTitle >= 0 )
  {
    *(_QWORD *)v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v12);
    v13 = -1LL;
    v14 = -1LL;
    v9 = ApplicationViewHelpers::GetViewTitle(a3, (unsigned __int16 **)v12, v8);
    v10 = retaddr;
    if ( v9 >= 0 )
    {
      v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
             (__int64)&this[10],
             &_ImageBase,
             0x7D4u);
      v10 = retaddr;
      if ( v9 >= 0 )
      {
        JointResizeAcc::RaisePropertyChangeNotification(this - 2, 30139);
        JointResizeAcc::RaisePropertyChangeNotification(this - 2, 30140);
        goto LABEL_9;
      }
      v11 = 174LL;
    }
    else
    {
      v11 = 168LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v10,
      (void *)v11,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
      (const char *)(unsigned int)v9);
LABEL_9:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v12);
    goto LABEL_10;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xA5,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
    (const char *)(unsigned int)ViewTitle);
LABEL_10:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
}
