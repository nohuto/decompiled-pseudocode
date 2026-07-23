/*
 * XREFs of sub_14045FEE2 @ 0x14045FEE2
 * Callers:
 *     sub_1404600C0 @ 0x1404600C0 (sub_1404600C0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 */

NTSTATUS __fastcall sub_14045FEE2(PEVENT_DATA_DESCRIPTOR UserData, unsigned __int16 a2)
{
  NTSTATUS result; // eax
  __int64 *v3; // rdx

  result = 2058;
  if ( a2 > 0x80Au )
  {
    switch ( a2 )
    {
      case 0x80Bu:
        v3 = (__int64 *)&stru_140038D50;
        break;
      case 0x811u:
        v3 = qword_1400396B0;
        break;
      case 0x81Au:
        v3 = qword_140038318;
        break;
      case 0x81Bu:
        v3 = qword_1400392E0;
        break;
      default:
        return result;
    }
  }
  else if ( a2 == 2058 )
  {
    v3 = qword_140039488;
  }
  else
  {
    result = 1554;
    if ( a2 > 0x612u )
    {
      switch ( a2 )
      {
        case 0x61Au:
          v3 = qword_140039A40;
          break;
        case 0x61Bu:
          v3 = qword_140037E38;
          break;
        case 0x61Cu:
          v3 = qword_140038F60;
          break;
        case 0x61Du:
          v3 = qword_140039BA8;
          break;
        case 0x61Eu:
          v3 = qword_140038EF8;
          break;
        case 0x61Fu:
          v3 = qword_140037A88;
          break;
        case 0x620u:
          v3 = qword_140039A10;
          break;
        case 0x622u:
          v3 = qword_140039C70;
          break;
        default:
          return result;
      }
    }
    else
    {
      switch ( a2 )
      {
        case 0x612u:
          v3 = qword_1400393D8;
          break;
        case 0x60Au:
          v3 = qword_140037C08;
          break;
        case 0x60Bu:
          v3 = qword_140038F98;
          break;
        case 0x60Cu:
          v3 = qword_140038D70;
          break;
        case 0x60Du:
          v3 = qword_140039AB0;
          break;
        case 0x60Eu:
          v3 = qword_140038898;
          break;
        case 0x60Fu:
          v3 = qword_140037FC0;
          break;
        case 0x610u:
          v3 = qword_1400379F8;
          break;
        case 0x611u:
          v3 = qword_140038658;
          break;
        default:
          return result;
      }
    }
  }
  return EtwWriteEx(qword_140C16000, (PCEVENT_DESCRIPTOR)v3, 0LL, 0, 0LL, 0LL, 1u, UserData);
}
