/*
 * XREFs of sub_1407F1710 @ 0x1407F1710
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     RtlRandomEx @ 0x14036C940 (RtlRandomEx.c)
 */

__int64 sub_1407F1710()
{
  unsigned int v0; // ebx
  ULONG v1; // eax
  __int64 v2; // r8
  int v3; // edx
  unsigned int v4; // ecx
  __int64 v5; // r9
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  v0 = (unsigned __int16)word_140D05000;
  if ( dword_140C0C654 )
    v1 = RtlRandomEx(&Seed);
  else
    v1 = _InterlockedIncrement(&dword_140D3B1CC);
  v2 = 0LL;
  v3 = v1 % v0;
  v4 = 0;
  while ( 1 )
  {
    v5 = qword_140D31700[(unsigned __int16)v3];
    if ( *(_DWORD *)(v5 + 16) )
    {
      if ( (*(_BYTE *)(v5 + 10) & 1) == 0 )
        break;
    }
    ++v4;
    LOWORD(v3) = v3 + 1;
    if ( (unsigned __int16)v3 >= (unsigned __int16)word_140D05000 )
      LOWORD(v3) = 0;
    if ( v4 >= v0 )
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = qword_140D31700[(unsigned __int16)v3];
        if ( *(_DWORD *)(v5 + 16) )
          goto LABEL_6;
        ++v4;
        LOWORD(v3) = v3 + 1;
        if ( (unsigned __int16)v3 >= (unsigned __int16)word_140D05000 )
          LOWORD(v3) = 0;
        if ( v4 >= v0 )
          goto LABEL_7;
      }
    }
  }
LABEL_6:
  v2 = v5;
LABEL_7:
  if ( !dword_140C0C654 && v4 )
    _InterlockedExchangeAdd(&dword_140D3B1CC, v4);
  return v2;
}
