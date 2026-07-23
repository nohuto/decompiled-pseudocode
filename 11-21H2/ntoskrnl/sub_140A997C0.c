/*
 * XREFs of sub_140A997C0 @ 0x140A997C0
 * Callers:
 *     sub_1406015D4 @ 0x1406015D4 (sub_1406015D4.c)
 *     sub_140601734 @ 0x140601734 (sub_140601734.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A98064 @ 0x140A98064 (sub_140A98064.c)
 *     sub_140A98420 @ 0x140A98420 (sub_140A98420.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 *     sub_140A9952C @ 0x140A9952C (sub_140A9952C.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 */

PSLIST_ENTRY __fastcall sub_140A997C0(_SLIST_ENTRY *a1, int a2, __int64 a3)
{
  int v3; // edx
  int v4; // edx
  _SLIST_ENTRY *v5; // rdx
  void *v6; // rcx
  PSLIST_ENTRY result; // rax

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return result;
      v5 = a1;
      v6 = &unk_140D58E40;
    }
    else
    {
      v5 = a1;
      v6 = &unk_140D58EC0;
    }
  }
  else
  {
    v5 = a1;
    v6 = &unk_140D58F40;
  }
  return sub_140203D88((__int64)v6, v5, a3);
}
