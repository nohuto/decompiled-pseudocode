/*
 * XREFs of sub_14075ADF8 @ 0x14075ADF8
 * Callers:
 *     sub_140791110 @ 0x140791110 (sub_140791110.c)
 *     sub_140793B84 @ 0x140793B84 (sub_140793B84.c)
 *     sub_140794AD0 @ 0x140794AD0 (sub_140794AD0.c)
 *     sub_14085EB0C @ 0x14085EB0C (sub_14085EB0C.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14075A12C @ 0x14075A12C (sub_14075A12C.c)
 *     sub_140794654 @ 0x140794654 (sub_140794654.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14075ADF8(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  PVOID v3; // rbx
  int v4; // edi
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = (a1 >> 6) & 0xF;
  if ( (_DWORD)v1 == 3 )
    return 0LL;
  if ( (_DWORD)v1 != 1 || ((a1 >> 4) & 3) != 0 )
  {
LABEL_9:
    if ( !SeSinglePrivilegeCheck(stru_140D3CA10, *((_BYTE *)KeGetCurrentThread() + 562)) )
      return 3221225569LL;
    return 0LL;
  }
  result = sub_14075A12C(a1, (PSECURITY_DESCRIPTOR **)&P);
  if ( (int)result < 0 )
    return result;
  v3 = P;
  v4 = sub_140794654(*((PSECURITY_DESCRIPTOR *)P + 2), 0x10u);
  ExFreePoolWithTag(v3, 0x20666E57u);
  if ( v4 < 0 )
  {
    if ( v4 != -1073741790 )
      return (unsigned int)v4;
    goto LABEL_9;
  }
  return 0LL;
}
