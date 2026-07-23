/*
 * XREFs of sub_140A2D938 @ 0x140A2D938
 * Callers:
 *     sub_140772D80 @ 0x140772D80 (sub_140772D80.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A2D938(__int64 a1, __int64 a2)
{
  NTSTATUS (__stdcall *v2)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG); // rax

  if ( byte_140D04CB9 )
  {
    v2 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG))qword_140D04CD8;
  }
  else
  {
    v2 = ZwCreateKeyTransacted;
    byte_140D04CB9 = 1;
    qword_140D04CD8 = (__int64)ZwCreateKeyTransacted;
  }
  if ( v2 )
    return sub_14042A5E0(a1, a2);
  else
    return 3221225594LL;
}
