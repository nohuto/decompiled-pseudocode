/*
 * XREFs of McGenControlCallbackV2 @ 0x180128260
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

void __fastcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG IsEnabled,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        unsigned __int16 *CallbackContext)
{
  unsigned int v7; // r9d
  unsigned __int8 v8; // cl
  __int64 v9; // r8
  _DWORD *v10; // r8
  _DWORD *v11; // r8
  int v12; // eax

  if ( CallbackContext )
  {
    if ( IsEnabled )
    {
      if ( IsEnabled == 1 )
      {
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        v7 = 0;
        *((_BYTE *)CallbackContext + 40) = Level;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v7 < CallbackContext[21]; ++v7 )
        {
          v8 = *((_BYTE *)CallbackContext + 40);
          if ( *(_BYTE *)(v7 + *((_QWORD *)CallbackContext + 8)) > v8 && v8
            || (v9 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v7)) != 0
            && ((v9 & *((_QWORD *)CallbackContext + 2)) == 0
             || (v9 & *((_QWORD *)CallbackContext + 3)) != *((_QWORD *)CallbackContext + 3)) )
          {
            v11 = (_DWORD *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v7 >> 5));
            *v11 &= ~(1 << (v7 & 0x1F));
          }
          else
          {
            v10 = (_DWORD *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v7 >> 5));
            *v10 |= 1 << (v7 & 0x1F);
          }
        }
      }
    }
    else
    {
      v12 = CallbackContext[21];
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v12 )
        memset_0(*((void **)CallbackContext + 6), 0, 4LL * ((v12 - 1) / 32 + 1));
    }
  }
}
