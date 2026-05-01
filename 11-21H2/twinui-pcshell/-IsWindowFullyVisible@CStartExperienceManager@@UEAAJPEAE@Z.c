/*
 * XREFs of ?IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z @ 0x180173A60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c79275d28953b0cac87d45977bd002e4_::operator() @ 0x1805F1198 (_lambda_c79275d28953b0cac87d45977bd002e4_--operator().c)
 */

__int64 __fastcall CStartExperienceManager::IsWindowFullyVisible(CStartExperienceManager *this, unsigned __int8 *a2)
{
  unsigned __int8 v3; // bl
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 80) != 2
    || (v3 = 1,
        v5[0] = (char *)this + 280,
        v6 = 1,
        v5[1] = &v6,
        lambda_c79275d28953b0cac87d45977bd002e4_::operator()(v5),
        v6) )
  {
    v3 = 0;
  }
  *a2 = v3;
  return 0LL;
}
