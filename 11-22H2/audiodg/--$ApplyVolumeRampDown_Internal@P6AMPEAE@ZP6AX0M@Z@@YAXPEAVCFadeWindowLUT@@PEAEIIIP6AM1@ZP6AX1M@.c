/*
 * XREFs of ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x1400089C0
 * Callers:
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x140008C30 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 * Callees:
 *     ?SetStep@CFadeWindowLUT@@QEAAXIW4FadeType@1@@Z @ 0x14000D9D8 (-SetStep@CFadeWindowLUT@@QEAAXIW4FadeType@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        void (__fastcall *a6)(__int64),
        __int64 (__fastcall *a7)(__int64))
{
  __int64 v7; // r13
  __int64 result; // rax
  unsigned int v11; // r9d
  __int64 v12; // r14
  float v13; // xmm1_4
  __int64 v14; // rsi

  v7 = a4;
  result = CFadeWindowLUT::SetStep(a1, a3, 1LL);
  if ( v11 )
  {
    v12 = v11;
    do
    {
      v13 = *(float *)(a1 + 136);
      result = (unsigned int)(int)v13;
      *(float *)(a1 + 136) = v13 + *(float *)(a1 + 140);
      if ( (_DWORD)v7 )
      {
        v14 = v7;
        do
        {
          a6(a2);
          result = a7(a2);
          a2 += (unsigned __int64)a5 >> 3;
          --v14;
        }
        while ( v14 );
      }
      --v12;
    }
    while ( v12 );
  }
  return result;
}
