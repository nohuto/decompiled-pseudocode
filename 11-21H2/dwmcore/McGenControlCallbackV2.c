/*
 * XREFs of McGenControlCallbackV2 @ 0x1800166D0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     DispatchDwmDiagnosticsControlMessage @ 0x1802632D8 (DispatchDwmDiagnosticsControlMessage.c)
 */

void __fastcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG IsEnabled,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        ULONGLONG *CallbackContext)
{
  unsigned int v8; // r9d
  unsigned __int8 v9; // cl
  __int64 v10; // rcx
  bool v11; // r10
  ULONGLONG v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // r8d
  ULONG Size; // edx

  if ( CallbackContext )
  {
    if ( IsEnabled )
    {
      if ( IsEnabled == 1 )
      {
        CallbackContext[2] = MatchAnyKeyword;
        v8 = 0;
        CallbackContext[3] = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = Level;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v8 < *((unsigned __int16 *)CallbackContext + 21); ++v8 )
        {
          v9 = *((_BYTE *)CallbackContext + 40);
          v11 = 0;
          if ( *(_BYTE *)(v8 + CallbackContext[8]) <= v9 || !v9 )
          {
            v10 = *(_QWORD *)(CallbackContext[7] + 8LL * v8);
            if ( !v10 || (v10 & CallbackContext[2]) != 0 && (v10 & CallbackContext[3]) == CallbackContext[3] )
              v11 = 1;
          }
          v12 = CallbackContext[6];
          v13 = (unsigned __int64)v8 >> 5;
          v14 = 1 << (v8 & 0x1F);
          if ( v11 )
            *(_DWORD *)(v12 + 4 * v13) |= v14;
          else
            *(_DWORD *)(v12 + 4 * v13) &= ~v14;
        }
      }
    }
    else
    {
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      CallbackContext[2] = 0LL;
      CallbackContext[3] = 0LL;
      if ( *((_WORD *)CallbackContext + 21) )
        memset_0((void *)CallbackContext[6], 0, 4LL * ((*((unsigned __int16 *)CallbackContext + 21) - 1) / 32 + 1));
    }
    if ( IsEnabled == 2 && CallbackContext == &Microsoft_Windows_Dwm_Core_Provider_Context )
    {
      if ( FilterData )
      {
        if ( FilterData->Type == 0x80000000 )
        {
          Size = FilterData->Size;
          if ( Size >= 0x1C && *(_DWORD *)(FilterData->Ptr + 16) <= Size )
            DispatchDwmDiagnosticsControlMessage((struct DwmDiagnosticsControlMessage_0 *)FilterData->Ptr);
        }
      }
    }
  }
}
