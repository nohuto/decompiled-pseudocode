/*
 * XREFs of ?GreGetGlyphIndicesW@@YAKPEAUHDC__@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0140A1C
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C0080730 (NtGdiGetGlyphIndicesWInternal.c)
 *     ?GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D72B0 (-GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0080918 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetGlyphIndicesW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5,
        int a6,
        int a7)
{
  _WORD *v8; // rbx
  unsigned int v9; // edi
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int16 v12; // r12
  unsigned int *v13; // rsi
  unsigned int v14; // r13d
  int v15; // ecx
  unsigned int *v16; // rcx
  __int16 v17; // ax
  unsigned int *v18; // rcx
  __int16 v19; // ax
  _DWORD v21[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v23[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+58h] BYREF

  v8 = a4;
  v9 = -1;
  v10 = (unsigned __int64)&a4[a3];
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  if ( v22[0] )
  {
    v21[0] = a7;
    v21[1] = *(unsigned __int16 *)(v22[0] + 12LL);
    v25 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v25, (struct XDCOBJ *)v22, 0, 2u, (const struct RFONTOBJ::Tag *)v21) )
      GreAcquireSemaphore(*(_QWORD *)(v25 + 504));
    if ( v25 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v25 + 120) + 32LL);
      v12 = *(unsigned __int8 *)(v11 + 108);
      if ( a3 )
      {
        if ( 4 * a3 )
        {
          v13 = (unsigned int *)Win32AllocPoolZInit(4 * a3, 2037147463LL);
          if ( v13 )
          {
            v14 = a5;
            RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v25, a2, a3, v13, a5, a6);
            v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 120) + 16LL) + 4LL);
            if ( (v15 & 6) != 0 )
            {
              if ( (v15 & 2) != 0 && v12 )
              {
                if ( (unsigned __int64)v8 < v10 )
                {
                  v16 = v13;
                  do
                  {
                    v17 = *(_WORD *)v16;
                    if ( *(_WORD *)v16 != 0xFFFF || v14 != 1 )
                      v17 += v12;
                    *v8 = v17;
                    ++v16;
                    ++v8;
                  }
                  while ( (unsigned __int64)v8 < v10 );
                }
              }
              else if ( (unsigned __int64)v8 < v10 )
              {
                v18 = v13;
                do
                {
                  v19 = *(_WORD *)v18++;
                  *v8++ = v19;
                }
                while ( (unsigned __int64)v8 < v10 );
              }
              v9 = a3;
            }
            Win32FreePool(v13);
          }
        }
      }
      else if ( *(_DWORD *)(v11 + 4) <= 8u )
      {
        v9 = 0;
      }
      else
      {
        v9 = *(_DWORD *)(v11 + 200);
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
    if ( v22[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v22);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v23);
  return v9;
}
