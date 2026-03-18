/*
 * XREFs of NtOpenKeyTransactedEx_Stub @ 0x140A2D9B4
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x14078003C (_RegRtlOpenKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx_Stub(__int64 a1)
{
  NTSTATUS (__stdcall *v1)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE); // rax

  if ( byte_140D04CC8 )
  {
    v1 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE))qword_140D04CC0;
  }
  else
  {
    v1 = ZwOpenKeyTransactedEx;
    byte_140D04CC8 = 1;
    qword_140D04CC0 = (__int64)ZwOpenKeyTransactedEx;
  }
  if ( v1 )
    return ((__int64 (__fastcall *)(__int64))v1)(a1);
  else
    return 3221225594LL;
}
