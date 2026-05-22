/*
 * XREFs of ?SetRoot@CSharedTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x18010DBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDesktopDevicePartner@CSharedTarget@Composition@UI@Windows@@SAJPEAUIUnknown@@PEAPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180016250 (-GetDesktopDevicePartner@CSharedTarget@Composition@UI@Windows@@SAJPEAUIUnknown@@PEAPEAUIDComposi.c)
 *     ??$ReleaseInterface@UIDCompositionDesktopDevicePartner@@@@YAXAEAPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x1800162F0 (--$ReleaseInterface@UIDCompositionDesktopDevicePartner@@@@YAXAEAPEAUIDCompositionDesktopDevicePa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReplaceInterface@UIDCompositionDesktopDevicePartner@@U1@@@YAXAEAPEAUIDCompositionDesktopDevicePartner@@PEAU0@@Z @ 0x18010D998 (--$ReplaceInterface@UIDCompositionDesktopDevicePartner@@U1@@@YAXAEAPEAUIDCompositionDesktopDevic.c)
 */

__int64 __fastcall Windows::UI::Composition::CSharedTarget::SetRoot(
        Windows::UI::Composition::CSharedTarget *this,
        struct IUnknown *a2)
{
  int DesktopDevicePartner; // edi
  struct IDCompositionDesktopDevicePartner *v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rcx
  struct IDCompositionDesktopDevicePartner *v11; // [rsp+48h] [rbp+10h] BYREF

  DesktopDevicePartner = 0;
  if ( a2 )
  {
    v11 = 0LL;
    DesktopDevicePartner = Windows::UI::Composition::CSharedTarget::GetDesktopDevicePartner(a2, &v11);
    if ( DesktopDevicePartner >= 0 )
    {
      v5 = v11;
      v6 = (_QWORD *)((char *)this + 24);
      v7 = *((_QWORD *)this + 3);
      if ( v7 && v11 != *((struct IDCompositionDesktopDevicePartner **)this + 4) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(*((_QWORD *)this + 3), 0LL);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
        *v6 = 0LL;
        ReleaseInterface<IDCompositionDesktopDevicePartner>((__int64 *)this + 4);
        v5 = v11;
      }
      if ( *v6 )
        goto LABEL_9;
      DesktopDevicePartner = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, _QWORD, GUID *, char *))(*(_QWORD *)v5 + 232LL))(
                               v5,
                               *((_QWORD *)this + 2),
                               &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
                               (char *)this + 24);
      if ( DesktopDevicePartner >= 0 )
      {
        ReplaceInterface<IDCompositionDesktopDevicePartner,IDCompositionDesktopDevicePartner>(
          (__int64 *)this + 4,
          (__int64)v11);
LABEL_9:
        DesktopDevicePartner = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(*(_QWORD *)*v6 + 24LL))(*v6, a2);
      }
    }
    v8 = (__int64 *)&v11;
LABEL_13:
    ReleaseInterface<IDCompositionDesktopDevicePartner>(v8);
    return (unsigned int)DesktopDevicePartner;
  }
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    v8 = (__int64 *)((char *)this + 32);
    goto LABEL_13;
  }
  return (unsigned int)DesktopDevicePartner;
}
