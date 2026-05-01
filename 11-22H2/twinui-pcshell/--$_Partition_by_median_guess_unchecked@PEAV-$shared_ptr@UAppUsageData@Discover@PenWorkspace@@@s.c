/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YA?AU?$pair@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAV12@@0@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0P6A_NAEAV20@1@Z@Z @ 0x18048FAD0
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x1801889D8 (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 *     ??$_Guess_median_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@00P6A_NAEAV10@1@Z@Z @ 0x18048F880 (--$_Guess_median_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV.c)
 */

_QWORD *__fastcall std::_Partition_by_median_guess_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned __int8 (__fastcall *a4)(_QWORD *, _QWORD *))
{
  _QWORD *v6; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rsi
  _QWORD *v11; // rsi
  _QWORD *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  bool v16; // zf
  _QWORD *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *result; // rax

  v6 = (_QWORD *)(a2 + 16 * ((__int64)((__int64)a3 - a2) >> 5));
  std::_Guess_median_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
    a2,
    (__int64)v6,
    (__int64)(a3 - 2));
  v8 = v6 + 2;
  if ( a2 < (unsigned __int64)v6 )
  {
    v9 = v6;
    do
    {
      v10 = v6 - 2;
      if ( a4(v9 - 2, v6) )
        break;
      if ( a4(v6, v6 - 2) )
        break;
      v6 -= 2;
      v9 = v10;
    }
    while ( a2 < (unsigned __int64)v10 );
  }
  while ( v8 < a3 && !a4(v8, v6) && !a4(v6, v8) )
    v8 += 2;
  v11 = v8;
  v12 = v6;
  while ( 1 )
  {
    while ( v11 < a3 )
    {
      if ( a4(v6, v11) )
        goto LABEL_17;
      if ( a4(v11, v6) )
        break;
      if ( v8 != v11 )
      {
        v13 = *v8;
        *v8 = *v11;
        v14 = v11[1];
        *v11 = v13;
        v15 = v8[1];
        v8[1] = v14;
        v11[1] = v15;
      }
      v8 += 2;
LABEL_17:
      v11 += 2;
    }
    v16 = v12 == (_QWORD *)a2;
    if ( (unsigned __int64)v12 > a2 )
    {
      v17 = v12 - 2;
      do
      {
        if ( !a4(v17, v6) )
        {
          if ( a4(v6, v17) )
            break;
          v6 -= 2;
          if ( v6 != v17 )
          {
            v18 = *v6;
            *v6 = *v17;
            v19 = v17[1];
            *v17 = v18;
            v20 = v6[1];
            v6[1] = v19;
            v17[1] = v20;
          }
        }
        v12 -= 2;
        v17 -= 2;
      }
      while ( a2 < (unsigned __int64)v12 );
      v16 = v12 == (_QWORD *)a2;
    }
    if ( v16 )
      break;
    v12 -= 2;
    if ( v11 != a3 )
    {
      v34 = *v11;
      *v11 = *v12;
      v35 = v12[1];
      *v12 = v34;
      v36 = v11[1];
      v11[1] = v35;
      v12[1] = v36;
      goto LABEL_17;
    }
    v6 -= 2;
    v27 = v6 + 1;
    if ( v12 != v6 )
    {
      v28 = *v12;
      *v12 = *v6;
      v29 = *v27;
      *v6 = v28;
      v30 = v12[1];
      v12[1] = v29;
      *v27 = v30;
    }
    v31 = *v6;
    v8 -= 2;
    *v6 = *v8;
    v32 = v8[1];
    *v8 = v31;
    v33 = *v27;
    *v27 = v32;
    v8[1] = v33;
  }
  if ( v11 != a3 )
  {
    if ( v8 != v11 )
    {
      v21 = *v6;
      *v6 = *v8;
      v22 = v8[1];
      *v8 = v21;
      v23 = v6[1];
      v6[1] = v22;
      v8[1] = v23;
    }
    v24 = *v6;
    v8 += 2;
    *v6 = *v11;
    v25 = v11[1];
    *v11 = v24;
    v26 = v6[1];
    v6[1] = v25;
    v6 += 2;
    v11[1] = v26;
    goto LABEL_17;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v8;
  return result;
}
