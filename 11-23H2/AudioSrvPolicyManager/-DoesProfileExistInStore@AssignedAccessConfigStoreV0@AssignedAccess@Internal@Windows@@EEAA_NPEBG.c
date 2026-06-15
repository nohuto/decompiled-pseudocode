/*
 * XREFs of ?DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x1800138A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5a51ce284699f0acc741bd28450f0086_::operator() @ 0x1800138F0 (_lambda_5a51ce284699f0acc741bd28450f0086_--operator().c)
 */

bool __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::DoesProfileExistInStore(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *this,
        const unsigned __int16 *a2)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+50h] [rbp+8h] BYREF
  const unsigned __int16 *v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3[0] = this;
  v3[1] = &v5;
  v4 = 0;
  v3[2] = &v4;
  return (int)lambda_5a51ce284699f0acc741bd28450f0086_::operator()(v3) >= 0 && v4;
}
