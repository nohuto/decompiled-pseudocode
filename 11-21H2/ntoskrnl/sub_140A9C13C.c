/*
 * XREFs of sub_140A9C13C @ 0x140A9C13C
 * Callers:
 *     sub_140A9C1B0 @ 0x140A9C1B0 (sub_140A9C1B0.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_14055F1D4 @ 0x14055F1D4 (sub_14055F1D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AA5D64 @ 0x140AA5D64 (sub_140AA5D64.c)
 */

unsigned __int8 __fastcall sub_140A9C13C(_SLIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  _SLIST_ENTRY *Next; // rcx
  unsigned __int8 result; // al

  Next = a1[14].Next;
  if ( Next )
    ExFreePoolWithTag(Next, 0x6D646C56u);
  result = (unsigned __int8)sub_140203D88((__int64)&unk_140D590C0, a1, a3);
  if ( !_InterlockedDecrement(&dword_140C1A918) )
  {
    result = sub_14055F1D4();
    if ( result )
      return sub_140AA5D64();
  }
  return result;
}
