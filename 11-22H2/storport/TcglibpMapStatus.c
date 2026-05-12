/*
 * XREFs of TcglibpMapStatus @ 0x1C00803B0
 * Callers:
 *     ParseTcgPayloadStatus @ 0x1C007FBC0 (ParseTcgPayloadStatus.c)
 * Callees:
 *     TcglibEalLogCommandStatus @ 0x1C00556E8 (TcglibEalLogCommandStatus.c)
 *     WPP_SF_Dd @ 0x1C00804B4 (WPP_SF_Dd.c)
 */

__int64 __fastcall TcglibpMapStatus(int **a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v5; // ebx

  if ( a2 > 9u )
  {
    if ( a2 != 10 )
    {
      if ( a2 == 11 || a2 == 12 )
      {
        v5 = -1073741811;
        goto LABEL_27;
      }
      if ( a2 != 15 && a2 != 16 )
      {
        if ( a2 == 17 )
        {
          v5 = -1073741263;
          goto LABEL_27;
        }
        if ( a2 == 18 )
        {
          v5 = -1073741260;
          goto LABEL_27;
        }
      }
      goto LABEL_11;
    }
LABEL_26:
    v5 = -1073741670;
    goto LABEL_27;
  }
  if ( a2 == 9 )
    goto LABEL_26;
  v5 = 0;
  switch ( a2 )
  {
    case 0u:
      goto LABEL_30;
    case 1u:
      v5 = -1073741790;
      goto LABEL_27;
    case 3u:
      v5 = -1073741618;
      goto LABEL_27;
  }
  if ( a2 != 4 )
  {
    switch ( a2 )
    {
      case 5u:
      case 6u:
        v5 = -1073741710;
        goto LABEL_27;
      case 7u:
        v5 = -2147483631;
        goto LABEL_27;
      case 8u:
        goto LABEL_26;
    }
  }
LABEL_11:
  v5 = -1073741435;
LABEL_27:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_Dd(WPP_GLOBAL_Control->AttachedDevice, 40LL, a3, a2, v5);
LABEL_30:
  TcglibEalLogCommandStatus(*a1, a2);
  return v5;
}
