/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_61eb9ea7c91726b5f7f26d1710998484___ @ 0x180486DEC
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___ @ 0x1804871D8 (CreationThreadDispatcher--RunSync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18007BD24 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_61eb9ea7c91726b5f7f26d1710998484_(_QWORD *a1, __int128 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int128 v6; // xmm0
  _QWORD *result; // rax

  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v4);
    v6 = *a2;
    *v5 = off_180658E88;
    v5[1] = &CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_OWORD *)v5 + 3) = v6;
  }
  else
  {
    v5 = 0LL;
  }
  result = a1;
  *a1 = v5;
  return result;
}
