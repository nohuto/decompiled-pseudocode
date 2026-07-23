/*
 * XREFs of sub_140A22D04 @ 0x140A22D04
 * Callers:
 *     sub_140B501D0 @ 0x140B501D0 (sub_140B501D0.c)
 *     sub_140B503E0 @ 0x140B503E0 (sub_140B503E0.c)
 * Callees:
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 */

__int64 __fastcall sub_140A22D04(__int64 a1, char *a2, const WCHAR *a3)
{
  __int64 v4; // r8
  __int64 v5; // rax

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 224);
    if ( v5 )
      v4 = *(_QWORD *)(v5 + 8);
  }
  return sub_140862B44(a2, a3, v4);
}
