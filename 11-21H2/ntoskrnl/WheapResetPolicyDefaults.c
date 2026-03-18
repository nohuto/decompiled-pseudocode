/*
 * XREFs of WheapResetPolicyDefaults @ 0x140A09B3C
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x140646AB8 (WheapWmiExecutePolicyManagementMethod.c)
 * Callees:
 *     WheapCommitPolicy @ 0x140A0980C (WheapCommitPolicy.c)
 *     WheapSetPolicyValue @ 0x140A09B84 (WheapSetPolicyValue.c)
 */

__int64 WheapResetPolicyDefaults()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v1 = &qword_140A3A118;
  do
  {
    v3 = *(_DWORD *)v1;
    WheapSetPolicyValue(v0++, &v3);
    v1 += 4;
  }
  while ( v0 < 0x11 );
  return WheapCommitPolicy();
}
