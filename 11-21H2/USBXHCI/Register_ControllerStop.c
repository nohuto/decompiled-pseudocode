/*
 * XREFs of Register_ControllerStop @ 0x1C000D898
 * Callers:
 *     Controller_D0Exit @ 0x1C000DC0C (Controller_D0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_BiosHandoff @ 0x1C0013F1C (Register_BiosHandoff.c)
 *     Controller_InitiateRecovery @ 0x1C0031E70 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C00321C8 (Controller_InternalReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0004288 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_ControllerStop(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rbx
  int Ulong; // eax
  int i; // r14d
  int v6; // edx
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  Interval.QuadPart = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4,
      6,
      57,
      (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    Ulong = XilRegister_ReadUlong(a1, v3);
    XilRegister_WriteUlong(a1, v3, Ulong & 0xFFFFFFFE);
    for ( i = 16; ; --i )
    {
      if ( (XilRegister_ReadUlong(a1, v3 + 4) & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v6,
            6,
            58,
            (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
            16 - i,
            1);
        }
        return v1;
      }
      if ( !i )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v6,
        6,
        59,
        (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
        16);
    }
    return (unsigned int)-1073741823;
  }
  return v1;
}
