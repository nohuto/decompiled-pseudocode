/*
 * XREFs of std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1800AD6DC
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1800AD6DC (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 *     ?SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800ADA48 (-SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1800AD6DC (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 *     std::_Make_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1803E1E54 (std--_Make_heap_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d7.c)
 *     std::_Partition_by_median_guess_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1803E1F80 (std--_Partition_by_median_guess_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404.c)
 *     std::_Sort_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1803E2310 (std--_Sort_heap_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d7.c)
 */

void __fastcall std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
        __int64 *a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  signed __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rsi
  __int64 *v8; // rdi
  __int64 *i; // rbx
  __int64 v10; // r15
  std::_Ref_count_base *v11; // r14
  __int64 v12; // r9
  __int64 v13; // r8
  char *v14; // r15
  __int64 *v15; // r8
  std::_Ref_count_base *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 *k; // rbp
  __int64 *v20; // rcx
  __int64 *j; // r14
  char *v22; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v23; // [rsp+28h] [rbp-20h]

  v4 = a4;
  v5 = a2 - (char *)a1;
  v6 = a3;
  v7 = (__int64 *)a2;
  v8 = a1;
  while ( (__int64)(v5 & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
  {
    if ( v6 <= 0 )
    {
      LOBYTE(a3) = v4;
      std::_Make_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(v8, v7, a3);
      LOBYTE(v13) = v4;
      std::_Sort_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(v8, v7, v13);
      return;
    }
    LOBYTE(a4) = v4;
    std::_Partition_by_median_guess_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
      &v22,
      v8,
      v7,
      a4);
    v10 = (__int64)v22;
    v11 = v23;
    v6 = (v6 >> 2) + (v6 >> 1);
    LOBYTE(v12) = v4;
    if ( (__int64)((v22 - (char *)v8) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)(((char *)v7 - (char *)v23) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(v23, v7, v6, v12);
      v7 = (__int64 *)v10;
    }
    else
    {
      std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(v8, v22, v6, v12);
      v8 = (__int64 *)v11;
    }
    v5 = (char *)v7 - (char *)v8;
  }
  if ( v8 != v7 )
  {
    for ( i = v8 + 2; i != v7; i += 2 )
    {
      v14 = (char *)*i;
      v15 = i;
      v16 = (std::_Ref_count_base *)i[1];
      *i = 0LL;
      i[1] = 0LL;
      v17 = (_QWORD *)*v8;
      v23 = v16;
      v18 = *(_QWORD *)v14;
      v22 = v14;
      if ( *v17 >= v18 )
      {
        for ( j = i; ; v15 = j )
        {
          j -= 2;
          if ( *(_QWORD *)*j >= *(_QWORD *)v14 )
            break;
          std::shared_ptr<KBViewInfo>::operator=(v15, j);
        }
      }
      else
      {
        for ( k = i; k != v8; std::shared_ptr<KBViewInfo>::operator=(v20, k) )
        {
          v20 = k;
          k -= 2;
        }
        v15 = v8;
      }
      std::shared_ptr<KBViewInfo>::operator=(v15, (__int64 *)&v22);
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
    }
  }
}
