/*
 * XREFs of Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&___lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&_ @ 0x1800709D8
 * Callers:
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1800708C8 (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18007BD24 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94____(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>(v4);
    v6 = *a2;
    v5[6] = *a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v5[7] = a2[1];
    *v5 = off_18061F0B8;
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release();
    *a1 = v5;
  }
  return a1;
}
