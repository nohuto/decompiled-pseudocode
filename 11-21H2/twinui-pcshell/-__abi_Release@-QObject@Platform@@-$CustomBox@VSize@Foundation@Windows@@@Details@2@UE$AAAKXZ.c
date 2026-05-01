/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@UE$AAAKXZ @ 0x18043C890
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@W7E$AAAKXZ @ 0x180201AA0 (-__abi_Release@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@WBA@E$AAAKXZ @ 0x180201AC0 (-__abi_Release@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@WBI@E$AAAKXZ @ 0x180201AE0 (-__abi_Release@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@WCA@E$AAAKXZ @ 0x180201B00 (-__abi_Release@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@WCI@E$AAAKXZ @ 0x180201B20 (-__abi_Release@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@WCI@E$AAAKXZ.c)
 * Callees:
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1800100A0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180146CC0 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____CustomBox_VSize_Foundation_Windows___Details_2_UE_AAAKXZ(
        __int64 a1)
{
  Platform::Details::ControlBlock **v1; // rbx
  unsigned int v2; // edi
  Platform::Details::ControlBlock *v3; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 56);
  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 56));
  if ( !v2 )
  {
    v3 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(v3);
    Platform::Details::ControlBlock::__abi_Release(v3);
  }
  return v2;
}
