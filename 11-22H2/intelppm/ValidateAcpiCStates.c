/*
 * XREFs of ValidateAcpiCStates @ 0x1C0028ADC
 * Callers:
 *     InitAcpi2CStates @ 0x1C0028A60 (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0009A08 (WPP_RECORDER_SF_ddd.c)
 *     IsValidAcpiGenericAddress @ 0x1C0037DC0 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateAcpiCStates(_DWORD *a1, __int64 a2, __int64 a3, char *a4)
{
  unsigned int v4; // r10d
  _DWORD *v5; // rdx
  unsigned int v6; // r11d
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // edi
  _BYTE *i; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int16 v18; // r9
  int v19; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v5 = a1;
  if ( !a1 )
    return (unsigned int)-1073741823;
  v6 = *a1;
  v7 = 1LL;
  if ( *a1 <= 1u )
  {
    v9 = 0;
    if ( !v6 )
      return v4;
  }
  else
  {
    a4 = (char *)a1 + 38;
    do
    {
      v8 = (unsigned int)(v7 - 1);
      if ( (unsigned __int8)*(a4 - 2) < LOBYTE(a1[5 * v8 + 4])
        || *(_WORD *)a4 < HIWORD(a1[5 * v8 + 4])
        || *(_DWORD *)(a4 + 2) > a1[5 * v8 + 5] )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a1, v7, 0x19u, v19);
        return (unsigned int)-1073741823;
      }
      v7 = (unsigned int)(v7 + 1);
      a4 += 20;
    }
    while ( (unsigned int)v7 < v6 );
    v9 = 0;
  }
  for ( i = a1 + 4; ; i += 20 )
  {
    if ( *(i - 12) == 127 )
      goto LABEL_11;
    if ( !*i )
      break;
    if ( *i == 1 )
      return (unsigned int)-1073741823;
    if ( *i == 2 )
    {
      if ( !(unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001F9DC, v5, v7, a4) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v18 = 26;
        goto LABEL_30;
      }
    }
    else if ( !(unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001F9F4, v5, v7, a4)
           || !(unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001F9C4, v12, v13, v14)
           || !(unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001F9DC, v15, v16, v17) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v18 = 27;
      goto LABEL_30;
    }
LABEL_11:
    if ( ++v9 >= v6 )
      return v4;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (unsigned int)-1073741823;
  v18 = 28;
LABEL_30:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    v18,
    (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids);
  return (unsigned int)-1073741823;
}
