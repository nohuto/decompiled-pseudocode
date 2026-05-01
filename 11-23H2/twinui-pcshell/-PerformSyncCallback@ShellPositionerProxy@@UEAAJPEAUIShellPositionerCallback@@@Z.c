/*
 * XREFs of ?PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z @ 0x1800D07A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerProxy::PerformSyncCallback(
        ShellPositionerProxy *this,
        struct IShellPositionerCallback *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 2) + 56LL))(
         *((_QWORD *)this + 2),
         *((_QWORD *)this + 3),
         &GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130,
         &v10);
  v4 = v3;
  v5 = -2147023728;
  if ( v3 == -2147023728 )
    goto LABEL_7;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerproxy.cpp",
      (const char *)(unsigned int)v3,
      v8);
    v5 = v4;
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(struct IShellPositionerCallback *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v10);
  if ( v5 < 0 )
  {
LABEL_7:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    return (unsigned int)v5;
  }
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0LL;
}
