/*
 * XREFs of sub_140B5381C @ 0x140B5381C
 * Callers:
 *     sub_140B27D88 @ 0x140B27D88 (sub_140B27D88.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 */

_DWORD *__fastcall sub_140B5381C(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx

  v2 = &unk_140D5E790;
  while ( 1 )
  {
    if ( v2 >= (_DWORD *)((char *)&unk_140D5E790 + a2) )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: no `targets' rule found.\n");
      return 0LL;
    }
    if ( (*v2 & 0x70000) == 0 )
      break;
    if ( (HIWORD(*v2) & 7) == 1 )
    {
      v2 = (_DWORD *)((char *)v2 + ((unsigned __int64)(unsigned int)*v2 >> 19) + 8);
    }
    else if ( (HIWORD(*v2) & 7) == 2 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: found a `targets' rule.\n");
      return v2;
    }
  }
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: zeroed rules structure (hit an invalid type rule).\n");
  return 0LL;
}
