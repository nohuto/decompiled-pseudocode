/*
 * XREFs of AudioDGGetStartupStatus @ 0x1400525B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioDGGetStartupStatus()
{
  if ( qword_1400CF3D0 )
    WaitForSingleObjectEx(qword_1400CF3D0, 0xFFFFFFFF, 0);
  return (unsigned int)dword_1400CF3C0;
}
