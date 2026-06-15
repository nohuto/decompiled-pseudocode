/*
 * XREFs of ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x1800473C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator() @ 0x180047090 (_lambda_53a10622b8c115a42f3ae5bcca2992b2_--operator().c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::Initialize(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v6[0] = this;
  v4 = 0;
  v6[1] = &v7;
  v7 = 0;
  if ( (int)lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator()((__int64)v6, a2, a3, a4) >= 0 )
    return v7 != 0;
  return v4;
}
