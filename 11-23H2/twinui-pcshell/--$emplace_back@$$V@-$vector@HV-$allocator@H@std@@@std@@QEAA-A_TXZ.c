/*
 * XREFs of ??$emplace_back@$$V@?$vector@HV?$allocator@H@std@@@std@@QEAA?A_TXZ @ 0x180229CBC
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x18022A840 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutMa_ea_18022A840.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<int>::emplace_back<>(__int64 a1)
{
  _BYTE *v1; // rdx
  char *result; // rax

  v1 = *(_BYTE **)(a1 + 8);
  if ( v1 == *(_BYTE **)(a1 + 16) )
    return std::vector<int>::_Emplace_reallocate<>((const void **)a1, v1);
  *(_DWORD *)v1 = 0;
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 4;
  return result;
}
