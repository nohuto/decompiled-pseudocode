/*
 * XREFs of sub_1802C636D @ 0x1802C636D
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x18048BCCC (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 */

void sub_1802C636D(
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
        int a19,
        int a20,
        ...)
{
  va_list va; // [rsp+A8h] [rbp+A8h] BYREF

  va_start(va, a20);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)va);
  if ( a9 )
    VirtualDesktopDataSource::UninitializeInternal(a8);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&a6);
  JUMPOUT(0x18014BB41LL);
}
