/*
 * XREFs of sub_14055A6E4 @ 0x14055A6E4
 * Callers:
 *     sub_14093B1CC @ 0x14093B1CC (sub_14093B1CC.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenPartition @ 0x14041DD00 (ZwOpenPartition.c)
 *     sub_14055BC94 @ 0x14055BC94 (sub_14055BC94.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_14055A6E4(__int64 a1)
{
  NTSTATUS v2; // edi
  void *v3; // rcx
  int v4; // eax
  bool v6; // [rsp+38h] [rbp-49h] BYREF
  PVOID Object; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+88h] [rbp+7h] BYREF
  bool *v11; // [rsp+A8h] [rbp+27h]
  int v12; // [rsp+B0h] [rbp+2Fh]
  int v13; // [rsp+B4h] [rbp+33h]
  PVOID *p_Object; // [rsp+B8h] [rbp+37h]
  int v15; // [rsp+C0h] [rbp+3Fh]
  int v16; // [rsp+C4h] [rbp+43h]

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartitionHyperV");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenPartition((PHANDLE)(a1 + 1088), 2u, &ObjectAttributes);
  if ( v2 < 0
    || (v3 = *(void **)(a1 + 1088),
        Object = 0LL,
        v2 = ObReferenceObjectByHandle(v3, 2u, PsPartitionType, 0, &Object, 0LL),
        *(_QWORD *)(a1 + 1096) = Object,
        v2 < 0) )
  {
    *(_DWORD *)(a1 + 80) |= 4u;
    sub_14055BC94((unsigned int)v2);
    if ( (unsigned int)dword_140C064E0 > 5 && sub_1402A2000((__int64)&dword_140C064E0, 0x200000000000LL) )
    {
      v4 = *(_DWORD *)(a1 + 80);
      v13 = 0;
      v16 = 0;
      v12 = 1;
      v6 = (v4 & 4) != 0;
      v11 = &v6;
      p_Object = &Object;
      LODWORD(Object) = v2;
      v15 = 4;
      sub_14020A9C4(
        (__int64)&dword_140C064E0,
        (unsigned __int8 *)&byte_14002AEC7,
        (const GUID *)(a1 + 960),
        (const GUID *)(a1 + 944),
        4u,
        &v10);
    }
  }
  return (unsigned int)v2;
}
