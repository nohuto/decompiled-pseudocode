/*
 * XREFs of ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x18010F150
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001B2A0 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

bool __fastcall DWMInputTarget::IsSameAsTarget(DWMInputTarget *this, const struct tagMsgRoutingInfo *a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // r9
  void *v5; // r10

  result = operator==((__int64)a2, (__int64)this + 72, a3, (__int64)this);
  if ( result )
    return DWMInputTarget::IsSameInputSink((DWMInputTarget *)(v4 - 8), v5);
  return result;
}
