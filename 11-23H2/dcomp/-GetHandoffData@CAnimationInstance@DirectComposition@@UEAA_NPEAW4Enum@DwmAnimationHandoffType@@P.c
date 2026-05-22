/*
 * XREFs of ?GetHandoffData@CAnimationInstance@DirectComposition@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x1800E8B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CAnimationInstance::GetHandoffData(
        DirectComposition::CAnimationInstance *this,
        enum DwmAnimationHandoffType::Enum *a2,
        float *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // rax

  v4 = 0LL;
  if ( *((_BYTE *)this + 188) )
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 34);
    *a3 = *((float *)this + 46);
    v4 = *((_QWORD *)this + 18);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *a3 = 0.0;
  }
  *a4 = v4;
  return 1;
}
