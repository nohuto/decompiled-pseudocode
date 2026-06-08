/*
 * XREFs of ValidateAcpiCPC @ 0x1C0026978
 * Callers:
 *     InitAcpiCpc @ 0x1C0026EAC (InitAcpiCpc.c)
 * Callees:
 *     CpcRegisterIsSupportedEx @ 0x1C0002474 (CpcRegisterIsSupportedEx.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002544 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000414C (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall ValidateAcpiCPC(int *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // r15d
  int v4; // edx
  bool v5; // cc
  const char **v6; // r14
  unsigned int v7; // r12d
  int v8; // ebx
  unsigned __int8 *v9; // rdx
  int v10; // eax
  _BYTE *v11; // rcx
  __int64 v12; // r10
  int v14; // eax
  int v15; // eax
  unsigned __int16 v16; // r9
  __int64 v17; // [rsp+28h] [rbp-30h]

  v1 = a1[1];
  v2 = 21;
  if ( v1 == 1 )
  {
    v4 = *a1;
    if ( *a1 != 17 )
      goto LABEL_33;
  }
  else if ( v1 == 2 )
  {
    v4 = *a1;
    if ( *a1 != 21 )
      goto LABEL_33;
    v5 = 1;
    goto LABEL_6;
  }
  v5 = v1 <= 3;
  if ( v1 == 3 )
  {
    v4 = *a1;
    if ( *a1 == 23 )
      goto LABEL_31;
    goto LABEL_33;
  }
LABEL_6:
  if ( v5 )
  {
    if ( v1 == 1 )
    {
      v2 = 15;
      v6 = (const char **)&unk_1C000F0E0;
      goto LABEL_10;
    }
    if ( v1 == 2 )
    {
      v2 = 19;
      v6 = (const char **)&unk_1C000F250;
LABEL_10:
      v7 = 0;
      while ( 1 )
      {
        v8 = 0;
        v9 = (unsigned __int8 *)a1 + *((unsigned int *)v6 - 4);
        v10 = *v9;
        if ( (_BYTE)v10 || *(_QWORD *)(v9 + 4) )
        {
          if ( v10 != 1 )
          {
            if ( v10 != 10 )
            {
              if ( v10 == 126 )
              {
                if ( !*(_BYTE *)v6 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v16 = 57;
LABEL_50:
                    WPP_RECORDER_SF_s(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      2u,
                      1u,
                      v16,
                      (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
                      *(v6 - 1));
                  }
                  return (unsigned int)-1073741811;
                }
              }
              else
              {
                if ( v10 != 127 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_s(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      2u,
                      1u,
                      0x3Au,
                      (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
                      *(v6 - 1));
                  return (unsigned int)-1073741637;
                }
                if ( v9[3] != 64 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v16 = 55;
                    goto LABEL_50;
                  }
                  return (unsigned int)-1073741811;
                }
                if ( !*(_QWORD *)(v9 + 4) )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v16 = 56;
                    goto LABEL_50;
                  }
                  return (unsigned int)-1073741811;
                }
              }
            }
            goto LABEL_18;
          }
          if ( *((_DWORD *)v9 + 2)
            || (v14 = *((_DWORD *)v9 + 1), (v14 & 0xFFFF0000) != 0)
            || !v14
            || (v15 = v9[1], !(_BYTE)v15)
            || v15 + (unsigned int)v9[2] > v9[3] )
          {
            v8 = -1073741811;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0x36u,
                (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
                *(v6 - 1));
              return (unsigned int)v8;
            }
          }
        }
        else if ( !*((_BYTE *)v6 + 1) )
        {
          v8 = -1073741811;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x35u,
              (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
              *(v6 - 1));
        }
        if ( v8 < 0 )
          return (unsigned int)v8;
LABEL_18:
        ++v7;
        v6 += 3;
        if ( v7 >= v2 )
        {
          if ( CpcRegisterIsSupportedEx((__int64)(a1 + 32)) || *v11 == 126 || *(_QWORD *)(a1 + 33) == v12 )
            return 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v17) = KeGetPcr()->Prcb.Number;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              v12,
              0x34u,
              (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
              v17);
          }
          return (unsigned int)-1073741823;
        }
      }
    }
LABEL_31:
    v6 = (const char **)&unk_1C000F420;
    goto LABEL_10;
  }
  v4 = *a1;
  if ( (unsigned int)*a1 >= 0x17 )
    goto LABEL_31;
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x33u,
      (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
      KeGetPcr()->Prcb.Number,
      v4);
  return (unsigned int)-1073741823;
}
