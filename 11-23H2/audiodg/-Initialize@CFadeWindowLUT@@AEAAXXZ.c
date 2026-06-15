/*
 * XREFs of ?Initialize@CFadeWindowLUT@@AEAAXXZ @ 0x14000DA54
 * Callers:
 *     ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140005CEC (--0CCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     powf @ 0x1400291D4 (powf.c)
 */

void __fastcall CFadeWindowLUT::Initialize(CFadeWindowLUT *this)
{
  int v2; // ecx
  unsigned int i; // edi
  float v4; // xmm0_4
  __int64 v5; // rax

  *(_DWORD *)this = 1065353216;
  v2 = *((_DWORD *)this + 36);
  for ( i = 1; i < v2 + 1; v2 = *((_DWORD *)this + 36) )
  {
    v4 = powf(1.0 - (float)((float)(int)i / (float)v2), 1.75);
    *((float *)this + i) = v4;
    v5 = i++ - 1;
    *((float *)this + v5 + 17) = *((float *)this + v5) - v4;
  }
  *((_DWORD *)this + i + 16) = 0;
}
