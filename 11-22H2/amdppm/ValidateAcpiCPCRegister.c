/*
 * XREFs of ValidateAcpiCPCRegister @ 0x1C002E7E4
 * Callers:
 *     ValidateAcpiCPC @ 0x1C002E600 (ValidateAcpiCPC.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C00054FC (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall ValidateAcpiCPCRegister(unsigned __int8 *a1, char a2, char a3, const char *a4)
{
  int v4; // eax
  _DWORD *v5; // r11
  unsigned int v6; // ebx
  unsigned __int16 v8; // r9
  int v9; // eax

  v4 = *a1;
  v5 = a1 + 4;
  v6 = 0;
  if ( (_BYTE)v4 || *(_QWORD *)v5 )
  {
    if ( v4 == 1 )
    {
      if ( *((_DWORD *)a1 + 2)
        || (*v5 & 0xFFFF0000) != 0
        || !*v5
        || (v9 = a1[1], !(_BYTE)v9)
        || v9 + (unsigned int)a1[2] > a1[3] )
      {
        v6 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = 54;
          goto LABEL_29;
        }
      }
    }
    else if ( v4 != 10 )
    {
      if ( v4 == 126 )
      {
        if ( !a2 )
        {
          v6 = -1073741811;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v8 = 57;
            goto LABEL_29;
          }
        }
      }
      else if ( v4 == 127 )
      {
        if ( a1[3] == 64 )
        {
          if ( !*(_QWORD *)v5 )
          {
            v6 = -1073741811;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v8 = 56;
              goto LABEL_29;
            }
          }
        }
        else
        {
          v6 = -1073741811;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v8 = 55;
            goto LABEL_29;
          }
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x3Au,
            (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
            a4);
        return (unsigned int)-1073741637;
      }
    }
  }
  else if ( !a3 )
  {
    v6 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 53;
LABEL_29:
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v8,
        (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
        a4);
    }
  }
  return v6;
}
