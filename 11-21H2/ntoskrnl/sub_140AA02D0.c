/*
 * XREFs of sub_140AA02D0 @ 0x140AA02D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 */

char __fastcall sub_140AA02D0(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v5; // cx
  unsigned __int16 v6; // dx
  __int64 v7; // rdx
  char result; // al
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (dword_140C29FC0 & 1) != 0 )
    sub_140A8C924(0xC4u, 0x70uLL, CurrentIrql, BugCheckParameter2, a2);
  v5 = 2071;
  if ( (unsigned int)dword_140C0B1F8 < 3 )
    v5 = 2067;
  v6 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v6 & (unsigned __int16)v5) != 0 && (dword_140C29FC0 & 1) != 0 )
    sub_140A8C924(
      0xC4u,
      0xB0uLL,
      BugCheckParameter2,
      *(__int16 *)(BugCheckParameter2 + 10),
      (unsigned __int16)(v6 & v5));
  if ( (unsigned int)sub_140A96B0C(0) == 1 )
    RtlRaiseStatus(-1073741663);
  LOBYTE(v7) = a2;
  result = sub_14042A5E0(BugCheckParameter2, v7);
  if ( (dword_140C29FC0 & 0x1000) != 0 )
    return sub_140A8B064(retaddr, 184LL, 0xC0u, *(unsigned int *)(BugCheckParameter2 + 40));
  return result;
}
