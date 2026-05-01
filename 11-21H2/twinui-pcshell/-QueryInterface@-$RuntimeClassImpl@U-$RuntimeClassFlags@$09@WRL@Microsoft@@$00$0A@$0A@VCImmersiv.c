/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007CDE0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F6AF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$_ea_1801F6AF0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F6B10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$_ea_1801F6B10.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F6B30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$_ea_1801F6B30.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800803B0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$Impleme_ea_1800803B0.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800B0FBC (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<10>,1,0,0,CImmersiveShellComponentWithSite,IImmersiveShellStressTool>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v5; // ebx
  int CanCastTo; // eax
  _QWORD *v7; // r8
  __int64 v8; // r11
  unsigned int v9; // edi
  __int64 v10; // rbp
  __int64 v12; // rax

  v5 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    v12 = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown();
    *a3 = v12;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    return v5;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::CanCastTo();
  v9 = -2147467262;
  if ( CanCastTo != -2147467262 )
  {
    v9 = CanCastTo;
    if ( CanCastTo < 0 )
      return v9;
LABEL_7:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    return v9;
  }
  v10 = a1 + 88;
  if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_44a99782_39de_4d3d_9ef4_e8b221d82f15) )
  {
    *v7 = v10;
    v9 = 0;
    goto LABEL_7;
  }
  return v9;
}
