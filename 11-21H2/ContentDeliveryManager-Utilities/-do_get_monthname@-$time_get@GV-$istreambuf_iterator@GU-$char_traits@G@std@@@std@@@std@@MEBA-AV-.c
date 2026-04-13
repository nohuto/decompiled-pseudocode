/*
 * XREFs of ?do_get_monthname@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180018AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18005430C (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 */

_OWORD *__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get_monthname(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  int v9; // ecx
  _OWORD *result; // rax

  v9 = std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(a3, a4, 0LL, *(_QWORD *)(a1 + 24));
  if ( v9 >= 0 )
    *(_DWORD *)(a7 + 16) = v9 >> 1;
  else
    *a6 |= 2u;
  result = a2;
  *a2 = *a3;
  return result;
}
