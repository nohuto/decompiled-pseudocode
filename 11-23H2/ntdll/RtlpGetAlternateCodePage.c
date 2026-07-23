/*
 * XREFs of RtlpGetAlternateCodePage @ 0x18010AD2C
 * Callers:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18007AE4C (RtlpConsoleFallbackNameFromLocaleName.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014788 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 */

__int64 __fastcall RtlpGetAlternateCodePage(__int64 a1, const WCHAR *a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r8
  _WORD *v7; // rax
  __int16 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = -1;
  v5 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(a1, a2, 1, &v9) >= 0 )
    {
      v6 = 0LL;
      v7 = (_WORD *)(28LL * v9 + 20 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
      do
      {
        if ( *v7 )
        {
          if ( *v7 == 0xFFFF )
            return (unsigned int)-1;
          ++v5;
        }
        ++v6;
        ++v7;
      }
      while ( v6 < 4 );
      if ( v5 && v5 != -1 )
        *a3 = 28LL * v9 + 20 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    }
  }
  return v5;
}
