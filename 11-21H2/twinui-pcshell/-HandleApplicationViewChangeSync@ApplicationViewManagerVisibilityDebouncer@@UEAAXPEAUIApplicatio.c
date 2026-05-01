/*
 * XREFs of ?HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800EAA20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x1800EAB10 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18012789C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync(
        RTL_SRWLOCK *a1,
        struct IApplicationView *a2,
        int a3)
{
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v6; // rdi
  int v7; // eax
  char *Ptr; // rdx
  __int64 *v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v11; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v5 = a1 + 23;
      AcquireSRWLockExclusive(a1 + 23);
      v6 = a1 + 24;
      v11 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
      v7 = 0;
      Ptr = (char *)v6[1].Ptr;
      if ( Ptr != v6[3].Ptr
        || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                   v6,
                   Ptr + 1),
            v7 >= 0) )
      {
        v9 = (__int64 *)((char *)v6->Ptr + 8 * (__int64)v6[1].Ptr++);
        if ( v9 )
        {
          *v9 = 0LL;
          if ( v9 != (__int64 *)&v11 )
          {
            *v9 = (__int64)a2;
            v11 = 0LL;
          }
        }
      }
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x102,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
          (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
    }
  }
  else
  {
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView((ApplicationViewManagerVisibilityDebouncer *)a1, a2);
  }
}
