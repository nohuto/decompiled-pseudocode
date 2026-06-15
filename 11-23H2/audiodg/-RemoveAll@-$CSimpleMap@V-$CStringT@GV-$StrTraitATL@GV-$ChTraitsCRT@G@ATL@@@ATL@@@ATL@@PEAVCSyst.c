/*
 * XREFs of ?RemoveAll@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAXXZ @ 0x140027588
 * Callers:
 *     _dynamic_atexit_destructor_for__SadMap__ @ 0x140036D60 (_dynamic_atexit_destructor_for__SadMap__.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14003806A (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

void __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAll(
        __int64 a1)
{
  _DWORD *v1; // rdi
  int i; // esi
  void *v4; // rcx

  v1 = (_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0; i < *v1; ++i )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'(*(_QWORD *)a1 + 8LL * i);
    free(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    free(v4);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *v1 = 0;
}
