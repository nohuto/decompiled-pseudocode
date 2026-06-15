/*
 * XREFs of ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002D610
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18002D764 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002FF48 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 */

void __fastcall TsSessionConsiderForPrimaryConsoleAudioSession(struct TSSession *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *i; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax

  EnterCriticalSection(&stru_18005C5D8);
  v2 = 0LL;
  if ( !*((_DWORD *)a1 + 1) && *(_DWORD *)a1 )
  {
    v3 = *((_QWORD *)a1 + 3);
    v4 = *(_QWORD *)(v3 + 200);
    if ( v4 && (v5 = *(_QWORD *)(v3 + 176)) != 0 )
    {
      if ( v4 > v5 )
        v5 = v4;
    }
    else
    {
      v5 = 0LL;
    }
    for ( i = *(_QWORD **)qword_18005C6B8; i != (_QWORD *)qword_18005C6B8; i = (_QWORD *)*i )
    {
      v7 = i[3];
      if ( *(_DWORD *)v7 && *(_DWORD *)(v7 + 1112) )
      {
        v8 = *(_QWORD *)(v7 + 24);
        v9 = *(_QWORD *)(v8 + 200);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v8 + 176);
          if ( v10 )
          {
            v2 = v10;
            if ( v9 > v10 )
              v2 = v9;
          }
        }
        break;
      }
    }
    if ( v5 > v2 )
      TsSessionNewPrimaryConsoleAudioSession(a1);
  }
  LeaveCriticalSection(&stru_18005C5D8);
}
