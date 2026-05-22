/*
 * XREFs of ?ConvertDoubleToQPC@CAnimationBuilder@DirectComposition@@SA_JN@Z @ 0x180030EE0
 * Callers:
 *     ?End@CAnimationBuilder@DirectComposition@@UEAAJNM@Z @ 0x18000FF50 (-End@CAnimationBuilder@DirectComposition@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z @ 0x180035D80 (-AddCubic@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationBuilder@DirectComposition@@UEAAJNN@Z @ 0x180036C40 (-AddRepeat@CAnimationBuilder@DirectComposition@@UEAAJNN@Z.c)
 *     ?Seek@CAnimationInstance@DirectComposition@@UEAAJN@Z @ 0x180088570 (-Seek@CAnimationInstance@DirectComposition@@UEAAJN@Z.c)
 *     ?AddFreeze@CAnimationBuilder@DirectComposition@@UEAAJN@Z @ 0x180088600 (-AddFreeze@CAnimationBuilder@DirectComposition@@UEAAJN@Z.c)
 *     ?AddReverse@CAnimationBuilder@DirectComposition@@UEAAJN@Z @ 0x1800E83F0 (-AddReverse@CAnimationBuilder@DirectComposition@@UEAAJN@Z.c)
 *     ?AddSinusoidal@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z @ 0x1800E8490 (-AddSinusoidal@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z.c)
 *     ?SetHandoff@CAnimationBuilder@DirectComposition@@UEAAJNH@Z @ 0x1800E8620 (-SetHandoff@CAnimationBuilder@DirectComposition@@UEAAJNH@Z.c)
 *     ?AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z @ 0x1800E8900 (-AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::ConvertDoubleToQPC(double a1)
{
  double v1; // xmm1_8
  int v2; // eax
  double LowPart; // xmm0_8

  if ( a1 < 0.0 )
    v1 = DOUBLE_N0_5;
  else
    v1 = DOUBLE_0_5;
  v2 = (int)(a1 * 1024.0 + v1);
  if ( DirectComposition::CDevice::s_qpcFrequency.QuadPart < 0 )
    LowPart = (double)(int)(DirectComposition::CDevice::s_qpcFrequency.LowPart & 1 | ((unsigned __int64)DirectComposition::CDevice::s_qpcFrequency.QuadPart >> 1))
            + (double)(int)(DirectComposition::CDevice::s_qpcFrequency.LowPart & 1 | ((unsigned __int64)DirectComposition::CDevice::s_qpcFrequency.QuadPart >> 1));
  else
    LowPart = (double)(int)DirectComposition::CDevice::s_qpcFrequency.LowPart;
  return (unsigned int)(int)((double)v2 * 0.0009765625 * LowPart);
}
