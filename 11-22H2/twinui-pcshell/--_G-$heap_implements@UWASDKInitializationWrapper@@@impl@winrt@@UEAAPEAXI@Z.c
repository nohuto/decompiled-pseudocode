/*
 * XREFs of ??_G?$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801F9DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 *     ??1WASDKInitializationWrapper@@UEAA@XZ @ 0x1801F9D98 (--1WASDKInitializationWrapper@@UEAA@XZ.c)
 */

WASDKInitializationWrapper *__fastcall winrt::impl::heap_implements<WASDKInitializationWrapper>::`scalar deleting destructor'(
        WASDKInitializationWrapper *Block,
        char a2)
{
  WASDKInitializationWrapper::~WASDKInitializationWrapper(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
