/*
 * XREFs of sub_1405C9FA8 @ 0x1405C9FA8
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 */

BOOLEAN __fastcall sub_1405C9FA8(wchar_t *a1)
{
  char v1; // bl
  __int64 v2; // rdx
  wchar_t *v3; // rax
  NTSTATUS v4; // eax
  BOOLEAN v5; // cl
  UNICODE_STRING CapabilityName; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN HasCapability; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  HasCapability = 0;
  if ( a1 )
  {
    CapabilityName = 0LL;
    v2 = 0x7FFFLL;
    v3 = a1;
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --v2;
    }
    while ( v2 );
    if ( v2 )
    {
      CapabilityName.Buffer = a1;
      CapabilityName.Length = -2 - 2 * v2;
      CapabilityName.MaximumLength = -2 * v2;
      v4 = RtlCapabilityCheck(0LL, &CapabilityName, &HasCapability);
      v5 = HasCapability;
      if ( v4 < 0 )
        return 0;
      return v5;
    }
  }
  return v1;
}
