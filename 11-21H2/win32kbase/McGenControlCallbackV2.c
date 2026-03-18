/*
 * XREFs of McGenControlCallbackV2 @ 0x1C00B52B0
 * Callers:
 *     <none>
 * Callees:
 *     W32kEtwEnableCallback @ 0x1C00B53AC (W32kEtwEnableCallback.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
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
  unsigned int v8; // r9d
  unsigned __int8 v9; // cl
  __int64 v10; // r8
  bool v11; // r11
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // r8d
  int v15; // eax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        v8 = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = Level;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v8 < *((unsigned __int16 *)CallbackContext + 21); ++v8 )
        {
          v9 = *((_BYTE *)CallbackContext + 40);
          v11 = 0;
          if ( *(_BYTE *)(v8 + *((_QWORD *)CallbackContext + 8)) <= v9 || !v9 )
          {
            v10 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v8);
            if ( !v10
              || (v10 & *((_QWORD *)CallbackContext + 2)) != 0
              && (v10 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
            {
              v11 = 1;
            }
          }
          v12 = *((_QWORD *)CallbackContext + 6);
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
      v15 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v15 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v15 - 1) / 32 + 1));
    }
    W32kEtwEnableCallback((struct _GUID *)SourceId);
  }
}
