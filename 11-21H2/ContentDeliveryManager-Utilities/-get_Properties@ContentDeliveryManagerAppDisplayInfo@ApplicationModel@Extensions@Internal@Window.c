/*
 * XREFs of ?get_Properties@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x1800DA9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::get_Properties(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 56))(
         *(_QWORD *)(a1 + 56),
         &GUID_58b612f7_0fbb_480d_abea_5ce1a45a9ec7,
         &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappdisplayinfo.cpp",
      (const char *)(unsigned int)v3);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return v4;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 48LL))(v8, a2);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappdisplayinfo.cpp",
      (const char *)(unsigned int)v6);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return v4;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return 0LL;
}
