/*
 * XREFs of ??$?0V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@?$CTaskWrapper@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@Z @ 0x180580070
 * Callers:
 *     ??$QueueTask@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@Z @ 0x180580548 (--$QueueTask@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2a2628a81f3a0afe82e0d81e4960563_>::CTaskWrapper<_lambda_c2a2628a81f3a0afe82e0d81e4960563_>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  v5 = a2 + 2;
  a1[4] = 0LL;
  if ( a1 + 4 != a2 + 2 )
  {
    a1[4] = *v5;
    *v5 = 0LL;
  }
  v6 = a2 + 3;
  a1[5] = 0LL;
  if ( a1 + 5 != a2 + 3 )
  {
    a1[5] = *v6;
    *v6 = 0LL;
  }
  *a1 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2a2628a81f3a0afe82e0d81e4960563_>::`vftable';
  return a1;
}
