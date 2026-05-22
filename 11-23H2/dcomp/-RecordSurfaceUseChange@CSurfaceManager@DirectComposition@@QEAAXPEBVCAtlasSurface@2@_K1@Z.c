/*
 * XREFs of ?RecordSurfaceUseChange@CSurfaceManager@DirectComposition@@QEAAXPEBVCAtlasSurface@2@_K1@Z @ 0x180034354
 * Callers:
 *     ?OnBeforeSynchronizationStateUpdated@CAtlasSurface@DirectComposition@@EEAAXW4State@CCompositorSynchronizedObject@2@@Z @ 0x180035840 (-OnBeforeSynchronizationStateUpdated@CAtlasSurface@DirectComposition@@EEAAXW4State@CCompositorSy.c)
 *     ?SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ @ 0x180038200 (-SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 */

void __fastcall DirectComposition::CSurfaceManager::RecordSurfaceUseChange(
        DirectComposition::CSurfaceManager *this,
        const struct DirectComposition::CAtlasSurface *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  char v8; // r10
  const struct DirectComposition::CSurfaceManager::AllocationStats *v9; // r14
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 16)
                                                                                             + 24LL)
                                                                                 + 96LL));
  v8 = *(_BYTE *)(*((_QWORD *)a2 + 8) + 172LL) & 1;
  v9 = (DirectComposition::CSurfaceManager *)((char *)this + (v8 != 0 ? 0x28 : 0) + 208);
  *((_QWORD *)v9 + 3) += a3 - a4;
  if ( a3 > a4 )
  {
    if ( !a4 )
    {
      v12 = *((_QWORD *)a2 + 8);
      if ( !*(_QWORD *)(v12 + 184) )
      {
        v13 = v8 != 0 ? 0x28 : 0;
        *(_QWORD *)((char *)this + v13 + 224) += (unsigned int)(*(_DWORD *)(v12 + 152) * *(_DWORD *)(v12 + 156));
      }
    }
  }
  else if ( !a3 )
  {
    v10 = *((_QWORD *)a2 + 8);
    if ( *(_QWORD *)(v10 + 184) == a4 )
    {
      v11 = v8 != 0 ? 0x28 : 0;
      *(_QWORD *)((char *)this + v11 + 224) -= (unsigned int)(*(_DWORD *)(v10 + 152) * *(_DWORD *)(v10 + 156));
    }
  }
  DirectComposition::CSurfaceManager::AllocationStats::SetToPeak(
    (DirectComposition::CSurfaceManager *)((char *)this + (v8 != 0 ? 336LL : 296LL)),
    v9);
}
