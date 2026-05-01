/*
 * XREFs of CrmRegistrationStartWithActivity @ 0x1800438A0
 * Callers:
 *     CrmGlobalsStart @ 0x1800436B4 (CrmGlobalsStart.c)
 * Callees:
 *     CrmRegistrationStart @ 0x180005054 (CrmRegistrationStart.c)
 *     CrmRegistrationCreateActivity @ 0x1800438F0 (CrmRegistrationCreateActivity.c)
 */

__int64 __fastcall CrmRegistrationStartWithActivity(__int64 a1, int a2, __int64 a3, int a4)
{
  int v5; // ebx
  __int64 result; // rax

  v5 = a1;
  result = CrmRegistrationStart(a1, 0LL, a4);
  if ( (int)result >= 0 )
  {
    result = CrmRegistrationCreateActivity(v5, a2, 0);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
