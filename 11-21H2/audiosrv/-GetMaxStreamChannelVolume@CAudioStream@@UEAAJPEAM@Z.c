/*
 * XREFs of ?GetMaxStreamChannelVolume@CAudioStream@@UEAAJPEAM@Z @ 0x18000E0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetMaxStreamChannelVolume(CAudioStream *this, float *a2)
{
  __int64 v2; // r9
  float v3; // xmm0_4

  v2 = 0LL;
  for ( *a2 = 0.0; (unsigned int)v2 < *((_DWORD *)this + 19); v2 = (unsigned int)(v2 + 1) )
  {
    v3 = *(float *)(*((_QWORD *)this + 12) + 4 * v2);
    if ( v3 > *a2 )
      *a2 = v3;
  }
  return 0LL;
}
