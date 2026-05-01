/*
 * XREFs of ??$_Med3_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@00P6A_NAEAV10@1@Z@Z @ 0x18048FA00
 * Callers:
 *     ??$_Guess_median_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@00P6A_NAEAV10@1@Z@Z @ 0x18048F880 (--$_Guess_median_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Med3_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int8 (__fastcall *a4)(__int64 *, __int64 *))
{
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v5 = a2 + 1;
  v6 = a1 + 1;
  if ( a4(a2, a1) )
  {
    v10 = *a2;
    *a2 = *a1;
    v11 = *v6;
    *a1 = v10;
    v12 = *v5;
    *v5 = v11;
    *v6 = v12;
  }
  result = ((__int64 (__fastcall *)(__int64 *, __int64 *))a4)(a3, a2);
  if ( (_BYTE)result )
  {
    v14 = *a3;
    *a3 = *a2;
    v15 = *v5;
    *a2 = v14;
    v16 = a3[1];
    a3[1] = v15;
    *v5 = v16;
    result = ((__int64 (__fastcall *)(__int64 *, __int64 *))a4)(a2, a1);
    if ( (_BYTE)result )
    {
      v17 = *a2;
      *a2 = *a1;
      result = *v6;
      *a1 = v17;
      v18 = *v5;
      *v5 = result;
      *v6 = v18;
    }
  }
  return result;
}
