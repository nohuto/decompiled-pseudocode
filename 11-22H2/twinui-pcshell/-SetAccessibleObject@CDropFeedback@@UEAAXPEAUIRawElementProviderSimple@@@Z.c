/*
 * XREFs of ?SetAccessibleObject@CDropFeedback@@UEAAXPEAUIRawElementProviderSimple@@@Z @ 0x1805EA570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDropFeedback::SetAccessibleObject(CDropFeedback *this, struct IRawElementProviderSimple *a2)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( *((struct IRawElementProviderSimple **)this + 21) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IRawElementProviderSimple *))a2->lpVtbl->AddRef)(a2);
    v7 = *((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = a2;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v7);
  }
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 21);
  v6 = 0LL;
  v5 = **v4;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v6);
  if ( v5(v4, &GUID_18a88c04_f6d0_48c4_802d_0e30fed9a33a, &v6) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, *((_QWORD *)this + 5));
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v6);
}
