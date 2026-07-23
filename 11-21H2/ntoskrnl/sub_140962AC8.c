/*
 * XREFs of sub_140962AC8 @ 0x140962AC8
 * Callers:
 *     KeSetTracepoint @ 0x140962320 (KeSetTracepoint.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402D6F40 @ 0x1402D6F40 (sub_1402D6F40.c)
 *     sub_140962A18 @ 0x140962A18 (sub_140962A18.c)
 */

_BOOL8 __fastcall sub_140962AC8(PVOID a1, unsigned __int64 a2)
{
  PIMAGE_NT_HEADERS v4; // rax
  unsigned __int64 v5; // rax
  int v6; // ecx
  char v7; // dl

  v4 = RtlImageNtHeader(a1);
  if ( !v4 )
    return 0LL;
  v5 = sub_1402D6F40((unsigned __int64)v4, (__int64)a1, (int)a2 - (int)a1);
  if ( !v5 )
    return 0LL;
  if ( (*(_DWORD *)(v5 + 36) & 0x22000000) != 0x20000000 )
    return 0LL;
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 == 1414090313 || v6 == 1396790859 )
    return 0LL;
  if ( v6 == 1162297680 && *(_DWORD *)(v5 + 4) )
  {
    v7 = *(_BYTE *)(v5 + 4);
    if ( v7 == 119 )
    {
      if ( *(_BYTE *)(v5 + 5) == 120 )
        return 0LL;
    }
    else if ( v7 == 86 && *(_BYTE *)(v5 + 5) == 82 && *(_BYTE *)(v5 + 6) == 70 )
    {
      return 0LL;
    }
  }
  return a1 != qword_140D06988
      && (a1 != qword_140D068F0 || v6 != 1128354388 && v6 != 1347769157 && !(unsigned int)sub_140962A18(a2));
}
