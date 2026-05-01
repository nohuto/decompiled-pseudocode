/*
 * XREFs of ?_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x1805EFF90
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1805F0EE8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x1805F0228 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 */

void __fastcall CDragVisual::_OnPointerDown(CDragVisual *this, unsigned int a2, struct tagPOINT a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rax
  _BYTE v8[40]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+90h] [rbp+8h] BYREF
  __int64 v11; // [rsp+A8h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 21) )
  {
    v10 = 0LL;
    v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v10, &v11);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v6);
    if ( IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
           &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
           (void **)v6) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
  }
  else if ( GetCapture() != *((HWND *)this + 19) && !*((_DWORD *)this + 82) )
  {
    if ( (unsigned int)GetPointerInfo(a2, v8) )
    {
      v10 = v9;
      v7 = v9;
      *(_QWORD *)((char *)this + 316) = v9;
      *(_QWORD *)((char *)this + 308) = v7;
      *((_DWORD *)this + 82) = a2;
      *(struct tagPOINT *)((char *)this + 300) = a3;
    }
    if ( *((_DWORD *)this + 37) == 6 )
      CDragVisual::_OnPressDown(this, a3);
  }
}
