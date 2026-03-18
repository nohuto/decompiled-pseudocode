/*
 * XREFs of McGenControlCallbackV2 @ 0x1C00177E0
 * Callers:
 *     <none>
 * Callees:
 *     Etw_EnableCallback @ 0x1C0017910 (Etw_EnableCallback.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  UCHAR v8; // r14
  unsigned int v11; // r9d
  unsigned __int8 v12; // cl
  __int64 v13; // r8
  bool v14; // r10
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax

  v8 = Level;
  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        v11 = 0;
        *((_BYTE *)CallbackContext + 40) = Level;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v11 < *((unsigned __int16 *)CallbackContext + 21); ++v11 )
        {
          v12 = *((_BYTE *)CallbackContext + 40);
          v14 = 0;
          if ( *(_BYTE *)(v11 + *((_QWORD *)CallbackContext + 8)) <= v12 || !v12 )
          {
            v13 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v11);
            if ( !v13
              || (v13 & *((_QWORD *)CallbackContext + 2)) != 0
              && (v13 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
            {
              v14 = 1;
            }
          }
          v15 = *((_QWORD *)CallbackContext + 6);
          v16 = (unsigned __int64)v11 >> 5;
          *(_QWORD *)&Level = (unsigned int)(1 << (v11 & 0x1F));
          if ( v14 )
          {
            *(_DWORD *)(v15 + 4 * v16) |= Level;
          }
          else
          {
            *(_QWORD *)&Level = (unsigned int)~Level;
            *(_DWORD *)(v15 + 4 * v16) &= Level;
          }
        }
      }
    }
    else
    {
      v18 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v18 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v18 - 1) / 32 + 1));
    }
    LOBYTE(v17) = v8;
    Etw_EnableCallback(SourceId, ControlCode, v17, MatchAnyKeyword, MatchAllKeyword, FilterData, CallbackContext);
  }
}
