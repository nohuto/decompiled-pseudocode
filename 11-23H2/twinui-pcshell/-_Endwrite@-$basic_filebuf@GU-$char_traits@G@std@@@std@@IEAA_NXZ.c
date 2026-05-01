/*
 * XREFs of ?_Endwrite@?$basic_filebuf@GU?$char_traits@G@std@@@std@@IEAA_NXZ @ 0x1806E3DAC
 * Callers:
 *     ?close@?$basic_filebuf@GU?$char_traits@G@std@@@std@@QEAAPEAV12@XZ @ 0x1806E4098 (-close@-$basic_filebuf@GU-$char_traits@G@std@@@std@@QEAAPEAV12@XZ.c)
 *     ?seekoff@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x1806E4890 (-seekoff@-$basic_filebuf@GU-$char_traits@G@std@@@std@@MEAA-AV-$fpos@U_Mbstatet@@@2@_JHH@Z.c)
 *     ?seekpos@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x1806E4980 (-seekpos@-$basic_filebuf@GU-$char_traits@G@std@@@std@@MEAA-AV-$fpos@U_Mbstatet@@@2@V32@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall std::basic_filebuf<unsigned short>::_Endwrite(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  __int64 v5; // rdi
  _BYTE *v6; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v7[32]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !*(_BYTE *)(a1 + 114) )
    return 1;
  if ( (*(unsigned __int16 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 0xFFFFLL) == 0xFFFF )
    return 0;
  v2 = std::codecvt<unsigned short,char,_Mbstatet>::unshift(*(_QWORD *)(a1 + 104), a1 + 116, v7, &v8, &v6);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 )
      {
        *(_BYTE *)(a1 + 114) = 0;
        return 1;
      }
      return 0;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 114) = 0;
  }
  if ( v6 == v7 )
    return *(_BYTE *)(a1 + 114) == 0;
  v5 = v6 - v7;
  if ( v5 == _o_fwrite(v7, 1LL, v6 - v7, *(_QWORD *)(a1 + 128)) )
    return *(_BYTE *)(a1 + 114) == 0;
  return 0;
}
