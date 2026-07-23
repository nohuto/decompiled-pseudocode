/*
 * XREFs of sub_1409E1E64 @ 0x1409E1E64
 * Callers:
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     sub_1409B8ECC @ 0x1409B8ECC (sub_1409B8ECC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool sub_1409E1E64()
{
  __int64 v0; // rdx
  NTSTATUS v1; // ebx
  bool result; // al
  BOOLEAN IsMember; // [rsp+40h] [rbp+18h] BYREF
  int v4; // [rsp+48h] [rbp+20h] BYREF
  __int16 v5; // [rsp+4Ch] [rbp+24h]
  PSID SidToCheck; // [rsp+50h] [rbp+28h] BYREF
  int v7; // [rsp+58h] [rbp+30h] BYREF
  int v8; // [rsp+5Ch] [rbp+34h]

  v4 = 0;
  SidToCheck = 0LL;
  IsMember = 0;
  v5 = 1280;
  result = 1;
  if ( RtlCheckTokenMembership(0LL, ::SidToCheck, &IsMember) < 0 || !IsMember )
  {
    v7 = 32;
    v8 = 558;
    if ( (int)sub_1409B8ECC((__int64)&v4, v0, (char *)&v7, &SidToCheck) < 0 )
      return 0;
    v1 = RtlCheckTokenMembership(0LL, SidToCheck, &IsMember);
    ExFreePoolWithTag(SidToCheck, 0);
    if ( v1 < 0 || !IsMember )
      return 0;
  }
  return result;
}
