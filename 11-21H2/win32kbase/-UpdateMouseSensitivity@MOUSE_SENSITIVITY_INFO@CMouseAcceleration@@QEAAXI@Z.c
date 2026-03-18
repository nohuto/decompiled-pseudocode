/*
 * XREFs of ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C00BE5B4
 * Callers:
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C00BE518 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     UpdateMouseSensitivity @ 0x1C00BE580 (UpdateMouseSensitivity.c)
 *     UnpackMouseSettings @ 0x1C01E8C74 (UnpackMouseSettings.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ebx

  v3 = a2;
  if ( (unsigned int)(a2 - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  *(_DWORD *)this = v3;
  if ( v3 <= 2 )
  {
    v6 = (8 * v3) & 0x7FFFFFF;
  }
  else
  {
    v5 = v3 << 8;
    if ( v3 > 0xA )
      v6 = (v5 - 1536) >> 2;
    else
      v6 = (v5 - 512) >> 3;
  }
  *((_DWORD *)this + 1) = v6;
}
