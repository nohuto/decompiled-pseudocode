/*
 * XREFs of ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x180011C08
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18000BF30 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180107160 (-EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV-$vector@V-$ComPtr@UIProcessSubmixProx.c)
 * Callees:
 *     _lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator() @ 0x1800124FC (_lambda_92c40f897d3a9c7e927f302002ea2ff3_--operator().c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18001262C (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CBaseStreamGroupProxy::PruneStaleProcessSubmixes(CBaseStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  __int64 v3; // rcx
  __int64 *v4; // rsi
  __int64 *i; // rbx
  __int64 *j; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v4 = (__int64 *)*((_QWORD *)this + 28);
  for ( i = (__int64 *)*((_QWORD *)this + 27);
        i != v4 && !(unsigned __int8)lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v3, i);
        ++i )
  {
    ;
  }
  if ( i != v4 )
  {
    for ( j = i + 1; j != v4; ++j )
    {
      if ( !(unsigned __int8)lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v3, j) )
      {
        v7 = 0LL;
        if ( &v9 != j )
        {
          v7 = *j;
          *j = 0LL;
        }
        v8 = *i;
        *i = v7;
        v9 = v8;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v9);
        ++i;
      }
    }
  }
  std::vector<Microsoft::WRL::WeakRef>::erase((char *)this + 216, &v9, i, *((_QWORD *)this + 28));
  if ( v1 )
    LeaveCriticalSection(v1);
}
