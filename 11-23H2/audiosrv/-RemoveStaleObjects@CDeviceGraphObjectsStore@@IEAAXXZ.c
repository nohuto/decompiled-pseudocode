/*
 * XREFs of ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180012540
 * Callers:
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180049DA0 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     _lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator() @ 0x1800124FC (_lambda_92c40f897d3a9c7e927f302002ea2ff3_--operator().c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18001262C (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDeviceGraphObjectsStore::RemoveStaleObjects(CDeviceGraphObjectsStore *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r15
  __int64 v3; // rcx
  __int64 *v4; // rsi
  __int64 *i; // rbx
  __int64 *j; // rdi
  __int64 v7; // rcx
  unsigned int v8; // ebp
  char *v9; // r14
  __int64 *v10; // rsi
  __int64 *k; // rbx
  __int64 *m; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  char v19; // [rsp+58h] [rbp+10h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v4 = (__int64 *)*((_QWORD *)this + 9);
  for ( i = (__int64 *)*((_QWORD *)this + 8);
        i != v4 && !lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v3, (__int64)i);
        ++i )
  {
    ;
  }
  if ( i != v4 )
  {
    for ( j = i + 1; j != v4; ++j )
    {
      if ( !lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v3, (__int64)j) )
      {
        v13 = 0LL;
        if ( &v18 != j )
        {
          v13 = *j;
          *j = 0LL;
        }
        v14 = *i;
        *i = v13;
        v18 = v14;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v18);
        ++i;
      }
    }
  }
  std::vector<Microsoft::WRL::WeakRef>::erase((char *)this + 64, &v18, i, *((_QWORD *)this + 9));
  v8 = 0;
  v9 = (char *)this + 88;
  do
  {
    v10 = (__int64 *)*((_QWORD *)v9 + 1);
    for ( k = *(__int64 **)v9; k != v10 && !lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v7, (__int64)k); ++k )
      ;
    if ( k != v10 )
    {
      for ( m = k + 1; m != v10; ++m )
      {
        if ( !lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v7, (__int64)m) )
        {
          v16 = 0LL;
          if ( &v18 != m )
          {
            v16 = *m;
            *m = 0LL;
          }
          v17 = *k;
          *k = v16;
          v18 = v17;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v18);
          ++k;
        }
      }
    }
    std::vector<Microsoft::WRL::WeakRef>::erase(v9, &v19, k, *((_QWORD *)v9 + 1));
    ++v8;
    v9 += 24;
  }
  while ( v8 < 4 );
  if ( v1 )
    LeaveCriticalSection(v1);
}
