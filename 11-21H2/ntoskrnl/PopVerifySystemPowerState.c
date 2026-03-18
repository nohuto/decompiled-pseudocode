/*
 * XREFs of PopVerifySystemPowerState @ 0x140819BD0
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1403987D0 (PopActionRetrieveInitialState.c)
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopAdvanceSystemPowerState @ 0x140808834 (PopAdvanceSystemPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x1408197A0 (PopVerifySystemPowerPolicy.c)
 *     PdcPoVerifyPowerState @ 0x1408651F0 (PdcPoVerifyPowerState.c)
 * Callees:
 *     PopIsHiberbootSupported @ 0x140808810 (PopIsHiberbootSupported.c)
 *     PopIsHibernateSupported @ 0x1408111A0 (PopIsHibernateSupported.c)
 */

void __fastcall PopVerifySystemPowerState(int *a1, int a2)
{
  int v2; // r10d
  int *v3; // r11
  int v4; // r9d
  int v5; // r8d
  __int128 *v6; // rcx
  _BYTE *v7; // rcx
  char v8; // al
  _BYTE *v10; // rcx

  v2 = a2;
  v3 = a1;
  if ( a1 )
  {
    v4 = *a1;
    v5 = *a1;
    if ( *a1 <= -1 || (unsigned int)(v4 - 2) <= 3 )
    {
      if ( a2 < 0 )
      {
LABEL_8:
        *v3 = v4;
        return;
      }
      v6 = &PopCapabilities;
      if ( a2 > 1 )
      {
        if ( a2 != 2 )
          goto LABEL_8;
        v8 = 1;
        if ( v5 != 2 )
        {
          if ( v5 != 3 )
          {
            if ( v5 != 4 )
            {
              if ( v5 != 5 )
                goto LABEL_8;
              goto LABEL_38;
            }
LABEL_24:
            if ( BYTE5(PopCapabilities) )
              goto LABEL_8;
LABEL_38:
            if ( !v8 || !PopIsHiberbootSupported((__int64)v6) && !PopIsHibernateSupported(v10) )
              v4 = 1;
            goto LABEL_8;
          }
LABEL_22:
          if ( BYTE4(PopCapabilities) )
            goto LABEL_8;
          v4 = 4;
          goto LABEL_24;
        }
LABEL_20:
        if ( BYTE3(PopCapabilities) )
          goto LABEL_8;
        v4 = 3;
        goto LABEL_22;
      }
      if ( v4 == 5 )
      {
        if ( PopIsHiberbootSupported((__int64)&PopCapabilities) )
          goto LABEL_8;
        if ( PopIsHibernateSupported(v7) )
          goto LABEL_8;
        v4 = 4;
      }
      else if ( v5 != 4 )
      {
        if ( v5 != 3 )
        {
          if ( v5 != 2 )
            goto LABEL_8;
          goto LABEL_16;
        }
LABEL_36:
        if ( BYTE4(PopCapabilities) )
          goto LABEL_8;
        v4 = 2;
LABEL_16:
        if ( BYTE3(PopCapabilities) )
          goto LABEL_8;
        v4 = 1;
        if ( v2 != 1 )
          goto LABEL_8;
        v8 = 0;
        v4 = 2;
        goto LABEL_20;
      }
      if ( BYTE5(PopCapabilities) )
        goto LABEL_8;
      v4 = 3;
      goto LABEL_36;
    }
  }
}
