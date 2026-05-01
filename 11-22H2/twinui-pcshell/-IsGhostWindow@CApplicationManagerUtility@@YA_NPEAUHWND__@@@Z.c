/*
 * XREFs of ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1803A571C
 * Callers:
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x18001D478 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 */

bool __fastcall CApplicationManagerUtility::IsGhostWindow(HWND hWnd, HWND a2)
{
  if ( dword_18098F328 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_18098F328);
    if ( dword_18098F328 == -1 )
    {
      word_18098D8D8 = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_18098F328);
    }
  }
  return (unsigned __int16)GetClassLongW(hWnd, -32) == (unsigned __int16)word_18098D8D8;
}
