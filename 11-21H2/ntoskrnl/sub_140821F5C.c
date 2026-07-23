/*
 * XREFs of sub_140821F5C @ 0x140821F5C
 * Callers:
 *     sub_14082071C @ 0x14082071C (sub_14082071C.c)
 *     IoReportHalResourceUsage @ 0x140AF7620 (IoReportHalResourceUsage.c)
 *     sub_140AF7DC8 @ 0x140AF7DC8 (sub_140AF7DC8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14067A8B0 @ 0x14067A8B0 (sub_14067A8B0.c)
 */

__int64 __fastcall sub_140821F5C(
        void *a1,
        UNICODE_STRING *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        _DWORD *Data,
        ULONG DataSize)
{
  int v8; // edi
  UNICODE_STRING *v9; // rdx
  HANDLE v10; // rbx
  NTSTATUS v11; // eax
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle[2]; // [rsp+38h] [rbp-10h] BYREF

  Handle = 0LL;
  KeyHandle[0] = 0LL;
  v8 = sub_14067A8B0(&Handle, a1, a2, 0x2001Fu, 1u, 0LL);
  if ( v8 >= 0 )
  {
    v8 = sub_14067A8B0(KeyHandle, Handle, a3, 0x2001Fu, 1u, 0LL);
    ZwClose(Handle);
    if ( v8 >= 0 )
    {
      v9 = a4;
      v10 = KeyHandle[0];
      if ( *Data )
        v11 = ZwSetValueKey(KeyHandle[0], v9, 0, 8u, Data, DataSize);
      else
        v11 = ZwDeleteValueKey(KeyHandle[0], v9);
      v8 = v11;
      ZwClose(v10);
    }
  }
  return (unsigned int)v8;
}
