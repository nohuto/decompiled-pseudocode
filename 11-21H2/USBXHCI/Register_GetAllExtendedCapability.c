/*
 * XREFs of Register_GetAllExtendedCapability @ 0x1C0018104
 * Callers:
 *     Wmi_CreateControllerCapabilities @ 0x1C00117FC (Wmi_CreateControllerCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     XilRegister_ReadBufferUlong @ 0x1C00181E8 (XilRegister_ReadBufferUlong.c)
 */

void __fastcall Register_GetAllExtendedCapability(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  int Ulong; // eax
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // edx

  v2 = *(unsigned int **)(a1 + 56);
  if ( v2 )
  {
    while ( 1 )
    {
      Ulong = XilRegister_ReadUlong(a1, v2);
      *(_DWORD *)a2 = Ulong;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v9 = *(unsigned __int8 *)(a2 + 1);
        LOBYTE(v9) = 5;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v9,
          6,
          71,
          (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
          Ulong,
          *(_BYTE *)(a2 + 1));
      }
      if ( (unsigned __int8)*(_DWORD *)a2 == 1 )
        break;
      if ( (unsigned __int8)*(_DWORD *)a2 == 2 )
      {
        XilRegister_ReadBufferUlong(a1, v2, a2, 4LL);
        v7 = *(_DWORD *)(a2 + 8) >> 28;
        if ( (_DWORD)v7 )
        {
          v8 = a2 + 16;
LABEL_12:
          XilRegister_ReadBufferUlong(a1, v2, v8, v7);
        }
      }
      if ( !*(_BYTE *)(a2 + 1) )
        return;
      v6 = 4LL * *(unsigned __int8 *)(a2 + 1);
      v2 = (unsigned int *)((char *)v2 + v6);
      if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 20) )
        return;
      a2 += v6;
    }
    v7 = 2LL;
    v8 = a2;
    goto LABEL_12;
  }
}
