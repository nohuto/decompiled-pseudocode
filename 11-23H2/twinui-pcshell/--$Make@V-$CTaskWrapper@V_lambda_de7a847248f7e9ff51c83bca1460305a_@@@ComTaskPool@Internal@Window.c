/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_de7a847248f7e9ff51c83bca1460305a_@@@Z @ 0x1800285D0
 * Callers:
 *     ??$QueueTask@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_de7a847248f7e9ff51c83bca1460305a_@@@Z @ 0x180028544 (--$QueueTask@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>,_lambda_de7a847248f7e9ff51c83bca1460305a_>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    v5[2] = *a2;
    v5[3] = a2[1];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5 + 3);
    v6 = a2[2];
    v5[4] = v6;
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 56);
      while ( v7 >= 0 )
      {
        if ( (_DWORD)v7 != 0x7FFFFFFF )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 56), v7 + 1, v7);
          if ( v8 != v7 )
            continue;
        }
        goto LABEL_7;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference(
        (Microsoft::WRL::Details *)(2 * v7 + 16),
        (volatile int *)v6);
    }
LABEL_7:
    *v5 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    *a1 = v5;
  }
  return a1;
}
