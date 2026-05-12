/*
 * XREFs of sub_1C0060B18 @ 0x1C0060B18
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C0060B18(__int64 a1)
{
  __int64 v1; // r8
  char v2; // dl
  int v3; // eax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 564) & 2) == 0 )
    return *(_DWORD *)(a1 + 488) >= 5;
  if ( (*(_BYTE *)(a1 + 449) & 4) == 0 && (*(_BYTE *)(v1 + 107) & 0x10) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 488);
    if ( v3 == 5 )
    {
      return *(_DWORD *)(a1 + 980) != 0;
    }
    else if ( v3 == 6 )
    {
      return *(_DWORD *)(a1 + 496) == 5;
    }
  }
  return v2;
}
