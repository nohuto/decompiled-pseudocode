/*
 * XREFs of sub_14057D680 @ 0x14057D680
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14057D680(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v7; // eax

  v3 = 0;
  if ( a3 && a3[1] )
    sub_14042A5E0(*a3, a2);
  v7 = *((_DWORD *)a3 + 10);
  if ( *(int *)(a2 + 48) < 0 )
  {
    if ( (v7 & 0x80u) != 0 )
      goto LABEL_6;
  }
  else if ( (v7 & 0x40) != 0 )
  {
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a2 + 68) && (v7 & 0x20) != 0 )
  {
LABEL_6:
    if ( a3[3] )
      v3 = sub_14042A5E0(a1, a2);
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a2 + 65) )
  {
    v3 = 259;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  }
LABEL_8:
  ExFreePoolWithTag(a3, 0x6245534Bu);
  _InterlockedIncrement(&dword_140C2A1AC);
  return v3;
}
