/*
 * XREFs of ?SetScalingFactor@CDWriteText@@UEAAXN@Z @ 0x180056570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDWriteText::SetScalingFactor(CDWriteText *this, double a2)
{
  if ( *((double *)this + 31) != a2 )
  {
    *((double *)this + 31) = a2;
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 34) + 24LL))((char *)this - 272, 4096LL);
  }
}
