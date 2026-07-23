/*
 * XREFs of sub_140B2DD94 @ 0x140B2DD94
 * Callers:
 *     sub_140B2DD5C @ 0x140B2DD5C (sub_140B2DD5C.c)
 * Callees:
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetSystemInformation @ 0x14041EE00 (ZwSetSystemInformation.c)
 *     sub_140861350 @ 0x140861350 (sub_140861350.c)
 *     sub_1408613C8 @ 0x1408613C8 (sub_1408613C8.c)
 */

NTSTATUS __fastcall sub_140B2DD94(__int64 a1, __int64 a2)
{
  const char *v2; // rcx
  __int64 v3; // rdx
  NTSTATUS v4; // eax
  int v5; // ecx
  NTSTATUS result; // eax
  int SystemInformation; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  SystemInformation = 0;
  Handle = 0LL;
  if ( a1 )
  {
    v2 = *(const char **)(a1 + 216);
    if ( (!v2 || !strstr(v2, "SAFEBOOT:")) && sub_1408613C8((__int64)v2, a2, &Handle) >= 0 )
    {
      v4 = sub_140861350(Handle, v3, &SystemInformation);
      v5 = SystemInformation;
      if ( v4 < 0 )
        v5 = 0;
      SystemInformation = v5;
    }
  }
  result = ZwSetSystemInformation(SystemAitSamplingValue, &SystemInformation, 4u);
  if ( Handle )
    return ZwClose(Handle);
  return result;
}
