/*
 * XREFs of ?SetAccessibleObject@CDropFeedback@@UEAAXPEAUIRawElementProviderSimple@@@Z @ 0x18052F830
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDropFeedback::SetAccessibleObject(CDropFeedback *this, struct IRawElementProviderSimple *a2)
{
  struct IRawElementProviderSimple *v2; // rsi
  HRESULT (__stdcall *QueryInterface)(IRawElementProviderSimple *, const IID *const, void **); // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  struct IRawElementProviderSimple *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct IRawElementProviderSimple *)*((_QWORD *)this + 21);
  if ( v2 != a2 )
  {
    if ( a2 )
    {
      ((void (__fastcall *)(struct IRawElementProviderSimple *))a2->lpVtbl->AddRef)(a2);
      v2 = (struct IRawElementProviderSimple *)*((_QWORD *)this + 21);
    }
    v7 = v2;
    *((_QWORD *)this + 21) = a2;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v7);
    v2 = (struct IRawElementProviderSimple *)*((_QWORD *)this + 21);
  }
  v6 = 0LL;
  QueryInterface = v2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v6);
  if ( ((int (__fastcall *)(struct IRawElementProviderSimple *, GUID *, __int64 *))QueryInterface)(
         v2,
         &GUID_18a88c04_f6d0_48c4_802d_0e30fed9a33a,
         &v6) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, *((_QWORD *)this + 5));
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v6);
}
