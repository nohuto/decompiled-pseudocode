/*
 * XREFs of ?put_WindowContext@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJPEAUIWindowContextPartner@45@@Z @ 0x18008D230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandEnvironment::Api::put_WindowContext(
        RTL_SRWLOCK *this,
        struct Windows::UI::IWindowContextPartner *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct Windows::UI::IWindowContextPartner *Ptr; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 2;
  AcquireSRWLockExclusive(this + 2);
  LODWORD(v2[1].Ptr) = GetCurrentThreadId();
  if ( this[7].Ptr != a2 )
  {
    Ptr = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&Ptr);
    Ptr = (struct Windows::UI::IWindowContextPartner *)this[7].Ptr;
    this[7].Ptr = a2;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&Ptr);
  }
  if ( v2 )
  {
    LODWORD(v2[1].Ptr) = 0;
    ReleaseSRWLockExclusive(v2);
  }
  return 0LL;
}
