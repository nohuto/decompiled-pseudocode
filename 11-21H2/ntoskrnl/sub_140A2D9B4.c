/*
 * XREFs of sub_140A2D9B4 @ 0x140A2D9B4
 * Callers:
 *     sub_14078003C @ 0x14078003C (sub_14078003C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A2D9B4(__int64 a1, __int64 a2)
{
  NTSTATUS (__stdcall *v2)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE); // rax

  if ( byte_140D04CC8 )
  {
    v2 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE))qword_140D04CC0;
  }
  else
  {
    v2 = ZwOpenKeyTransactedEx;
    byte_140D04CC8 = 1;
    qword_140D04CC0 = (__int64)ZwOpenKeyTransactedEx;
  }
  if ( v2 )
    return sub_14042A5E0(a1, a2);
  else
    return 3221225594LL;
}
