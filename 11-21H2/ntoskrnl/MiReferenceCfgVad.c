/*
 * XREFs of MiReferenceCfgVad @ 0x14075876C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14070A4FC (MmInitializeProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x140755A24 (MiCfgInitializeProcess.c)
 * Callees:
 *     MiUnlockVadShared @ 0x140280EF8 (MiUnlockVadShared.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 */

_QWORD *__fastcall MiReferenceCfgVad(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  int v11; // eax
  int v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 184);
  v7 = 32LL * a3;
  v8 = *(_QWORD *)(v3 + 1680);
  v9 = MiObtainReferencedVadEx(a2, 2, &v13);
  v10 = *(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32);
  *(_QWORD *)(v7 + v8 + 440) = v9;
  *(_QWORD *)(v7 + v8 + 424) = a2;
  v11 = 0;
  *(_DWORD *)(v7 + v8 + 448) = 0;
  *(_QWORD *)(v7 + v8 + 432) = ((v10 + 1) << 12) - a2;
  if ( a3 == 1 )
  {
    LOBYTE(v11) = *(_WORD *)(v3 + 2412) == 452;
    *(_DWORD *)(v7 + v8 + 448) = v11;
  }
  return MiUnlockVadShared(a1, v9);
}
