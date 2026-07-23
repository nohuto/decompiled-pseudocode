/*
 * XREFs of WheapResetPolicyDefaults @ 0x140A09C60
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x1406147EC (WheapWmiExecutePolicyManagementMethod.c)
 * Callees:
 *     WheapCommitPolicy @ 0x140A098F8 (WheapCommitPolicy.c)
 *     WheapSetPolicyValue @ 0x140A09CA8 (WheapSetPolicyValue.c)
 */

__int64 WheapResetPolicyDefaults()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v1 = &qword_140A7A3A8;
  do
  {
    v3 = *(_DWORD *)v1;
    WheapSetPolicyValue(v0++, &v3);
    v1 += 4;
  }
  while ( v0 < 0x14 );
  return WheapCommitPolicy();
}
