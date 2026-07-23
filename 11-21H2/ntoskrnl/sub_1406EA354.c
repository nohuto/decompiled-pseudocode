/*
 * XREFs of sub_1406EA354 @ 0x1406EA354
 * Callers:
 *     sub_14076B438 @ 0x14076B438 (sub_14076B438.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 */

char __fastcall sub_1406EA354(__int64 a1, int *a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rcx

  if ( *(_WORD *)(a1 + 40) <= 8u || (LODWORD(v4) = wcsnicmp(*(const wchar_t **)(a1 + 48), L"USB\\", 4uLL), (_DWORD)v4) )
  {
    v5 = 5;
    if ( *(_WORD *)(a1 + 40) <= 0xAu
      || (LODWORD(v4) = wcsnicmp(*(const wchar_t **)(a1 + 48), L"1394\\", 5uLL), (_DWORD)v4)
      && (*(_WORD *)(a1 + 40) <= 0xAu
       || (LODWORD(v4) = wcsnicmp(*(const wchar_t **)(a1 + 48), L"SBP2\\", 5uLL), (_DWORD)v4)) )
    {
      if ( *(_WORD *)(a1 + 40) <= 0xEu
        || (LODWORD(v4) = wcsnicmp(*(const wchar_t **)(a1 + 48), L"PCMCIA\\", 7uLL), (_DWORD)v4) )
      {
        if ( *(_WORD *)(a1 + 40) <= 8u
          || wcsnicmp(*(const wchar_t **)(a1 + 48), L"PCI\\", 4uLL)
          || (v6 = *(_QWORD *)(a1 + 16), *(_WORD *)(v6 + 56) != 12)
          || (LODWORD(v4) = wcsicmp(*(const wchar_t **)(v6 + 64), L"PCMCIA"), (_DWORD)v4) )
        {
          v4 = *(_QWORD *)(a1 + 720);
          if ( !v4 || (LOBYTE(v4) = *(_BYTE *)(v4 + 16), (v4 & 4) == 0) )
          {
            LODWORD(v4) = -(*(_BYTE *)(*(_QWORD *)(a1 + 16) + 466LL) != 5);
            v5 = 5 - (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 466LL) != 5);
          }
        }
      }
    }
  }
  else
  {
    v5 = 5;
  }
  *a2 = v5;
  return v4;
}
