/*
 * XREFs of SymCryptParallelSha256Process @ 0x1403F5B70
 * Callers:
 *     KeComputeParallelSha256 @ 0x14056C210 (KeComputeParallelSha256.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14036868C (SymCryptCpuFeaturesNeverPresent.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     SymCryptParallelHashProcess @ 0x1403F6520 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403F67E0 (SymCryptParallelHashProcess_serial.c)
 *     memset @ 0x140435A00 (memset.c)
 *     SymCryptRestoreXmm @ 0x14056D1BC (SymCryptRestoreXmm.c)
 *     SymCryptRestoreYmm @ 0x14056D1D4 (SymCryptRestoreYmm.c)
 *     SymCryptSaveXmm @ 0x14056D1EC (SymCryptSaveXmm.c)
 *     SymCryptSaveYmm @ 0x14056D204 (SymCryptSaveYmm.c)
 */

__int64 __fastcall SymCryptParallelSha256Process(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // ebx
  _BYTE v12[64]; // [rsp+40h] [rbp-78h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x10) != 0
    || (unsigned int)SymCryptSaveYmm(v12) )
  {
    if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 2) != 0
      || (unsigned int)SymCryptSaveXmm(v12) )
    {
      return (unsigned int)SymCryptParallelHashProcess_serial(
                             (unsigned int)&SymCryptParallelSha256Algorithm_default,
                             a1,
                             a2,
                             a3,
                             a4,
                             a5,
                             a6);
    }
    else
    {
      v10 = SymCryptParallelHashProcess(
              (unsigned int)&SymCryptParallelSha256Algorithm_default,
              a1,
              a2,
              a3,
              a4,
              a5,
              a6,
              4);
      SymCryptRestoreXmm(v12);
    }
  }
  else
  {
    v10 = SymCryptParallelHashProcess((unsigned int)&SymCryptParallelSha256Algorithm_default, a1, a2, a3, a4, a5, a6, 8);
    SymCryptRestoreYmm(v12);
  }
  return v10;
}
