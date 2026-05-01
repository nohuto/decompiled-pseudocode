/*
 * XREFs of ?GetIids@CImmersiveWindowFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1807991C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveWindowFactoryBase@@@Details@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18079916C (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U-$ImplementsMa.c)
 *     ?GetIidCount@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveWindowFactoryBase@@@Details@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18079919C (-GetIidCount@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U-$ImplementsMarker@.c)
 */

__int64 __fastcall CImmersiveWindowFactory::GetIids(CImmersiveWindowFactory *this, unsigned int *a2, struct _GUID **a3)
{
  unsigned int v3; // ebx
  unsigned int IidCount; // eax
  unsigned int v8; // esi
  struct _GUID *v9; // rax
  struct _GUID *v10; // rdi
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  IidCount = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveWindowFactoryBase>,IWeakReferenceSource>::GetIidCount();
  v8 = IidCount;
  if ( IidCount )
  {
    v9 = (struct _GUID *)CoTaskMemAlloc(16LL * IidCount);
    v10 = v9;
    if ( v9 )
    {
      v12 = 0;
      Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveWindowFactoryBase>,IWeakReferenceSource>::FillArrayWithIid(
        (__int64)this,
        &v12,
        (__int64)v9);
      *a2 = v8;
      *a3 = v10;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return v3;
}
