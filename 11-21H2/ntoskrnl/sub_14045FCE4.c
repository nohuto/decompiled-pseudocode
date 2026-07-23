/*
 * XREFs of sub_14045FCE4 @ 0x14045FCE4
 * Callers:
 *     sub_1402AB040 @ 0x1402AB040 (sub_1402AB040.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

char __fastcall sub_14045FCE4(PEVENT_DATA_DESCRIPTOR UserData, ULONG UserDataCount, __int16 a3, const GUID *a4)
{
  ULONG v4; // edi
  char result; // al
  __int64 *v9; // rbx
  REGHANDLE v10; // rsi

  v4 = 0;
  result = a3 - 64;
  switch ( a3 )
  {
    case 1088:
      v9 = qword_140038150;
      goto LABEL_25;
    case 1089:
      v9 = qword_140037F80;
      goto LABEL_25;
    case 1090:
      v9 = qword_140037D78;
      goto LABEL_25;
    case 1091:
      v4 = 1;
      v9 = qword_140037C38;
      goto LABEL_25;
    case 1092:
      v4 = 1;
      v9 = qword_140038E10;
      goto LABEL_25;
    case 1093:
      v9 = qword_140037D48;
      goto LABEL_25;
    case 1094:
      v9 = &qword_140039CD0;
      goto LABEL_25;
    case 1095:
      v9 = qword_140039110;
      goto LABEL_25;
    case 1096:
      v9 = qword_140037B90;
      goto LABEL_25;
    case 1097:
      v9 = qword_140037CD0;
      goto LABEL_25;
    case 1098:
      v9 = qword_140038118;
      goto LABEL_25;
    case 1099:
      v9 = qword_140039518;
      goto LABEL_25;
    case 1100:
      v4 = 1;
      v9 = (__int64 *)&stru_140038F28;
      goto LABEL_25;
    case 1101:
      v9 = qword_140038B90;
      goto LABEL_25;
    case 1102:
      v9 = qword_140038D40;
      goto LABEL_25;
    case 1103:
      v9 = qword_140039310;
      goto LABEL_25;
    case 1104:
      v9 = qword_140038B10;
      goto LABEL_25;
    case 1105:
      v9 = qword_1400399A0;
      goto LABEL_25;
    case 1106:
      v9 = qword_1400399C8;
      goto LABEL_25;
    case 1107:
      v9 = qword_140038760;
      goto LABEL_25;
    case 1108:
      v9 = qword_140039AC0;
      goto LABEL_25;
    case 1109:
      v9 = qword_140039AA0;
      goto LABEL_25;
    case 1110:
      v9 = qword_1400398E0;
LABEL_25:
      v10 = qword_140C16010;
      result = EtwEventEnabled(qword_140C16010, (PCEVENT_DESCRIPTOR)v9);
      if ( result )
        result = EtwWriteEx(v10, (PCEVENT_DESCRIPTOR)v9, 0LL, v4, a4, 0LL, UserDataCount, UserData);
      break;
    default:
      return result;
  }
  return result;
}
