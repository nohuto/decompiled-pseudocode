/*
 * XREFs of sub_140542C10 @ 0x140542C10
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_140542D30 @ 0x140542D30 (sub_140542D30.c)
 */

void __fastcall sub_140542C10(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        _QWORD *CallbackContext)
{
  unsigned int v7; // r9d
  unsigned __int8 v8; // cl
  __int64 v9; // r8
  bool v10; // r11
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // rdx
  __int64 i; // rbx

  if ( CallbackContext && ControlCode == 1 )
  {
    CallbackContext[2] = MatchAnyKeyword;
    v7 = 0;
    CallbackContext[3] = MatchAllKeyword;
    *((_BYTE *)CallbackContext + 40) = Level;
    for ( *((_DWORD *)CallbackContext + 9) = 1; v7 < *((unsigned __int16 *)CallbackContext + 21); ++v7 )
    {
      v8 = *((_BYTE *)CallbackContext + 40);
      v10 = 0;
      if ( *(_BYTE *)(v7 + CallbackContext[8]) <= v8 || !v8 )
      {
        v9 = *(_QWORD *)(CallbackContext[7] + 8LL * v7);
        if ( !v9 || (v9 & CallbackContext[2]) != 0 && (v9 & CallbackContext[3]) == CallbackContext[3] )
          v10 = 1;
      }
      v11 = CallbackContext[6];
      v12 = (unsigned __int64)v7 >> 5;
      v13 = 1 << (v7 & 0x1F);
      if ( v10 )
        *(_DWORD *)(v11 + 4 * v12) |= v13;
      else
        *(_DWORD *)(v11 + 4 * v12) &= ~v13;
    }
    ExAcquireResourceSharedLite(&stru_140C48A90, 1u);
    for ( i = qword_140C48A80; (__int64 *)i != &qword_140C48A80; i = *(_QWORD *)i )
    {
      if ( (byte_140C48A78 & 1) != 0 )
        sub_140542D30(&qword_140C08E10, v14, 0LL, i + 20, *(_DWORD *)(i + 36));
    }
    ExReleaseResourceLite(&stru_140C48A90);
  }
}
