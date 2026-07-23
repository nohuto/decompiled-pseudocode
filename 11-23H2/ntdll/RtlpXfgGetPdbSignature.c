/*
 * XREFs of RtlpXfgGetPdbSignature @ 0x180121BB0
 * Callers:
 *     RtlpXfgTlLogFailure @ 0x180121D3C (RtlpXfgTlLogFailure.c)
 * Callees:
 *     RtlpImageNtHeader @ 0x180121B54 (RtlpImageNtHeader.c)
 */

__int64 __fastcall RtlpXfgGetPdbSignature(__int64 a1, unsigned __int64 a2, _OWORD *a3, _DWORD *a4, _QWORD *a5)
{
  char v5; // r12
  unsigned int v10; // ebx
  _DWORD *v11; // rax
  _DWORD *v12; // r10
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // r9
  unsigned __int128 v16; // rax
  unsigned __int64 v17; // r11
  unsigned int *v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  unsigned __int64 i; // rcx
  unsigned __int128 v23; // rax

  v5 = 0;
  v10 = -1073741275;
  if ( !a1 || !a2 || !a3 || !a4 || !a5 )
    return (unsigned int)-1073741811;
  v11 = RtlpImageNtHeader(a1);
  v12 = v11;
  if ( !v11 )
    return (unsigned int)-1073741701;
  v13 = (unsigned int)v11[46];
  if ( !(_DWORD)v13 )
    return v10;
  v14 = v11[47];
  if ( v14 + (unsigned int)v13 <= a2 )
  {
    v15 = v13 + 20;
    v16 = (unsigned int)v11[47] * (unsigned __int128)0x2492492492492493uLL;
    v17 = 0LL;
    if ( (*((_QWORD *)&v16 + 1) + (((unsigned __int64)v14 - *((_QWORD *)&v16 + 1)) >> 1)) >> 4 )
    {
      v18 = (unsigned int *)(a1 + v15);
      do
      {
        if ( *(v18 - 2) == 2 )
        {
          v19 = *v18;
          if ( !(_DWORD)v19 )
            return (unsigned int)-1073741701;
          v20 = *(v18 - 1);
          if ( v20 + (unsigned int)v19 > a2 )
            return (unsigned int)-1073741701;
          v21 = a1 + v19;
          if ( *(_DWORD *)v21 == 1396986706 )
          {
            if ( v20 < 0x1C )
              return (unsigned int)-1073741701;
            for ( i = v20 - 1; i >= 0x18; --i )
            {
              if ( !*(_BYTE *)(v21 + i) )
              {
                v5 = 1;
                goto LABEL_22;
              }
            }
            if ( !v5 )
              return (unsigned int)-1073741701;
LABEL_22:
            v10 = 0;
            *a3 = *(_OWORD *)(v21 + 4);
            *a4 = *(_DWORD *)(v21 + 20);
            *a5 = v21 + 24;
          }
        }
        v23 = (unsigned int)v12[47] * (unsigned __int128)0x2492492492492493uLL;
        ++v17;
        v18 += 7;
      }
      while ( v17 < (*((_QWORD *)&v23 + 1) + (((unsigned __int64)(unsigned int)v12[47] - *((_QWORD *)&v23 + 1)) >> 1)) >> 4 );
    }
  }
  else
  {
    return (unsigned int)-1073741701;
  }
  return v10;
}
