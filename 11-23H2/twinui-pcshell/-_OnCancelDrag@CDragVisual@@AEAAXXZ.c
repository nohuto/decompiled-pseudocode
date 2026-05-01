/*
 * XREFs of ?_OnCancelDrag@CDragVisual@@AEAAXXZ @ 0x1805EF6BC
 * Callers:
 *     ?_OnCaptureChanged@CDragVisual@@AEAAXXZ @ 0x1805EF764 (-_OnCaptureChanged@CDragVisual@@AEAAXXZ.c)
 *     ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x1805EFF48 (-_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1805F0EE8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UITabletModeInputCallback@@@?$ComPtr@UIDragVisualHost@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeInputCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805EBCC0 (--$As@UITabletModeInputCallback@@@-$ComPtr@UIDragVisualHost@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 */

void __fastcall CDragVisual::_OnCancelDrag(CDragVisual *this)
{
  __int64 v1; // rdx
  __int64 **v2; // rax
  __int64 (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // r8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 17);
  if ( v1 )
  {
    if ( *((_DWORD *)this + 36) != 6 || *((_BYTE *)this + 324) || *((_BYTE *)this + 325) )
    {
      v4 = 0LL;
      v2 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v4, &v5);
      if ( (int)Microsoft::WRL::ComPtr<IDragVisualHost>::As<ITabletModeInputCallback>(v3, *v2) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 48LL))(*((_QWORD *)this + 17));
    }
  }
}
