/*
 * XREFs of ?ChangeValues_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@QEAAXUfloat3@Numerics@Foundation@4@MM@Z @ 0x180088E74
 * Callers:
 *     ?ChangeValues@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@MM@Z @ 0x180088E40 (-ChangeValues@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJUVector3@Numerics@Fo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?BeginCallback_Read@CompositionIslandEnvironment@Composition@UI@Windows@@AEAAXPEAV?$vector@PEAVCompositionIsland@Composition@UI@Windows@@V?$allocator@PEAVCompositionIsland@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180088F4C (-BeginCallback_Read@CompositionIslandEnvironment@Composition@UI@Windows@@AEAAXPEAV-$vector@PEAVC.c)
 *     Windows::UI::Composition::CompositionIslandEnvironment::NotifyIslands_NoLock__lambda_351d718ce7c9cc2194c2d1b1baf93fda___ @ 0x180113D98 (Windows--UI--Composition--CompositionIslandEnvironment--NotifyIslands_NoLock__lambda_351d718ce7c.c)
 *     ?EndCallback_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@AEAAXPEAV?$vector@PEAVCompositionIsland@Composition@UI@Windows@@V?$allocator@PEAVCompositionIsland@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180113F6C (-EndCallback_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@AEAAXPEAV-$vector@PEAVC.c)
 */

void __fastcall Windows::UI::Composition::CompositionIslandEnvironment::ChangeValues_NoLock(
        __int64 a1,
        __int64 *a2,
        float a3,
        float a4)
{
  DWORD CurrentThreadId; // eax
  __int64 v7; // xmm0_8
  int v8; // eax
  void *v9; // rcx
  __int64 v10; // rcx
  __int128 v11; // [rsp+28h] [rbp-29h]
  __int128 v12; // [rsp+48h] [rbp-9h] BYREF
  float v13; // [rsp+58h] [rbp+7h]
  __int128 v14; // [rsp+68h] [rbp+17h] BYREF
  __int64 v15; // [rsp+78h] [rbp+27h]

  v15 = 0LL;
  v14 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  CurrentThreadId = GetCurrentThreadId();
  v7 = *a2;
  *(_DWORD *)(a1 + 56) = CurrentThreadId;
  v8 = *((_DWORD *)a2 + 2);
  *(_QWORD *)(a1 + 64) = v7;
  *(_DWORD *)(a1 + 72) = v8;
  *(float *)(a1 + 76) = a3;
  *(float *)(a1 + 80) = a4;
  Windows::UI::Composition::CompositionIslandEnvironment::BeginCallback_Read(a1, &v14);
  *(_DWORD *)(a1 + 56) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 48));
  v9 = (void *)v14;
  if ( (_QWORD)v14 != *((_QWORD *)&v14 + 1) )
  {
    DWORD2(v11) = *((_DWORD *)a2 + 2);
    *(_QWORD *)&v11 = *a2;
    *((float *)&v11 + 3) = a3;
    v12 = v11;
    v13 = a4;
    Windows::UI::Composition::CompositionIslandEnvironment::NotifyIslands_NoLock__lambda_351d718ce7c9cc2194c2d1b1baf93fda___(
      v14,
      &v14,
      &v12);
    Windows::UI::Composition::CompositionIslandEnvironment::EndCallback_NoLock(v10, &v14);
    v9 = (void *)v14;
  }
  if ( v9 )
    std::_Deallocate<16,0>(v9, (v15 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL);
}
