/*
 * XREFs of ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x1802DBDAE
 * Callers:
 *     _lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::operator() @ 0x180206E60 (_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_--operator().c)
 *     _lambda_259a1410ba958232e2f70f54c5d031d1_::operator() @ 0x180207090 (_lambda_259a1410ba958232e2f70f54c5d031d1_--operator().c)
 *     _lambda_58f4954a35e6992b2fe1d34b610efbe6_::operator() @ 0x180207A7C (_lambda_58f4954a35e6992b2fe1d34b610efbe6_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall TouchKeyboardExperienceManager::IsFrameReady(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  char v2; // bl
  TouchKeyboardExperienceManager *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = this;
  v2 = 0;
  if ( !a2
    || (*(int (__fastcall **)(struct IApplicationFrame *, TouchKeyboardExperienceManager **))(*(_QWORD *)a2 + 24LL))(
         a2,
         &v5) < 0
    || (*(int (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v6) < 0 )
  {
    return 0;
  }
  if ( v5 )
    return v6 != 0;
  return v2;
}
