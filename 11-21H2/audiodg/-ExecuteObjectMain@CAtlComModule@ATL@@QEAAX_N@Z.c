/*
 * XREFs of ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14002C2D4
 * Callers:
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14002C1EC (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     ??1?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ @ 0x140050A58 (--1-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::ExecuteObjectMain(ATL::CAtlComModule *this, char a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rax

  v2 = qword_1400C1330;
  v4 = qword_1400C1338;
  while ( v2 < v4 )
  {
    if ( *(_QWORD *)v2 )
    {
      LOBYTE(this) = a2;
      (*(void (__fastcall **)(ATL::CAtlComModule *))(*(_QWORD *)v2 + 64LL))(this);
      v4 = qword_1400C1338;
    }
    v2 += 8LL;
  }
}
