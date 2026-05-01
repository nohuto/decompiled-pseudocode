/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@QEAV10@0P6A_NAEAV10@1@Z@Z @ 0x18014F42C
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x18014F3CC (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18014F520 (--4-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Insertion_sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 *a1,
        __int64 *a2,
        __int64 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 *i; // rbx
  __int64 *v7; // rsi
  char v8; // al
  __int64 *v9; // rcx
  __int64 *v10; // r14
  __int64 *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-20h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v10 = i;
      v13 = *i;
      v14 = (std::_Ref_count_base *)i[1];
      *i = 0LL;
      i[1] = 0LL;
      v7 = i;
      if ( (unsigned __int8)a3(&v13, a1) )
      {
        if ( i != a1 )
        {
          do
          {
            v11 = v7;
            v7 -= 2;
            std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=(v11, v7);
          }
          while ( v7 != a1 );
        }
        v9 = a1;
      }
      else
      {
        while ( 1 )
        {
          v7 -= 2;
          v8 = a3(&v13, v7);
          v9 = v10;
          if ( !v8 )
            break;
          std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=(v10, v7);
          v10 = v7;
        }
      }
      std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=(v9, &v13);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
  }
  return a2;
}
