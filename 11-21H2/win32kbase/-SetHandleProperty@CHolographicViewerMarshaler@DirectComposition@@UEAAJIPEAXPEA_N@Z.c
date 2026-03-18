/*
 * XREFs of ?SetHandleProperty@CHolographicViewerMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C022E010
 * Callers:
 *     <none>
 * Callees:
 *     CallerHasScreenDuplicationCapability @ 0x1C022DC98 (CallerHasScreenDuplicationCapability.c)
 */

__int64 __fastcall DirectComposition::CHolographicViewerMarshaler::SetHandleProperty(
        DirectComposition::CHolographicViewerMarshaler *this,
        __int64 a2,
        void *a3,
        bool *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( (_DWORD)a2 == 3 )
  {
    if ( (*((_DWORD *)this + 17) & 8) != 0 || !a3 )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      *((_QWORD *)this + 14) = a3;
      *((_QWORD *)this + 17) = PsGetCurrentProcess(this, a2, a3, a4);
      if ( CallerHasScreenDuplicationCapability() )
        *((_DWORD *)this + 33) |= 1u;
      *((_DWORD *)this + 17) |= 8u;
      *a4 = 1;
    }
  }
  return v4;
}
