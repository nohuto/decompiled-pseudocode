/*
 * XREFs of ?CalcProcessorUtilityPercentage@Cpu@@QEAAN_K0@Z @ 0x180413220
 * Callers:
 *     ?UpdateCpuQuery@Cpu@@QEAAJPEAN@Z @ 0x180413690 (-UpdateCpuQuery@Cpu@@QEAAJPEAN@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall Cpu::CalcProcessorUtilityPercentage(Cpu *this, unsigned __int64 a2, __int64 a3)
{
  double v3; // xmm0_8
  double v4; // xmm1_8

  if ( !a3 || a2 > 100 * a3 )
    return DOUBLE_100_0;
  if ( (a2 & 0x8000000000000000uLL) != 0LL )
    v3 = (double)(int)(a2 & 1 | (a2 >> 1)) + (double)(int)(a2 & 1 | (a2 >> 1));
  else
    v3 = (double)(int)a2;
  if ( a3 < 0 )
    v4 = (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1)) + (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1));
  else
    v4 = (double)(int)a3;
  return v3 / v4;
}
