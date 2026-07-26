/*
 * XREFs of NdisStatusToDropReason @ 0x1C00D2C64
 * Callers:
 *     PktMonClientNblDropNdis @ 0x1C00D3238 (PktMonClientNblDropNdis.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisStatusToDropReason(int a1)
{
  if ( a1 > 1074077702 )
  {
    if ( a1 > 1074077717 )
    {
      switch ( a1 )
      {
        case 1074077718:
          a1 = 222;
          break;
        case 1074077719:
          a1 = 223;
          break;
        case 1074077720:
          a1 = 16;
          break;
        case 1074077721:
          a1 = 225;
          break;
        case 1074077728:
          a1 = 226;
          break;
        case 1074077729:
          a1 = 227;
          break;
        case 1074077730:
          a1 = 228;
          break;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 1074077717:
          a1 = 221;
          break;
        case 1074077703:
          a1 = 213;
          break;
        case 1074077704:
          a1 = 214;
          break;
        case 1074077705:
          a1 = 215;
          break;
        case 1074077712:
          a1 = 216;
          break;
        case 1074077713:
          a1 = 217;
          break;
        case 1074077714:
          a1 = 218;
          break;
        case 1074077715:
          a1 = 219;
          break;
        case 1074077716:
          a1 = 220;
          break;
      }
    }
  }
  else if ( a1 == 1074077702 )
  {
    return 212;
  }
  else if ( a1 > -1071448033 )
  {
    switch ( a1 )
    {
      case -1071448022:
        a1 = 201;
        break;
      case -1071448017:
        a1 = 38;
        break;
      case 1074077697:
        a1 = 207;
        break;
      case 1074077698:
        a1 = 208;
        break;
      case 1074077699:
        a1 = 209;
        break;
      case 1074077700:
        a1 = 210;
        break;
      case 1074077701:
        a1 = 211;
        break;
    }
  }
  else
  {
    switch ( a1 )
    {
      case -1071448033:
        a1 = 5;
        break;
      case -1073741823:
        a1 = 205;
        break;
      case -1073741670:
        a1 = 3;
        break;
      case -1073676275:
        a1 = 202;
        break;
      case -1073676273:
        a1 = 2;
        break;
      case -1073676271:
        a1 = 4;
        break;
      case -1073676270:
        a1 = 204;
        break;
      case -1073676268:
        a1 = 206;
        break;
      case -1071448052:
        a1 = 203;
        break;
    }
  }
  return (unsigned int)a1;
}
