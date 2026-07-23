/*
 * XREFs of sub_1408398AC @ 0x1408398AC
 * Callers:
 *     sub_1408394BC @ 0x1408394BC (sub_1408394BC.c)
 *     RtlDeleteRange @ 0x1408395F0 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140839700 (RtlDeleteOwnersRanges.c)
 *     sub_14083984C @ 0x14083984C (sub_14083984C.c)
 *     RtlAddRange @ 0x14083A010 (RtlAddRange.c)
 *     sub_14083A1D0 @ 0x14083A1D0 (sub_14083A1D0.c)
 * Callees:
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall sub_1408398AC(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax

  if ( (*(_BYTE *)(a1 + 34) & 1) == 0 && (*(_BYTE *)(a1 + 33) & 0x10) != 0 )
  {
    v5 = *(_DWORD **)(a1 + 16);
    if ( (*v5)-- == 1 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
  }
  return sub_140203D50((__int64)&stru_140CF92C0, (_SLIST_ENTRY *)a1, a3);
}
