/*
 * XREFs of sub_140717660 @ 0x140717660
 * Callers:
 *     sub_140717624 @ 0x140717624 (sub_140717624.c)
 *     sub_140917348 @ 0x140917348 (sub_140917348.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140717780 @ 0x140717780 (sub_140717780.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 */

__int64 __fastcall sub_140717660(_WORD *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ebx
  char *v6; // rcx
  unsigned int v8; // esi
  char *v9; // rcx

  v4 = 0;
  v5 = sub_140718B68(a1);
  ExAcquireFastMutex(&stru_140C49380);
  if ( dword_140C09598 >= 0
    && dword_140C09598 < dword_140C4E89C
    && (v6 = (char *)qword_140C4E8A8 + 32 * dword_140C09598, *((_DWORD *)v6 + 4) == v5)
    && *(_WORD *)v6 == *a1
    && !(unsigned int)sub_140717780(v6, a1, 0LL) )
  {
    *a2 = *((_QWORD *)qword_140C4E8A8 + 4 * dword_140C09598 + 3);
  }
  else
  {
    v8 = 0;
    if ( dword_140C4E89C )
    {
      while ( 1 )
      {
        v9 = (char *)qword_140C4E8A8 + 32 * v8;
        if ( *((_DWORD *)v9 + 4) == v5 && *(_WORD *)v9 == *a1 && !(unsigned int)sub_140717780(v9, a1, 0LL) )
          break;
        if ( ++v8 >= dword_140C4E89C )
          goto LABEL_14;
      }
      dword_140C09598 = v8;
      *a2 = *((_QWORD *)qword_140C4E8A8 + 4 * v8 + 3);
    }
    else
    {
LABEL_14:
      v4 = -1073741275;
    }
  }
  KeReleaseGuardedMutex(&stru_140C49380);
  return v4;
}
