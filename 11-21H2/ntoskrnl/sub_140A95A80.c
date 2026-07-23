/*
 * XREFs of sub_140A95A80 @ 0x140A95A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A95A04 @ 0x140A95A04 (sub_140A95A04.c)
 */

void __fastcall sub_140A95A80(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  unsigned int v4; // ecx

  v4 = ++dword_140D57608;
  if ( dword_140D5755C != 1 || v4 >= 4 )
  {
    if ( !dword_140C16158 || dword_140C16158 == dword_140D5769C )
    {
      if ( v4 <= 1 )
        sub_140A8C924(0xC4u, 0x115uLL, qword_140D57770, 0LL, 0LL);
      else
        _InterlockedAnd(&dword_140C29FC0, 0xFFFFFFFD);
    }
    else
    {
      dword_140D5769C = dword_140C16158;
    }
  }
  sub_140A95A04();
}
