/*
 * XREFs of ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180144170
 * Callers:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18004364C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180070C08 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x1800C05F0 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x1800C07F0 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18012C0B0 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 *     ?DestroyFrame@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18015E2B0 (-DestroyFrame@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18017FD40 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x180181910 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x1802FF100 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_1802FF100.c)
 *     ??1?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1802FF654 (--1-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800EEF40 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(
        volatile signed __int64 **a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  volatile signed __int64 *v3; // r11
  signed __int64 v4; // rax
  unsigned int v5; // edi
  signed __int64 v6; // rtt

  v2 = 0;
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    v4 = *((_QWORD *)v3 + 8);
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 == 0x7FFFFFFF )
        return 2147483646;
      v5 = v4 - 1;
      v6 = v4;
      v4 = _InterlockedCompareExchange64(v3 + 8, v4 - 1, v4);
      if ( v6 == v4 )
        goto LABEL_6;
    }
    v5 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v4 + 16), a2);
LABEL_6:
    if ( !v5 )
    {
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v3 + 48))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    return v5;
  }
  return v2;
}
