/*
 * XREFs of __tlgEnableCallback@36 @ 0x10001F50
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

void __stdcall _tlgEnableCallback(
        LPCGUID SourceId,
        ULONG IsEnabled,
        int Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        _QWORD *CallbackContext)
{
  int v7; // ecx
  int v8; // ecx
  void (__thiscall *v9)(_DWORD, LPCGUID, ULONG, int, _DWORD, int, _DWORD, _DWORD, PEVENT_FILTER_DESCRIPTOR, _DWORD); // esi

  if ( CallbackContext )
  {
    if ( IsEnabled )
    {
      if ( IsEnabled == 1 )
      {
        if ( (_BYTE)Level )
          v7 = (unsigned __int8)Level + 1;
        else
          v7 = 256;
        *(_DWORD *)CallbackContext = v7;
        CallbackContext[1] = MatchAnyKeyword;
        v8 = HIDWORD(MatchAnyKeyword);
        CallbackContext[2] = MatchAllKeyword;
        goto LABEL_10;
      }
    }
    else
    {
      *(_DWORD *)CallbackContext = 0;
    }
    v8 = HIDWORD(MatchAnyKeyword);
LABEL_10:
    v9 = (void (__thiscall *)(_DWORD, LPCGUID, ULONG, int, _DWORD, int, _DWORD, _DWORD, PEVENT_FILTER_DESCRIPTOR, _DWORD))*((_DWORD *)CallbackContext + 8);
    if ( v9 )
      v9(
        v9,
        SourceId,
        IsEnabled,
        Level,
        MatchAnyKeyword,
        v8,
        MatchAllKeyword,
        HIDWORD(MatchAllKeyword),
        FilterData,
        *((_DWORD *)CallbackContext + 9));
  }
}
