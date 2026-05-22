/*
 * XREFs of ??$make_unique@VMPCButtonHoldHelper@@AEBM$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@AEBM@Z @ 0x1801DC2D4
 * Callers:
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801DE030 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801E3A70 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x1800C8774 (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 */

MPCButtonHoldHelper **__fastcall std::make_unique<MPCButtonHoldHelper,float const &,0>(
        MPCButtonHoldHelper **a1,
        float *a2)
{
  __int64 v4; // r8
  const char *v5; // r9
  MPCButtonHoldHelper *v7; // [rsp+40h] [rbp+8h]

  v7 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  *a1 = MPCButtonHoldHelper::MPCButtonHoldHelper(v7, *a2, v4, v5);
  return a1;
}
