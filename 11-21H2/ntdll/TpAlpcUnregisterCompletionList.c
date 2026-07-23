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
  int *v4; // rbx
  int v5; // eax
  __int64 result; // rax

  v4 = (int *)(a1 + 288);
  if ( !(unsigned int)TppAlpcpValidateAlpc(a1, 0LL, 1LL) || (v5 = *v4, (*v4 & 1) == 0) )
  {
    TppRaiseInvalidParameter(v2, v1, v3);
    v5 = *v4;
  }
  result = v5 & 0xFFFFFFFD;
  *v4 = result;
  return result;
}
