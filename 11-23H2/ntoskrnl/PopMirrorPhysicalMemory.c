/*
 * XREFs of PopMirrorPhysicalMemory @ 0x140AA39C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x14022DA00 (RtlClearBits.c)
 */

__int64 __fastcall PopMirrorPhysicalMemory(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdx
  ULONG v4; // r8d

  v2 = 0;
  if ( qword_140C3D100 )
  {
    v3 = a2 + 4095;
    v4 = (v3 >> 12) + 1;
    if ( v3 >= 0x1000 )
      v4 = v3 >> 12;
    RtlClearBits((PRTL_BITMAP)(qword_140C3D100 + 48), a1 >> 12, v4);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
