/*
 * XREFs of _Mbrtowc @ 0x180004B78
 * Callers:
 *     ??$_Getvals@G@?$_Mpunct@G@std@@IEAAXGPEBUlconv@@@Z @ 0x18000E774 (--$_Getvals@G@-$_Mpunct@G@std@@IEAAXGPEBUlconv@@@Z.c)
 *     ?do_in@?$codecvt@_WDH@std@@MEBAHAEAHPEBD1AEAPEBDPEA_W3AEAPEA_W@Z @ 0x1800196D0 (-do_in@-$codecvt@_WDH@std@@MEBAHAEAHPEBD1AEAPEBDPEA_W3AEAPEA_W@Z.c)
 *     ?do_length@?$codecvt@_WDH@std@@MEBAHAEAHPEBD1_K@Z @ 0x1800197D0 (-do_length@-$codecvt@_WDH@std@@MEBAHAEAHPEBD1_K@Z.c)
 *     ??$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z @ 0x18004FBB0 (--$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z.c)
 *     ?_Dowiden@?$ctype@G@std@@IEBAGD@Z @ 0x1800606B8 (-_Dowiden@-$ctype@G@std@@IEBAGD@Z.c)
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180061BEC (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?do_in@?$codecvt@GDH@std@@MEBAHAEAHPEBD1AEAPEBDPEAG3AEAPEAG@Z @ 0x180071AE0 (-do_in@-$codecvt@GDH@std@@MEBAHAEAHPEBD1AEAPEBDPEAG3AEAPEAG@Z.c)
 *     ?do_length@?$codecvt@GDH@std@@MEBAHAEAHPEBD1_K@Z @ 0x180071D10 (-do_length@-$codecvt@GDH@std@@MEBAHAEAHPEBD1_K@Z.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800B8920 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     _Getcvt @ 0x18000612C (_Getcvt.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 */

int __cdecl Mbrtowc(wchar_t *a1, const char *a2, size_t a3, mbstate_t *a4, const _Cvtvec *a5)
{
  const _Cvtvec *v5; // rbx
  _Cvtvec *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  size_t Isclocale; // rcx
  _Cvtvec v15; // [rsp+30h] [rbp-98h] BYREF
  _OWORD v16[3]; // [rsp+60h] [rbp-68h] BYREF

  v5 = a5;
  if ( !a2 || !a3 )
    return 0;
  if ( !*a2 )
  {
    if ( a1 )
      *a1 = 0;
    return 0;
  }
  if ( !a5 )
  {
    v11 = Getcvt(&v15);
    v5 = (const _Cvtvec *)v16;
    v12 = *(_OWORD *)&v11->_Isleadbyte[4];
    v16[0] = *(_OWORD *)&v11->_Page;
    v13 = *(_OWORD *)&v11->_Isleadbyte[20];
    v16[1] = v12;
    v16[2] = v13;
  }
  if ( *(_DWORD *)v5->_Isleadbyte )
  {
    if ( a1 )
      *a1 = *(unsigned __int8 *)a2;
    return 1;
  }
  if ( a4->_Wchar )
  {
    BYTE1(a4->_Wchar) = *a2;
    if ( v5->_Isclocale > 1u && MultiByteToWideChar(v5->_Mbcurmax, 9u, (LPCCH)a4, 2, a1, a1 != 0LL) )
    {
      a4->_Wchar = 0;
      return v5->_Isclocale;
    }
LABEL_17:
    a4->_Wchar = 0;
LABEL_18:
    *_errno() = 42;
    return -1;
  }
  if ( ((unsigned __int8)(1 << (*a2 & 7)) & v5->_Isleadbyte[((unsigned __int64)*(unsigned __int8 *)a2 >> 3) + 4]) != 0 )
  {
    Isclocale = (unsigned int)v5->_Isclocale;
    if ( a3 < Isclocale )
    {
      LOBYTE(a4->_Wchar) = *a2;
      return -2;
    }
    if ( (unsigned int)Isclocale > 1 && MultiByteToWideChar(v5->_Mbcurmax, 9u, a2, Isclocale, a1, a1 != 0LL) || a2[1] )
      return v5->_Isclocale;
    goto LABEL_17;
  }
  if ( !MultiByteToWideChar(v5->_Mbcurmax, 9u, a2, 1, a1, a1 != 0LL) )
    goto LABEL_18;
  return 1;
}
