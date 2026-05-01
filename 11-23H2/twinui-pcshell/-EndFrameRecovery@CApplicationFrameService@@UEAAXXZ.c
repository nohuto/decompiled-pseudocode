/*
 * XREFs of ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x1801BF2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18001E79C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180037420 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x180049364 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1801BD278 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CCoSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAA@$$QEAV0@@Z @ 0x1803BB068 (--0-$CCoSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CSimpleAr.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationFrameService::EndFrameRecovery(CApplicationFrameService *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  _QWORD v6[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+50h] [rbp+10h] BYREF
  __int64 v8; // [rsp+58h] [rbp+18h] BYREF

  if ( *((_BYTE *)this + 184) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    CCoSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::CCoSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>(
      v6,
      (char *)this + 64);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
    if ( (int)CApplicationFrameService::_EnsureFrameManager((__int64)this - 40, 1, &v7) >= 0 )
    {
      v2 = v6[1];
      while ( v2 )
      {
        v3 = *(_QWORD *)(v6[0] + 8 * v2 - 8);
        v8 = v3;
        if ( v3 )
        {
          v4 = *(_QWORD *)(v3 + 64);
          while ( v4 >= 0 )
          {
            if ( (_DWORD)v4 != 0x7FFFFFFF )
            {
              v5 = v4;
              v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 64), v4 + 1, v4);
              if ( v5 != v4 )
                continue;
            }
            goto LABEL_11;
          }
          Microsoft::WRL::Details::SafeUnknownIncrementReference(
            (Microsoft::WRL::Details *)(2 * v4 + 16),
            (volatile int *)v3);
        }
LABEL_11:
        CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
          v6,
          --v2);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, *(_QWORD *)(v8 + 112));
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v8);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
    CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAll((__int64)v6);
  }
}
