/*
 * XREFs of ValidateAcpiCStates @ 0x1C00257AC
 * Callers:
 *     InitAcpi2CStates @ 0x1C0025730 (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0008004 (WPP_RECORDER_SF_ddd.c)
 *     IsValidAcpiGenericAddress @ 0x1C00368F8 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateAcpiCStates(_DWORD *a1)
{
  __int64 v1; // r9
  _DWORD *v2; // rdx
  unsigned int v3; // r10d
  __int64 v4; // r8
  char *v5; // r11
  __int64 v6; // rax
  _BYTE *v7; // r11
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 v16; // r9
  int v17; // [rsp+20h] [rbp-28h]

  v1 = 0LL;
  v2 = a1;
  if ( !a1 )
    goto LABEL_30;
  v3 = *a1;
  v4 = 1LL;
  if ( *a1 <= 1u )
  {
    if ( !v3 )
      return (unsigned int)v1;
  }
  else
  {
    v5 = (char *)a1 + 38;
    do
    {
      v6 = (unsigned int)(v4 - 1);
      if ( (unsigned __int8)*(v5 - 2) < LOBYTE(a1[5 * v6 + 4])
        || *(_WORD *)v5 < HIWORD(a1[5 * v6 + 4])
        || *(_DWORD *)(v5 + 2) > a1[5 * v6 + 5] )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a1, v4, 0x19u, v17);
        goto LABEL_30;
      }
      v4 = (unsigned int)(v4 + 1);
      v5 += 20;
    }
    while ( (unsigned int)v4 < v3 );
  }
  v7 = a1 + 4;
  v8 = 0;
  while ( 1 )
  {
    if ( *(v7 - 12) == 127 )
      goto LABEL_10;
    if ( !*v7 )
      break;
    if ( *v7 == 1 )
      goto LABEL_30;
    if ( *v7 == 2 )
    {
      if ( !(unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001E87C, v2, v4, v1) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_30;
        v16 = 26;
        goto LABEL_29;
      }
    }
    else if ( !(unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001E894, v2, v4, v1)
           || !(unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001E864, v10, v11, v12)
           || !(unsigned __int8)IsValidAcpiGenericAddress(&dword_1C001E87C, v13, v14, v15) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_30;
      v16 = 27;
      goto LABEL_29;
    }
LABEL_10:
    ++v8;
    v7 += 20;
    if ( v8 >= v3 )
      return (unsigned int)v1;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_30;
  v16 = 28;
LABEL_29:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    v16,
    (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids);
LABEL_30:
  LODWORD(v1) = -1073741823;
  return (unsigned int)v1;
}
