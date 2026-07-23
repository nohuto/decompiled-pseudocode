/*
 * XREFs of sub_140B2F634 @ 0x140B2F634
 * Callers:
 *     sub_140B09C28 @ 0x140B09C28 (sub_140B09C28.c)
 *     sub_140B53490 @ 0x140B53490 (sub_140B53490.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 */

void __fastcall sub_140B2F634(DWORD64 *a1, unsigned int a2)
{
  __int64 v3; // rdi
  PRUNTIME_FUNCTION v4; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    ImageBase = 0LL;
    v3 = a2;
    do
    {
      v4 = RtlLookupFunctionEntry(*a1, &ImageBase, 0LL);
      *a1++ = ImageBase + v4->UnwindInfoAddress;
      --v3;
    }
    while ( v3 );
  }
}
