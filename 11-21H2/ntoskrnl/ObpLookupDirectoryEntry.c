/*
 * XREFs of ObpLookupDirectoryEntry @ 0x1406A9B40
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1406A97F0 (ObpCreateSymbolicLinkName.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406A9C60 (ObpLookupDirectoryUsingHash.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(unsigned __int16 *a1, unsigned int a2, __int64 *a3)
{
  unsigned __int16 *v4; // rdi
  unsigned int v6; // r11d
  unsigned __int64 v8; // rbx
  __int64 v9; // r10
  unsigned int v10; // r10d
  unsigned int v11; // edx
  int v12; // r10d
  __int64 v13; // rcx
  _QWORD *v15; // rax
  unsigned __int16 v16; // dx
  __int64 v17; // rsi
  unsigned int v18; // edx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v20; // dx
  __int128 v21; // rt0

  v4 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v6 = *a1 >> 1;
  if ( v6 < 4 )
  {
    v10 = 0;
  }
  else
  {
    v8 = 0LL;
    do
    {
      v9 = *(_QWORD *)v4;
      if ( (*(_QWORD *)v4 & 0xFF80FF80FF80FF80uLL) != 0 )
      {
        v17 = 4LL;
        do
        {
          v18 = (unsigned __int16)v9;
          if ( (unsigned __int16)v9 >= 0x61u )
          {
            if ( (unsigned __int16)v9 <= 0x7Au )
            {
              v18 = (unsigned __int16)v9 - 32;
            }
            else
            {
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              v18 = NLS_UPCASE(CurrentServerSiloGlobals[154], v20);
            }
          }
          *(_QWORD *)&v21 = v9;
          *((_QWORD *)&v21 + 1) = v18;
          v9 = v21 >> 16;
          --v17;
        }
        while ( v17 );
      }
      else
      {
        v9 &= 0xFFDFFFDFFFDFFFDFuLL;
      }
      v4 += 4;
      v6 -= 4;
      v8 = v9 + (v8 >> 1) + 3 * v8;
    }
    while ( v6 >= 4 );
    v10 = v8 + HIDWORD(v8);
  }
  while ( v6 )
  {
    v11 = *v4;
    v12 = (v10 >> 1) + 3 * v10;
    ++v4;
    --v6;
    if ( v11 >= 0x61 )
    {
      if ( v11 > 0x7A )
      {
        v15 = PsGetCurrentServerSiloGlobals();
        v11 = NLS_UPCASE(v15[154], v16);
      }
      else
      {
        v12 -= 32;
      }
    }
    v10 = v11 + v12;
  }
  *((_DWORD *)a3 + 4) = v10;
  v13 = *a3;
  *((_BYTE *)a3 + 20) = v10 % 0x25;
  return ObpLookupDirectoryUsingHash(v13, a1, a3, a2);
}
