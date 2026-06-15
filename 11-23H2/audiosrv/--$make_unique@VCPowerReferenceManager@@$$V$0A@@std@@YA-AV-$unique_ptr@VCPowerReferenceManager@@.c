/*
 * XREFs of ??$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@0@XZ @ 0x1800585B0
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180058230 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005889C (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CPowerReferenceManager **__fastcall std::make_unique<CPowerReferenceManager,,0>(CPowerReferenceManager **a1)
{
  CPowerReferenceManager *v2; // rbx
  CPowerReferenceManager *v3; // rax
  CPowerReferenceManager *v4; // rsi

  v2 = 0LL;
  v3 = (CPowerReferenceManager *)operator new(0x300uLL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x300uLL);
    v2 = CPowerReferenceManager::CPowerReferenceManager(v4);
  }
  *a1 = v2;
  return a1;
}
