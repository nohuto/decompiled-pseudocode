/*
 * XREFs of ??$?0VGestureHandler@@$0A@@?$weak_ptr@VGestureHandler@@@std@@QEAA@AEBV?$shared_ptr@VGestureHandler@@@1@@Z @ 0x1801526C0
 * Callers:
 *     std::make_shared_GestureHandler_enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x180060090 (std--make_shared_GestureHandler_enum_GestureProcessorType_-_unsigned_short_const___ISystemInputR.c)
 *     ?CreateGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4GestureProcessorType@@@Z @ 0x180060474 (-CreateGestureHandler@GestureServices@@QEAA-AV-$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::weak_ptr<GestureHandler>::weak_ptr<GestureHandler>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2[1] )
  {
    *a1 = *a2;
    v2 = a2[1];
    a1[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
  }
  return a1;
}
