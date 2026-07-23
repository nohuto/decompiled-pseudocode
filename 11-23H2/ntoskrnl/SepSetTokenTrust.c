/*
 * XREFs of SepSetTokenTrust @ 0x14071E9C4
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x140224C2C (SepSetTrustLevelForProcessToken.c)
 *     SepCreateTokenEx @ 0x140229820 (SepCreateTokenEx.c)
 *     SeCopyClientToken @ 0x14071DEC0 (SeCopyClientToken.c)
 *     NtOpenThreadTokenEx @ 0x14071E100 (NtOpenThreadTokenEx.c)
 *     SepFilterToken @ 0x1407F1ED0 (SepFilterToken.c)
 * Callees:
 *     SepDuplicateSid @ 0x140711224 (SepDuplicateSid.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenTrust(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  void *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  v7 = 0LL;
  if ( a2 )
  {
    result = SepDuplicateSid(a2, &v7);
    v3 = result;
    if ( (int)result < 0 )
      return result;
    v2 = v7;
  }
  v5 = *(void **)(a1 + 1104);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  *(_QWORD *)(a1 + 1104) = v2;
  return v3;
}
