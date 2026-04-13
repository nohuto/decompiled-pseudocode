/*
 * XREFs of ?_W_Getdays@_Locinfo@std@@QEBAPEBGXZ @ 0x1800D0D7C
 * Callers:
 *     ??$_Getvals@_W@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAX_WAEBV_Locinfo@1@@Z @ 0x1800D0154 (--$_Getvals@_W@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEAAX_WA.c)
 * Callees:
 *     ??4?$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z @ 0x1800D0330 (--4-$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z.c)
 */

const unsigned __int16 *__fastcall std::_Locinfo::_W_Getdays(void **this)
{
  char *v2; // rax
  char *v3; // rdi
  const unsigned __int16 *result; // rax

  v2 = (char *)_W_Getdays();
  v3 = v2;
  if ( v2 )
  {
    std::_Yarn<wchar_t>::operator=(this + 5, v2);
    free(v3);
  }
  result = L":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday";
  if ( this[5] )
    return (const unsigned __int16 *)this[5];
  return result;
}
