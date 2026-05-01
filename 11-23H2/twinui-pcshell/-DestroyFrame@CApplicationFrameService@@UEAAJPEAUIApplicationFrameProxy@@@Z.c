/*
 * XREFs of ?DestroyFrame@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18001E560
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18001E79C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180037420 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::DestroyFrame(
        CApplicationFrameService *this,
        struct IApplicationFrameProxy *a2)
{
  __int64 v4; // rbx
  unsigned __int64 i; // rdi
  int v6; // esi
  _QWORD *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rax
  __int64 v14; // [rsp+60h] [rbp+40h] BYREF
  __int64 v15; // [rsp+68h] [rbp+48h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0LL;
  v14 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    v6 = -2147023728;
    if ( i >= *((_QWORD *)this + 13) )
      break;
    v7 = (_QWORD *)((char *)this + 96);
    v8 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * i);
    if ( (*(unsigned __int8 (__fastcall **)(struct IApplicationFrameProxy *, __int64))(*(_QWORD *)a2 + 232LL))(
           a2,
           (v8 + 8) & -(__int64)(v8 != 0)) )
    {
      v6 = 0;
      v9 = *(_QWORD *)(*v7 + 8 * i);
      if ( v9 )
      {
        v15 = *(_QWORD *)(*v7 + 8 * i);
        v10 = *(_QWORD *)(v9 + 64);
        while ( v10 >= 0 )
        {
          if ( (_DWORD)v10 != 0x7FFFFFFF )
          {
            v11 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 64), v10 + 1, v10);
            if ( v11 != v10 )
              continue;
          }
          goto LABEL_9;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (Microsoft::WRL::Details *)(2 * v10 + 16),
          (volatile int *)v9);
LABEL_9:
        v12 = v15;
        v15 = v14;
        v4 = v12;
        v14 = v12;
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v15);
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
        (char *)this + 96,
        i);
      break;
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v4 + 112));
    v15 = *(_QWORD *)(v4 + 112);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 32LL))(*((_QWORD *)this + 17));
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v14);
  return (unsigned int)v6;
}
