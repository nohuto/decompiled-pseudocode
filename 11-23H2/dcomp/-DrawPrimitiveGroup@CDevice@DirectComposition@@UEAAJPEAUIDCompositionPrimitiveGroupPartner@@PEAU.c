/*
 * XREFs of ?DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAUID2D1DeviceContext@@AEBUD2D_MATRIX_4X4_F@@MW4DCOMPOSITION_COMPOSITE_MODE@@@Z @ 0x1800F1830
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8 (-CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CommitSurfaceUpdates@CPrimitiveGroup@DirectComposition@@QEAAJXZ @ 0x1800F9AD8 (-CommitSurfaceUpdates@CPrimitiveGroup@DirectComposition@@QEAAJXZ.c)
 *     ?GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800FA130 (-GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1P.c)
 *     ?RebuildAndRemoveFromDirtyList@CPrimitiveGroup@DirectComposition@@IEAAJXZ @ 0x1800FA8E8 (-RebuildAndRemoveFromDirtyList@CPrimitiveGroup@DirectComposition@@IEAAJXZ.c)
 *     ?RemoveGuardRects@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x1800FA944 (-RemoveGuardRects@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     ?RestoreGuardRects@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x1800FA9B0 (-RestoreGuardRects@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::DrawPrimitiveGroup(
        __int64 a1,
        DirectComposition::CPrimitiveGroup *a2,
        struct ID2D1DeviceContext *a3,
        __int64 a4,
        float a5,
        unsigned int a6)
{
  __int64 v10; // rcx
  struct ID2D1PrivateCompositorCommandList *v11; // rsi
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // r15d
  int D2DCommandList; // eax
  __int64 v17; // r8
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF
  struct ID2D1PrivateCompositorCommandList *v20; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v21; // [rsp+A0h] [rbp+18h] BYREF

  v21 = (_QWORD *)(a1 + 72);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(a1 + 72));
  v10 = 0LL;
  v11 = 0LL;
  v19 = 0LL;
  v12 = 0;
  v20 = 0LL;
  v13 = 2147942487LL;
  if ( !a3 || a5 < 0.0 || a5 > 1.0 )
    v12 = -2147024809;
  v14 = a6;
  if ( a6 )
  {
    v14 = a6 - 1;
    if ( a6 == 1 )
    {
      v15 = 1;
    }
    else
    {
      if ( a6 != 2 )
      {
LABEL_8:
        v12 = -2147024809;
        goto LABEL_25;
      }
      v15 = 8;
    }
  }
  else
  {
    v15 = 0;
  }
  if ( v12 >= 0 )
  {
    if ( a2 && a1 - 24 != *((_QWORD *)a2 + 6) )
      goto LABEL_8;
    v12 = DirectComposition::CDevice::CheckClientDrawNotInProgress((DirectComposition::CDevice *)(a1 - 24));
    if ( v12 >= 0 )
    {
      if ( a2 )
      {
        v12 = (**(__int64 (__fastcall ***)(struct ID2D1DeviceContext *, GUID *, __int64 *))a3)(
                a3,
                &GUID_2ea67ed7_d42e_4c07_9dd5_a91ea23e01d2,
                &v19);
        if ( v12 >= 0 )
        {
          v12 = DirectComposition::CPrimitiveGroup::CommitSurfaceUpdates(a2);
          if ( v12 >= 0 )
          {
            v12 = DirectComposition::CPrimitiveGroup::RebuildAndRemoveFromDirtyList(a2);
            if ( v12 >= 0 )
            {
              DirectComposition::CPrimitiveGroup::RemoveGuardRects(a2);
              D2DCommandList = DirectComposition::CPrimitiveGroup::GetD2DCommandList(a2, a3, &v20);
              v11 = v20;
              v12 = D2DCommandList;
              if ( D2DCommandList >= 0 && v20 )
              {
                (*(void (__fastcall **)(__int64, struct ID2D1PrivateCompositorCommandList *, __int64, __int64, int, _DWORD))(*(_QWORD *)v19 + 32LL))(
                  v19,
                  v20,
                  v17,
                  a4,
                  v15,
                  0);
                v12 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, _QWORD, _QWORD))(*(_QWORD *)a3 + 336LL))(
                        a3,
                        0LL,
                        0LL);
              }
              DirectComposition::CPrimitiveGroup::RestoreGuardRects(a2);
            }
          }
        }
      }
    }
    v10 = v19;
  }
LABEL_25:
  if ( v11 )
  {
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *, __int64, __int64))(*(_QWORD *)v11 + 16LL))(
      v11,
      v14,
      v13);
    v10 = v19;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v14, v13);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v21);
  return (unsigned int)v12;
}
