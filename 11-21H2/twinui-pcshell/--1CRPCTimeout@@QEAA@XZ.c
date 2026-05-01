/*
 * XREFs of ??1CRPCTimeout@@QEAA@XZ @ 0x180303020
 * Callers:
 *     _CImmersiveApp::QueryService_::_1_::dtor$0 @ 0x180306FBA (_CImmersiveApp--QueryService_--_1_--dtor$0.c)
 *     __lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator()_::_1_::dtor$6 @ 0x1803FC6A5 (__lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator()_--_1_--dtor$6.c)
 *     __lambda_b54eacfb88775a45f9bf3f20a89a8862_::operator()_::_1_::dtor$6 @ 0x1804058F9 (__lambda_b54eacfb88775a45f9bf3f20a89a8862_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRPCTimeout::~CRPCTimeout(CRPCTimeout *this)
{
  CBaseRPCTimeout::Disarm(this);
}
