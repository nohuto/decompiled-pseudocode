/*
 * XREFs of PopPowerAggregatorDetermineTargetSystemPowerState @ 0x14080BDD0
 * Callers:
 *     PopPowerAggregatorHandleResumeIntent @ 0x1405D4840 (PopPowerAggregatorHandleResumeIntent.c)
 *     PopPowerAggregatorHandleSystemTransitionIntent @ 0x14080BD60 (PopPowerAggregatorHandleSystemTransitionIntent.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     PopFilterCapabilities @ 0x1407628C0 (PopFilterCapabilities.c)
 *     PopIsHibernateSupported @ 0x1408111A0 (PopIsHibernateSupported.c)
 */

__int64 __fastcall PopPowerAggregatorDetermineTargetSystemPowerState(int a1, char a2, int *a3)
{
  _DWORD *v6; // r10
  int v7; // r9d
  int v8; // r11d
  unsigned int v9; // r8d
  _BYTE v11[80]; // [rsp+20h] [rbp-58h] BYREF

  memset(v11, 0, 0x4CuLL);
  PopFilterCapabilities(&PopCapabilities, (__int64)v11);
  v6 = PopPolicy;
  v7 = a1;
  v8 = 1;
  v9 = 0;
  while ( 1 )
  {
    if ( v7 == v8 )
    {
LABEL_19:
      *a3 = v7;
      return v9;
    }
    if ( v7 > v8 )
    {
      if ( v7 <= 4 )
      {
        if ( v11[3] != (_BYTE)v9 || v11[4] != (_BYTE)v9 || v11[5] != (_BYTE)v9 )
        {
          if ( !a2 || v6[15] != v9 )
            goto LABEL_19;
          goto LABEL_8;
        }
      }
      else if ( v7 == 5 )
      {
        if ( (unsigned __int8)PopIsHibernateSupported(v11) && (!a2 || v6[22] != v9) )
          goto LABEL_19;
      }
      else if ( v7 == 6 )
      {
        goto LABEL_19;
      }
    }
    if ( !a2 )
      return (unsigned int)-1073741637;
LABEL_8:
    if ( a1 )
    {
      v7 = v8;
    }
    else if ( v7 )
    {
      if ( v7 <= v8 )
        return (unsigned int)-1073741811;
      if ( v7 <= 4 )
      {
        v7 = 5;
      }
      else
      {
        if ( v7 != 5 )
          return (unsigned int)-1073741811;
        v7 = v8 + (PopPromoteHibernateToShutdown != 0 ? 5 : 0);
      }
    }
    else
    {
      v7 = 4;
    }
  }
}
