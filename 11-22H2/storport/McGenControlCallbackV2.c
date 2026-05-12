/*
 * XREFs of McGenControlCallbackV2 @ 0x1C003F410
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorEtwEnableCallback @ 0x1C0067570 (StorEtwEnableCallback.c)
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
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  bool v11; // r9
  int v12; // edx
  unsigned int v13; // edx
  int v14; // eax

  v7 = MatchAnyKeyword;
  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        *(_DWORD *)&Level = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_DWORD *)CallbackContext + 9) = 1;
        if ( *((_WORD *)CallbackContext + 21) )
        {
          do
          {
            v9 = *((_BYTE *)CallbackContext + 40);
            v10 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * Level);
            v11 = (*(_BYTE *)(Level + *((_QWORD *)CallbackContext + 8)) <= v9 || !v9)
               && (!v10
                || (v10 & *((_QWORD *)CallbackContext + 2)) != 0
                && (v10 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
            v12 = 1 << (Level & 0x1F);
            SourceId = (LPCGUID)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)Level >> 5));
            if ( v11 )
              v13 = SourceId->Data1 | v12;
            else
              v13 = SourceId->Data1 & ~v12;
            SourceId->Data1 = v13;
            *(_DWORD *)&Level = Level + 1;
          }
          while ( Level < (unsigned int)*((unsigned __int16 *)CallbackContext + 21) );
        }
      }
    }
    else
    {
      v14 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v14 )
        memset_0(*((void **)CallbackContext + 6), 0, 4LL * ((v14 - 1) / 32 + 1));
    }
    StorEtwEnableCallback((_DWORD)SourceId, ControlCode, Level, v7);
  }
}
