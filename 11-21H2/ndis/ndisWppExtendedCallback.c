/*
 * XREFs of ndisWppExtendedCallback @ 0x1C0032870
 * Callers:
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0033594 (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1C00AC0DC (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1C0034560 (__report_rangecheckfailure.c)
 */

unsigned __int8 __fastcall ndisWppExtendedCallback(char a1, __int64 a2, __int64 a3)
{
  unsigned __int8 result; // al
  char v4; // r10
  int v5; // r11d
  __int64 v6; // rcx

  result = 0;
  v4 = a3;
  v5 = a2;
  if ( !a1 )
  {
    while ( 1 )
    {
      v6 = result;
      if ( result >= 0x20uLL )
        break;
      ++result;
      ndisWppEnabledLevelPerFlag[v6] = 0;
      if ( result >= 0x20u )
        return result;
    }
LABEL_5:
    _report_rangecheckfailure(v6, a2, a3, ndisWppEnabledLevelPerFlag);
  }
  v6 = 1LL;
  do
  {
    a3 = result;
    if ( ((unsigned int)v6 & v5) != 0 )
    {
      LOBYTE(a2) = v4;
    }
    else
    {
      if ( result >= 0x20uLL )
        goto LABEL_5;
      LOBYTE(a2) = 0;
    }
    ++result;
    ndisWppEnabledLevelPerFlag[a3] = a2;
    v6 = (unsigned int)(2 * v6);
  }
  while ( result < 0x20u );
  return result;
}
