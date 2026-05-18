/*
 * XREFs of ??1?$_Temporary_owner@VSceneNode@Engine@Spectre@@@std@@QEAA@XZ @ 0x18003FE50
 * Callers:
 *     ??$?0VSceneNode@Engine@Spectre@@$0A@@?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@QEAA@PEAVSceneNode@Engine@Spectre@@@Z @ 0x18003EF90 (--$-0VSceneNode@Engine@Spectre@@$0A@@-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@QEAA@PEAVScen.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Temporary_owner<Spectre::Engine::SceneNode>::~_Temporary_owner<Spectre::Engine::SceneNode>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
