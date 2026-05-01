/*
 * XREFs of ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x180008D90
 * Callers:
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ @ 0x180016410 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ @ 0x180016430 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::Release(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
