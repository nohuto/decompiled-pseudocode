/*
 * XREFs of sub_140A8A9FC @ 0x140A8A9FC
 * Callers:
 *     sub_140A80D10 @ 0x140A80D10 (sub_140A80D10.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

PSLIST_ENTRY __fastcall sub_140A8A9FC(unsigned __int8 *a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int v5; // ecx

  if ( (dword_140C29FC0 & 0x10) != 0 )
  {
    v5 = *a1;
    if ( (_BYTE)v5 != KeGetCurrentIrql() )
      sub_140A8C924(0xC4u, 0xFAuLL, a2, v5, KeGetCurrentIrql());
  }
  if ( (dword_140C29FC0 & 0x10) != 0 && *((_DWORD *)a1 + 1) != *((_DWORD *)KeGetCurrentThread() + 121) )
    sub_140A8C924(0xC4u, 0xFBuLL, a2, *((unsigned int *)KeGetCurrentThread() + 121), *((unsigned int *)a1 + 1));
  return sub_140203D88((__int64)&unk_140D59140, (_SLIST_ENTRY *)a1, a3);
}
