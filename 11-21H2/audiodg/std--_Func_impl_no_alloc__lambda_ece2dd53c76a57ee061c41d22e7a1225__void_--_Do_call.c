/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ece2dd53c76a57ee061c41d22e7a1225__void_::_Do_call @ 0x1400687B0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x140067CE8 (-CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z.c)
 *     ?CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x140067E34 (-CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_ece2dd53c76a57ee061c41d22e7a1225__void_::_Do_call(__int64 a1)
{
  _BYTE v2[88]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v2, 0, 0x48uLL);
  if ( (int)CopyNotification((struct APO_NOTIFICATION *)v2, *(struct APO_NOTIFICATION **)(a1 + 16)) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8), v2);
    CleanupApoNotification((struct APO_NOTIFICATION *)v2);
  }
}
