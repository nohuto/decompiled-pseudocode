/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___ @ 0x180168C08
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___ @ 0x180168B64 (CreationThreadDispatcher--RunSync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18007BD24 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0_(_QWORD *a1, __int128 *a2)
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
    *v5 = off_18063FE08;
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
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
