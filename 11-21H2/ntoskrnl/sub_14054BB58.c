/*
 * XREFs of sub_14054BB58 @ 0x14054BB58
 * Callers:
 *     sub_140547570 @ 0x140547570 (sub_140547570.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054BF10 @ 0x14054BF10 (sub_14054BF10.c)
 */

__int64 __fastcall sub_14054BB58(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rcx
  ULONG v4; // edx
  ULONG *v5; // r10
  __int64 v6; // r11
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // r9
  __int64 v8; // r8
  ULONG v9; // eax
  _DWORD v10[4]; // [rsp+20h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF

  result = dword_140D068B8;
  if ( (dword_140D068B8 & 1) != 0 && *(_BYTE *)a1 )
  {
    switch ( *(_WORD *)(a1 + 2) )
    {
      case 1:
        v3 = (__int64 *)&stru_14003AE68;
        break;
      case 2:
        v3 = qword_14003ADD8;
        break;
      case 3:
        v3 = qword_14003AEC8;
        break;
      case 4:
        v3 = qword_14003AD98;
        v4 = 1;
        v10[0] = 1;
        goto LABEL_17;
      case 5:
        v3 = qword_14003AEA8;
        v10[2] = 8;
        v4 = 3;
LABEL_16:
        v10[1] = 8;
        v10[0] = 8;
LABEL_17:
        v5 = v10;
        v6 = v4;
        p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
        v8 = a1 + 8;
        do
        {
          p_Reserved->Reserved = 0;
          v9 = *v5++;
          *(_QWORD *)&p_Reserved[-3].Reserved = v8;
          v8 += 8LL;
          p_Reserved[-1].Reserved = v9;
          p_Reserved += 4;
          --v6;
        }
        while ( v6 );
        return sub_14054BF10((PCEVENT_DESCRIPTOR)v3, v4, &UserData);
      case 6:
        v3 = qword_14003AE08;
        break;
      default:
        return result;
    }
    v4 = 2;
    goto LABEL_16;
  }
  return result;
}
