/*
 * XREFs of ??$?0V_lambda_fb189054ea513898645e6db750f42f18_@@@?$CTaskWrapper@V_lambda_fb189054ea513898645e6db750f42f18_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_fb189054ea513898645e6db750f42f18_@@@Z @ 0x1805F8638
 * Callers:
 *     ??$QueueTask@V_lambda_fb189054ea513898645e6db750f42f18_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_fb189054ea513898645e6db750f42f18_@@@Z @ 0x1805F8EE4 (--$QueueTask@V_lambda_fb189054ea513898645e6db750f42f18_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_fb189054ea513898645e6db750f42f18_>::CTaskWrapper<_lambda_fb189054ea513898645e6db750f42f18_>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

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
  *a1 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_fb189054ea513898645e6db750f42f18_>::`vftable';
  return a1;
}
