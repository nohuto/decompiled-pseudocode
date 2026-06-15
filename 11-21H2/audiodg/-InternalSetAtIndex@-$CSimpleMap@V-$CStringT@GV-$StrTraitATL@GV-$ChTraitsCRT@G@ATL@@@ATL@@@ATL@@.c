/*
 * XREFs of ?InternalSetAtIndex@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAXHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140003FBC
 * Callers:
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140003F18 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudi.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1400308BE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     memcpy_0 @ 0x140031D3F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x140054AA8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::InternalSetAtIndex(
        __int64 a1,
        int a2,
        const void **a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  _QWORD *v6; // rdi
  const void *v7; // rsi
  _QWORD *v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, __int64); // rax
  __int64 result; // rax
  __int64 *v11; // rcx
  _DWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rcx
  size_t v17; // r8

  v5 = a2;
  v6 = (_QWORD *)(SadMap + 8LL * a2);
  if ( !v6 )
    goto LABEL_6;
  v7 = *a3;
  v8 = (char *)*a3 - 24;
  v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 32LL))(*v8);
  if ( *((int *)v8 + 4) < 0 || v9 != (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))*v8 )
  {
    v12 = v8 + 1;
    v13 = (**v9)(v9, *((unsigned int *)v8 + 2), 2LL);
    v8 = (_QWORD *)v13;
    if ( !v13 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v15);
    *(_DWORD *)(v13 + 8) = *v12;
    v16 = (void *)(v13 + 24);
    v17 = 2LL * (*v12 + 1);
    if ( !v17 )
      goto LABEL_5;
    if ( v13 != -24 )
    {
      if ( v7 )
      {
        memcpy_0(v16, v7, v17);
        goto LABEL_5;
      }
      memset_0(v16, 0, v17);
    }
    *(_DWORD *)_o__errno(v16, v14, v17) = 22;
    invalid_parameter_noinfo();
    goto LABEL_5;
  }
  _InterlockedIncrement((volatile signed __int32 *)v8 + 4);
LABEL_5:
  *v6 = v8 + 3;
LABEL_6:
  result = qword_1400C1630;
  v11 = (__int64 *)(qword_1400C1630 + 8 * v5);
  if ( v11 )
  {
    result = *a4;
    *v11 = *a4;
  }
  return result;
}
