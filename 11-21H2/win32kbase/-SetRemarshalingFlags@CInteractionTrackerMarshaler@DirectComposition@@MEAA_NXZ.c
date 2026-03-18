/*
 * XREFs of ?SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0230E50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0215C04 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  char v1; // di

  *((_DWORD *)this + 4) &= 0xE40203FF;
  v1 = 0;
  *((_BYTE *)this + 464) |= 4u;
  *((_DWORD *)this + 93) = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || *((float *)this + 19) != 0.0
    || *((float *)this + 20) != 0.0
    || *((float *)this + 41) != 1.0
    || *((_DWORD *)this + 92)
    || *((_QWORD *)this + 50)
    || *((_QWORD *)this + 28)
    || *((_QWORD *)this + 29)
    || *((_QWORD *)this + 42)
    || *((_QWORD *)this + 43)
    || *((_QWORD *)this + 30)
    || *((_QWORD *)this + 31)
    || *((_QWORD *)this + 32)
    || *((_QWORD *)this + 33) )
  {
    return 1;
  }
  return v1;
}
