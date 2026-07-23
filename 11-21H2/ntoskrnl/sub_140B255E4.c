/*
 * XREFs of sub_140B255E4 @ 0x140B255E4
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     sub_140B2564C @ 0x140B2564C (sub_140B2564C.c)
 *     sub_140B256D0 @ 0x140B256D0 (sub_140B256D0.c)
 */

__int64 __fastcall sub_140B255E4(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 && EtwRegister(&stru_140012EA8, (PETWENABLECALLBACK)sub_140847F40, 0LL, &qword_140D32530) >= 0 )
    {
      dword_140D32538 |= 1u;
      dword_140D3253C = 64;
    }
  }
  else
  {
    sub_140B256D0(&unk_140D31A00);
    sub_140B2564C(&unk_140D31A00);
  }
  return 0LL;
}
