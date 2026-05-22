/*
 * XREFs of ?DisableD2DStatePreservation@CDevice@DirectComposition@@UEAAJXZ @ 0x18008E370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::DisableD2DStatePreservation(DirectComposition::CDevice *this)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *((_QWORD *)this + 73);
  v2 = 0;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 352) || *(_QWORD *)(*(_QWORD *)(v1 + 312) + 16LL) )
      return (unsigned int)-2147418113;
    else
      *(_BYTE *)(v1 + 354) = 1;
  }
  return v2;
}
