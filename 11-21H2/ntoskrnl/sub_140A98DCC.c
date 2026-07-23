/*
 * XREFs of sub_140A98DCC @ 0x140A98DCC
 * Callers:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A98064 @ 0x140A98064 (sub_140A98064.c)
 *     sub_140A98420 @ 0x140A98420 (sub_140A98420.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 */

PSLIST_ENTRY __fastcall sub_140A98DCC(int a1)
{
  int v1; // ecx
  int v2; // ecx
  PSLIST_ENTRY result; // rax
  void *v4; // rcx

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        return 0LL;
      v4 = &unk_140D58E40;
    }
    else
    {
      v4 = &unk_140D58EC0;
    }
  }
  else
  {
    v4 = &unk_140D58F40;
  }
  result = sub_140202234((__int64)v4);
  if ( !result )
  {
    dword_140D57524 |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)qword_140D57500 + 8196);
  }
  return result;
}
