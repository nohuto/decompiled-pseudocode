/*
 * XREFs of ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x180209D44
 * Callers:
 *     ?SetProperty@CAnimationTrigger@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180209CD0 (-SetProperty@CAnimationTrigger@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180042824 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimationTrigger::TransitionTrue(CAnimationTrigger *this)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rdi
  __int64 v4; // rax
  __int64 v5; // r10
  unsigned int v6; // ecx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 12);
  for ( i = (_QWORD *)*((_QWORD *)this + 11); i != v1; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 240LL))(*i);
  if ( CNotificationResource::ShouldNotify(this) )
  {
    v4 = *((_QWORD *)this + 6);
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1240LL) + 40LL);
    if ( v4 )
      v6 = *(_DWORD *)(v4 + 76);
    else
      v6 = 0;
    v7[0] = v6;
    v7[1] = *((unsigned int *)this + 16);
    CoreUICallSend(v5, v7, 2LL, 2LL, 0, &unk_18032C3BE);
  }
}
