/*
 * XREFs of ??$_To_xtime_10_day_clamped@_JU?$ratio@$00$00@std@@@std@@YA_NAEAUxtime@@AEBV?$duration@_JU?$ratio@$00$00@std@@@chrono@0@@Z @ 0x18002F7E0
 * Callers:
 *     ??$wait_for@_JU?$ratio@$00$00@std@@@condition_variable@std@@QEAA?AW4cv_status@1@AEAV?$unique_lock@Vmutex@std@@@1@AEBV?$duration@_JU?$ratio@$00$00@std@@@chrono@1@@Z @ 0x18003094C (--$wait_for@_JU-$ratio@$00$00@std@@@condition_variable@std@@QEAA-AW4cv_status@1@AEAV-$unique_loc.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_To_xtime_10_day_clamped<__int64,std::ratio<1,1>>(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  char v6; // r9
  int v7; // r8d
  __int128 v8; // rax
  char result; // al

  v4 = 100 * _Xtime_get_ticks();
  if ( (double)(int)*a2 <= 864000.0 )
  {
    v6 = 0;
    v5 = 1000000000LL * *a2;
    v7 = v5 + v4;
  }
  else
  {
    v5 = 864000000000000LL;
    v6 = 1;
    v7 = v4 - 1391067136;
  }
  v8 = (v4 + v5) * (__int128)0x112E0BE826D694B3LL;
  result = v6;
  *((_QWORD *)&v8 + 1) = (*((_QWORD *)&v8 + 1) >> 63) + (*((__int64 *)&v8 + 1) >> 26);
  *(_QWORD *)a1 = *((_QWORD *)&v8 + 1);
  *(_DWORD *)(a1 + 8) = v7 - 1000000000 * DWORD2(v8);
  return result;
}
