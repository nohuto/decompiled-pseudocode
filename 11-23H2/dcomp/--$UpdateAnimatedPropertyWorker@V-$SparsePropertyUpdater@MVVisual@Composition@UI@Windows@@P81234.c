/*
 * XREFs of ??$UpdateAnimatedPropertyWorker@V?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x180072534
 * Callers:
 *     ?put_Opacity@Api@Visual@Composition@UI@Windows@@UEAAJM@Z @ 0x1800523F0 (-put_Opacity@Api@Visual@Composition@UI@Windows@@UEAAJM@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006D4D4 (--$SetAnimatablePropertyWorker@V-$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@.c)
 *     ?OnAnimatedPropertyChanged@Visual@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180072060 (-OnAnimatedPropertyChanged@Visual@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 * Callees:
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?UpdateApiValueWithMask@?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@QEBAXG@Z @ 0x180072628 (-UpdateApiValueWithMask@-$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<float,Windows::UI::Composition::Visual,float (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(float)>,Windows::UI::Composition::PropertyUpdateInfo>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        char a5,
        unsigned __int16 a6)
{
  __int64 v9; // rax
  int *v10; // r9
  int v11; // edi
  char v12; // cl
  int v13; // esi
  int v14; // xmm6_4
  DirectComposition::CDevice *v15; // rbx
  _DWORD *v16; // rax
  void (__fastcall ***v17)(_QWORD); // rcx
  int v18; // edx
  bool v19; // zf
  DirectComposition::CDevice *v20; // rcx
  void *v21; // [rsp+30h] [rbp-28h] BYREF

  if ( a5 )
  {
    v9 = *a3;
    v10 = *(int **)(a2 + 40);
    if ( *(_BYTE *)(*a3 + 21) )
      v11 = *(_DWORD *)(v9 + 12);
    else
      v11 = *(_DWORD *)(v9 + 8);
    v12 = *(_BYTE *)(v9 + 20);
    if ( v12 )
    {
      v18 = *(_DWORD *)(a1 + 128);
      v19 = v12 == 1;
      v20 = *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL);
      if ( v19 )
        DirectComposition::CDevice::ResourceSetBufferProperty(v20, v18, v11, v10, 4uLL);
      else
        DirectComposition::CDevice::ResourceSetIntegerProperty(v20, v18, v11, *v10);
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 128);
      v14 = *v10;
      if ( v13 )
      {
        v15 = *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL);
        DirectComposition::CDevice::BeginKernelCommand(v15, 0x10u, &v21, 0);
        v16 = v21;
        *(_DWORD *)v21 = 9;
        v16[1] = v13;
        v16[2] = v11;
        v16[3] = v14;
        v17 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v15 + 10);
        if ( v17 )
          (**v17)(v17);
      }
    }
  }
  if ( a4 )
    Windows::UI::Composition::SparsePropertyUpdater<float,Windows::UI::Composition::Visual,float (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(float)>::UpdateApiValueWithMask(
      a2,
      a6);
}
