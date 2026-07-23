/*
 * XREFs of sub_140A5A248 @ 0x140A5A248
 * Callers:
 *     sub_140A692FC @ 0x140A692FC (sub_140A692FC.c)
 *     sub_140A69470 @ 0x140A69470 (sub_140A69470.c)
 *     sub_140B1A508 @ 0x140B1A508 (sub_140B1A508.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 */

void sub_140A5A248()
{
  ULONG_PTR Context; // [rsp+20h] [rbp-28h] BYREF
  __int64 v1; // [rsp+28h] [rbp-20h]
  void *v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  if ( byte_140C2AF30 )
  {
    LODWORD(Context) = 0;
    HIDWORD(Context) = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v2 = &unk_140C2AF48;
    LODWORD(v1) = 0;
    KeIpiGenericCall(sub_140A5B8F0, (ULONG_PTR)&Context);
  }
}
