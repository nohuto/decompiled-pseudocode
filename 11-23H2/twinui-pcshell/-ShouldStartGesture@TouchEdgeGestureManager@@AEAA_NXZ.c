/*
 * XREFs of ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18064D870
 * Callers:
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18064DA00 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     _lambda_3f008998f07e239b518a74c6a95e8a8e_::operator() @ 0x18064C9D0 (_lambda_3f008998f07e239b518a74c6a95e8a8e_--operator().c)
 *     _lambda_498a005a5cf0d6ec0722f3aba4e990a2_::operator() @ 0x18064CAD0 (_lambda_498a005a5cf0d6ec0722f3aba4e990a2_--operator().c)
 *     _lambda_83af7046a684dcf21ae9fea69b28a5d1_::operator() @ 0x18064CC18 (_lambda_83af7046a684dcf21ae9fea69b28a5d1_--operator().c)
 *     _lambda_fc0981708ed8a1dd999985f4c9497d81_::operator() @ 0x18064D0A8 (_lambda_fc0981708ed8a1dd999985f4c9497d81_--operator().c)
 */

char __fastcall TouchEdgeGestureManager::ShouldStartGesture(TouchEdgeGestureManager *this)
{
  char v1; // bl
  TouchEdgeGestureManager *v3; // [rsp+30h] [rbp+8h] BYREF
  TouchEdgeGestureManager *v4; // [rsp+38h] [rbp+10h] BYREF
  TouchEdgeGestureManager *v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = this;
  v4 = this;
  v5 = this;
  v1 = 0;
  if ( !lambda_498a005a5cf0d6ec0722f3aba4e990a2_::operator()()
    && !lambda_83af7046a684dcf21ae9fea69b28a5d1_::operator()((__int64)&v3)
    && !lambda_3f008998f07e239b518a74c6a95e8a8e_::operator()((__int64 *)&v4) )
  {
    return !lambda_fc0981708ed8a1dd999985f4c9497d81_::operator()((__int64)&v5);
  }
  return v1;
}
