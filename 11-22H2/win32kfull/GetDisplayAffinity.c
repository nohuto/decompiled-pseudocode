/*
 * XREFs of GetDisplayAffinity @ 0x1C0016874
 * Callers:
 *     NtUserGetWindowDisplayAffinity @ 0x1C00167D0 (NtUserGetWindowDisplayAffinity.c)
 *     SetDisplayAffinity @ 0x1C022CDDC (SetDisplayAffinity.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

__int64 __fastcall GetDisplayAffinity(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx

  v2 = 0;
  *a2 = 0;
  if ( (unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 26LL) & 8) != 0 )
  {
    v2 = 1;
    *a2 = GetProp(v4, (unsigned __int16)atomDispAffinity, 1LL);
  }
  return v2;
}
