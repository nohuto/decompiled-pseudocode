/*
 * XREFs of ?InitDragData@WindowArrangementView@@AEAAJXZ @ 0x1805D2554
 * Callers:
 *     ?InitView@WindowArrangementView@@AEAAJXZ @ 0x1805D2CE4 (-InitView@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x1805DB47C (-DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180746164 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::InitDragData(WindowArrangementView *this)
{
  unsigned int v2; // edi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v3; // rdx
  int Instance; // eax
  unsigned int v5; // ebx
  int pvParam; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v8[40]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 1LL) < 2;
  if ( SystemParametersInfoW(0x82u, 0, &pvParam, 0) && !pvParam
    || *((_DWORD *)this + 72) == 1
    || ((*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 24LL))(*((_QWORD *)this + 15), v8),
        ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps((ImmersiveApplicationLayout *)v8, v3) == 1) )
  {
    v2 |= 4u;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 12);
  Instance = DragData_CreateInstance(
               *((_QWORD *)this + 2),
               *((_QWORD *)this + 15),
               *((_QWORD *)this + 11),
               v2,
               &GUID_37174fc0_9131_4a7e_a52f_f91d0258105f,
               (char *)this + 96);
  v5 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3ED,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)Instance);
  return v5;
}
