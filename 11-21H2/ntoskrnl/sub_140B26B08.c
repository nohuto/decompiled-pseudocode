/*
 * XREFs of sub_140B26B08 @ 0x140B26B08
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x14041F1E0 (ZwUnloadKey2.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 */

NTSTATUS __fastcall sub_140B26B08(UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING *v2; // rdi
  UNICODE_STRING *v3; // rbx
  UNICODE_STRING *v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+30h] [rbp-30h] BYREF

  result = 0;
  v2 = a1 + 4;
  *(&TargetKey.Attributes + 1) = 0;
  v3 = *(UNICODE_STRING **)&a1[4].Length;
  *(&TargetKey.Length + 1) = 0;
  DestinationString = 0LL;
  if ( v3 != &a1[4] )
  {
    do
    {
      v4 = v3;
      v3 = *(UNICODE_STRING **)&v3->Length;
      if ( SLODWORD(v4[3].Buffer) >= 0 )
        sub_140856DC0(v4 + 2, 1);
    }
    while ( v3 != v2 );
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\ELAM");
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    return ZwUnloadKey2(&TargetKey, 1u);
  }
  return result;
}
