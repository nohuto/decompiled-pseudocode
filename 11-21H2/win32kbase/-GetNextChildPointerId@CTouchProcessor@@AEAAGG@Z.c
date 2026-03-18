/*
 * XREFs of ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x1C01C91D8
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C01C381C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextChildPointerId(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // bx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // ax

  v3 = a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !v3 )
  {
    v3 = *((_WORD *)this + 48);
    v5 = v3;
    if ( !v3 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
      v5 = *((_WORD *)this + 48);
    }
    v6 = v5 + 1;
    *((_WORD *)this + 48) = v6;
    if ( v6 < 0x4000u )
      *((_WORD *)this + 48) = 0x4000;
  }
  return v3;
}
