/*
 * XREFs of ?CanIncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAA_NPEAULampUpdateState@@@Z @ 0x1800D9800
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800D20F4 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HidLampRangeUpdateReportBuilder::CanIncludeInNextUpdate(
        HidLampRangeUpdateReportBuilder *this,
        struct LampUpdateState *a2)
{
  int v3; // eax
  char v4; // r11
  char v5; // r10
  char v6; // r9
  char v7; // r8
  char v8; // cl

  if ( !*((_BYTE *)this + 16) )
    return 1;
  v3 = *((_DWORD *)this + 7);
  v4 = *((_BYTE *)this + 32);
  v5 = *((_BYTE *)this + 33);
  v6 = *((_BYTE *)this + 34);
  v7 = *((_BYTE *)this + 35);
  v8 = 1;
  if ( *(_DWORD *)a2 != v3 + 1
    || *((_BYTE *)a2 + 4) != v4
    || *((_BYTE *)a2 + 5) != v5
    || *((_BYTE *)a2 + 6) != v6
    || *((_BYTE *)a2 + 7) != v7 )
  {
    return 0;
  }
  return v8;
}
