/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_97c937cd63ba9d1d43dfa1c46a848e31_@@@ComTaskPool@Internal@Windows@@V_lambda_97c937cd63ba9d1d43dfa1c46a848e31_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_97c937cd63ba9d1d43dfa1c46a848e31_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_97c937cd63ba9d1d43dfa1c46a848e31_@@@Z @ 0x1800F5194
 * Callers:
 *     ??$QueueTaskWithDelay@V_lambda_97c937cd63ba9d1d43dfa1c46a848e31_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@KPEAPEAUIUnknown@@$$QEAV_lambda_97c937cd63ba9d1d43dfa1c46a848e31_@@@Z @ 0x1800F5064 (--$QueueTaskWithDelay@V_lambda_97c937cd63ba9d1d43dfa1c46a848e31_@@@ComTaskPool@Internal@Windows@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_97c937cd63ba9d1d43dfa1c46a848e31_>,_lambda_97c937cd63ba9d1d43dfa1c46a848e31_>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v5[2] = 0LL;
    if ( v5 + 2 != a2 )
    {
      v5[2] = *a2;
      *a2 = 0LL;
    }
    v5[3] = a2[1];
    *v5 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_97c937cd63ba9d1d43dfa1c46a848e31_>::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    *a1 = v5;
  }
  return a1;
}
