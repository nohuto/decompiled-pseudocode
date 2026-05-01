/*
 * XREFs of sub_18034A584 @ 0x18034A584
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x180540B14 (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 */

void sub_18034A584(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        RTL_SRWLOCK *a6,
        int a7,
        VirtualDesktopDataSource *a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        ...)
{
  va_list va; // [rsp+98h] [rbp+98h] BYREF

  va_start(va, a18);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)va);
  if ( a9 )
    VirtualDesktopDataSource::UninitializeInternal(a8);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&a6);
  JUMPOUT(0x18013938BLL);
}
