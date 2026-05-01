/*
 * XREFs of ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1802ECA64
 * Callers:
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x180021DA0 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 */

bool __fastcall CApplicationManagerUtility::IsGhostWindow(HWND hWnd, HWND a2)
{
  if ( dword_1807B4BE8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1807B4BE8);
    if ( dword_1807B4BE8 == -1 )
    {
      word_1807B3C08 = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_1807B4BE8);
    }
  }
  return (unsigned __int16)GetClassLongW(hWnd, -32) == (unsigned __int16)word_1807B3C08;
}
