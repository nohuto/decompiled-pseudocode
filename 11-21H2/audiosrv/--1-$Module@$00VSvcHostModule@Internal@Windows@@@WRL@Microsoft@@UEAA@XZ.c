/*
 * XREFs of ??1?$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1800C2614
 * Callers:
 *     ??1?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800C26A0 (--1-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ.c)
 *     ??_G?$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800C2D10 (--_G-$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1800C55BC (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 */

bool __fastcall Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::~Module<1,Windows::Internal::SvcHostModule>(
        Microsoft::WRL::Details *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  bool result; // al

  LOBYTE(a3) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::`vftable';
  result = Microsoft::WRL::Details::TerminateMap(a1, 0LL, a3, a4);
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::isInitialized = 0;
  return result;
}
