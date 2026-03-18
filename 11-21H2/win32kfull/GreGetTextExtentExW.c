/*
 * XREFs of GreGetTextExtentExW @ 0x1C015FAA8
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x1C0034270 (NtGdiGetTextExtentExW.c)
 *     GreGetCharacterPlacementW @ 0x1C02BAA8C (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00359A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00EAC98 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C015E3BC (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C015FD6C (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall GreGetTextExtentExW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6,
        struct tagSIZE *a7,
        char a8)
{
  __int64 v8; // rsi
  int *v9; // rbx
  unsigned int v12; // r15d
  unsigned int v14; // eax
  __int64 v15; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v16; // [rsp+98h] [rbp-78h]
  _QWORD v17[2]; // [rsp+A0h] [rbp-70h] BYREF
  char v18[32]; // [rsp+B0h] [rbp-60h] BYREF
  float *v19[2]; // [rsp+D0h] [rbp-40h] BYREF
  _BYTE v20[320]; // [rsp+E0h] [rbp-30h] BYREF
  char v21; // [rsp+220h] [rbp+110h] BYREF

  v8 = 0LL;
  v9 = a6;
  v16 = a4;
  v12 = 0;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v17, a1);
      if ( v17[0] )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v17, 516);
        v15 = 0LL;
        if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v15, (struct XDCOBJ *)v17, 0, 2 * (a8 & 1u) + 2) )
          GreAcquireSemaphore(*(_QWORD *)(v15 + 504));
        if ( v15 )
        {
          if ( (*(_DWORD *)(v15 + 84) & 4) != 0 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v15, a2, a3);
          if ( !a6 && a5 )
          {
            if ( a3 > 0x28 )
            {
              if ( !(4 * a3) || (v8 = Win32AllocPoolZInit(4 * a3, 1954051143LL)) == 0 )
                EngSetLastError(8u);
              v9 = (int *)v8;
            }
            else
            {
              v9 = (int *)&v21;
            }
          }
          ESTROBJ::vInit(
            (ESTROBJ *)v20,
            a2,
            a3,
            (struct XDCOBJ *)v17,
            (struct RFONTOBJ *)&v15,
            v19,
            0LL,
            0,
            *(_DWORD *)(v17[0] + 1756LL),
            *(_DWORD *)(*(_QWORD *)(v17[0] + 976LL) + 280LL),
            *(_DWORD *)(*(_QWORD *)(v17[0] + 976LL) + 284LL),
            *(_DWORD *)(*(_QWORD *)(v17[0] + 976LL) + 288LL),
            0,
            0,
            0,
            v9,
            0LL,
            0);
          if ( (v20[232] & 4) != 0 && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v20, (struct RFONTOBJ *)&v15, 0, a7) )
          {
            if ( a5 && v9 )
            {
              v14 = 0;
              do
              {
                if ( *v9 > v16 )
                  break;
                ++v14;
                ++v9;
              }
              while ( v14 < a3 );
              *a5 = v14;
            }
            v12 = 1;
          }
          if ( v8 )
            Win32FreePool(v8);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v20);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
      }
      else
      {
        EngSetLastError(6u);
      }
      MDCOBJ::~MDCOBJ((MDCOBJ *)v17);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v18);
      return v12;
    }
    else
    {
      if ( a5 )
        *a5 = 0;
      return 1LL;
    }
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
