/*
 * XREFs of McGenControlCallbackV2 @ 0x1C003D1E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 *     StorEtwEnableCallback @ 0x1C005A5CC (StorEtwEnableCallback.c)
 */

void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  int v7; // edi
  unsigned int v9; // r9d
  unsigned __int8 v10; // cl
  __int64 v11; // r8
  bool v12; // r11
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  int v15; // eax

  v7 = MatchAnyKeyword;
  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        v9 = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = Level;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v9 < *((unsigned __int16 *)CallbackContext + 21); ++v9 )
        {
          v10 = *((_BYTE *)CallbackContext + 40);
          v12 = 0;
          if ( *(_BYTE *)(v9 + *((_QWORD *)CallbackContext + 8)) <= v10 || !v10 )
          {
            v11 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v9);
            if ( !v11
              || (v11 & *((_QWORD *)CallbackContext + 2)) != 0
              && (v11 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
            {
              v12 = 1;
            }
          }
          v13 = *((_QWORD *)CallbackContext + 6);
          LODWORD(SourceId) = v9 & 0x1F;
          v14 = (unsigned __int64)v9 >> 5;
          *(_DWORD *)&Level = 1 << (char)SourceId;
          if ( v12 )
          {
            *(_DWORD *)(v13 + 4 * v14) |= Level;
          }
          else
          {
            *(_DWORD *)&Level = ~Level;
            *(_DWORD *)(v13 + 4 * v14) &= Level;
          }
        }
      }
    }
    else
    {
      v15 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v15 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v15 - 1) / 32 + 1));
    }
    StorEtwEnableCallback((_DWORD)SourceId, ControlCode, Level, v7);
  }
}
