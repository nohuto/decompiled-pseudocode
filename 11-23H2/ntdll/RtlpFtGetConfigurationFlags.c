/*
 * XREFs of RtlpFtGetConfigurationFlags @ 0x18009F86C
 * Callers:
 *     RtlpFtQueryConfiguration @ 0x18009F998 (RtlpFtQueryConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFtGetConfigurationFlags(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // [rsp+8h] [rbp+8h]

  HIDWORD(v4) = HIDWORD(a2);
  if ( _ft_g_isTestReadyMedia && (a2 & 0x100000000000000LL) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 4);
    if ( (v2 & 0x30) != 0x10 )
    {
      if ( (v2 & 0x30) != 0x20 )
        goto LABEL_5;
      goto LABEL_11;
    }
LABEL_13:
    LODWORD(a2) = a2 | 0x20;
    goto LABEL_5;
  }
  v2 = *(_DWORD *)(a1 + 4);
  if ( (v2 & 0x30) == 0x10 )
  {
LABEL_11:
    LODWORD(a2) = a2 | 0x10;
    goto LABEL_5;
  }
  if ( (v2 & 0x30) == 0x20 )
    goto LABEL_13;
LABEL_5:
  if ( (v2 & 0x80u) != 0 )
    LODWORD(a2) = a2 | 0x100;
  if ( (*(_BYTE *)(a1 + 12) & 2) != 0 )
    LODWORD(a2) = a2 | 0x80;
  LODWORD(v4) = a2 & 0xFFFFFFF0;
  return v4;
}
