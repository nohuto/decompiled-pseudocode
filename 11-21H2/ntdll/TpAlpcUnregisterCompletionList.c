/*
 * XREFs of TpAlpcUnregisterCompletionList @ 0x1800813A0
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x180081508 (TppAlpcpValidateAlpc.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcUnregisterCompletionList(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int *v5; // rbx
  int v6; // eax
  __int64 result; // rax

  v5 = (int *)(a1 + 288);
  if ( !(unsigned int)TppAlpcpValidateAlpc(a1, 0LL, 1LL) || (v6 = *v5, (*v5 & 1) == 0) )
  {
    TppRaiseInvalidParameter(v2, v1, v3, v4);
    v6 = *v5;
  }
  result = v6 & 0xFFFFFFFD;
  *v5 = result;
  return result;
}
