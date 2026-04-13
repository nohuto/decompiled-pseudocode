/*
 * XREFs of _Stolx @ 0x180004D58
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAJ@Z @ 0x180009E80 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_180009E80.c)
 *     ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x180012308 (-_Getint@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x18001D8DC (-_Getint@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAJ@Z @ 0x180063190 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180063190.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAJ@Z @ 0x1800B8FF0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800B8FF0.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAHAEBV?$ctype@_W@2@@Z @ 0x1800D0ABC (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 * Callees:
 *     _Stoulx @ 0x180004E40 (_Stoulx.c)
 */

__int64 __fastcall Stolx(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, _DWORD *a4)
{
  unsigned __int8 **v4; // r14
  char *v6; // rdi
  int v7; // ecx
  char v10; // bl
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // esi
  unsigned int v15; // eax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned __int8 **)&v16;
  v6 = (char *)a1;
  v7 = *a1;
  if ( a2 )
    v4 = a2;
  while ( isspace(v7) )
    v7 = (unsigned __int8)*++v6;
  v10 = *v6;
  if ( ((*v6 - 43) & 0xFD) != 0 )
    v10 = 43;
  else
    ++v6;
  v11 = Stoulx(v6, v4, a3, a4);
  v12 = v11;
  v13 = 0x7FFFFFFF;
  if ( v6 == (char *)*v4 )
  {
    *v4 = a1;
  }
  else if ( a1 != *v4 )
  {
    goto LABEL_13;
  }
  if ( v11 )
  {
LABEL_17:
    *_errno() = 34;
    if ( a4 )
      *a4 = 1;
    if ( v10 == 45 )
      return 0x80000000;
    return v13;
  }
LABEL_13:
  if ( v10 == 43 && v11 > 0x7FFFFFFF || v10 == 45 && v11 > 0x80000000 )
    goto LABEL_17;
  v15 = -v11;
  if ( v10 == 45 )
    return v15;
  return v12;
}
