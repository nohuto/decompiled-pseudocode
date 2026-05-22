/*
 * XREFs of ?get_WindowContext@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJPEAPEAUIWindowContextPartner@45@@Z @ 0x180114160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandEnvironment::Api::get_WindowContext(
        RTL_SRWLOCK *this,
        struct Windows::UI::IWindowContextPartner **a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct Windows::UI::IWindowContextPartner *Ptr; // rdi
  struct Windows::UI::IWindowContextPartner *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = this + 2;
  AcquireSRWLockShared(this + 2);
  Ptr = (struct Windows::UI::IWindowContextPartner *)this[7].Ptr;
  v7 = Ptr;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v7);
  v7 = 0LL;
  *a2 = Ptr;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v7);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
