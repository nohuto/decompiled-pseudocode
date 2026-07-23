/*
 * XREFs of RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x180112B18
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int16 *a5)
{
  __int16 v5; // r10
  unsigned int v8; // esi
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int16 v12; // cx
  __int128 v14; // [rsp+0h] [rbp-28h]

  v5 = 0;
  v14 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  v8 = *(unsigned __int16 *)(a2 + 8);
  do
  {
    v9 = (v8 >> (2 * v5)) & 3;
    if ( v9 )
    {
      if ( v9 == 2 )
      {
        v10 = 28LL * *(__int16 *)(a2 + 2LL * v5 + 12);
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        if ( *(_WORD *)(v10 + v11 + 4) == a3 )
        {
          *(_OWORD *)a4 = *(_OWORD *)(v10 + v11);
          *(_QWORD *)(a4 + 16) = *(_QWORD *)(v10 + v11 + 16);
          *(_DWORD *)(a4 + 24) = *(_DWORD *)(v10 + v11 + 24);
          v12 = *(_WORD *)(a2 + 2LL * v5 + 12);
LABEL_9:
          *a5 = v12;
          return 0LL;
        }
      }
      else if ( v9 == 1 && *(__int16 *)(a2 + 2LL * v5 + 12) == a3 )
      {
        LOWORD(v14) = 1;
        v12 = -1;
        WORD2(v14) = a3;
        *(_OWORD *)a4 = v14;
        *(_QWORD *)(a4 + 16) = 0LL;
        *(_DWORD *)(a4 + 24) = 0;
        goto LABEL_9;
      }
    }
    ++v5;
  }
  while ( v5 < 4 );
  return 3221225524LL;
}
