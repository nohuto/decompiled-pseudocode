/*
 * XREFs of ?GetMinStreamChannelVolume@CAudioStream@@QEAAMXZ @ 0x1800EC2BC
 * Callers:
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x18011CD3C (-CaptureState@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CAudioStream::GetMinStreamChannelVolume(CAudioStream *this)
{
  float v1; // xmm1_4
  float *v2; // rax
  __int64 v3; // rdx
  float v4; // xmm0_4

  v1 = FLOAT_1_0;
  if ( *((_DWORD *)this + 24) )
  {
    v2 = (float *)*((_QWORD *)this + 16);
    v3 = *((unsigned int *)this + 24);
    do
    {
      v4 = *v2++;
      v1 = fminf(v4, v1);
      --v3;
    }
    while ( v3 );
  }
  return v1;
}
