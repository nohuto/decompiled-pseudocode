/*
 * XREFs of ?_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1805EFAC0
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1805F0EE8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x1805F0228 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 */

void __fastcall CDragVisual::_OnLButtonDown(CDragVisual *this, struct tagPOINT a2)
{
  __int64 *v4; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 37) != 6 || *((_DWORD *)this + 82) )
  {
    if ( *((_QWORD *)this + 21) )
    {
      v5 = 0LL;
      v4 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v5, &v6);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v4);
      if ( IUnknown_QueryService(
             *((IUnknown **)this + 2),
             &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
             &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
             (void **)v4) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v5);
    }
  }
  else
  {
    SetCapture(*((HWND *)this + 19));
    *(struct tagPOINT *)((char *)this + 300) = a2;
    CDragVisual::_OnPressDown(this, a2);
  }
}
