/*
 * XREFs of sub_140AA08D8 @ 0x140AA08D8
 * Callers:
 *     sub_140AA0000 @ 0x140AA0000 (sub_140AA0000.c)
 *     sub_140AA00D0 @ 0x140AA00D0 (sub_140AA00D0.c)
 * Callees:
 *     sub_140A814F8 @ 0x140A814F8 (sub_140A814F8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140AA08D8(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  __int16 v6; // ax
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // ax

  result = (unsigned int)dword_140C29FC0;
  if ( (dword_140C29FC0 & 1) == 0 )
    return result;
  CurrentIrql = KeGetCurrentIrql();
  if ( a2 )
  {
    if ( CurrentIrql > 1u )
      sub_140A8C924(0xC4u, 0x75uLL, CurrentIrql, BugCheckParameter2, a2);
    if ( a2 == 1 )
      goto LABEL_12;
  }
  else if ( CurrentIrql > 2u )
  {
    sub_140A8C924(0xC4u, 0x74uLL, CurrentIrql, BugCheckParameter2, 0LL);
  }
  v6 = 37;
  if ( (unsigned int)dword_140C0B1F8 < 3 )
    v6 = 33;
  v7 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v7 & (unsigned __int16)v6) != 0 )
    sub_140A8C924(
      0xC4u,
      0xB2uLL,
      BugCheckParameter2,
      *(__int16 *)(BugCheckParameter2 + 10),
      (unsigned __int16)(v7 & v6));
LABEL_12:
  v8 = 23;
  if ( a2 != 1 )
    v8 = 18;
  if ( (v8 & *(_WORD *)(BugCheckParameter2 + 10)) == 0 )
    sub_140A8C924(0xC4u, 0xB3uLL, BugCheckParameter2, *(__int16 *)(BugCheckParameter2 + 10), v8);
  return sub_140A814F8(BugCheckParameter2);
}
