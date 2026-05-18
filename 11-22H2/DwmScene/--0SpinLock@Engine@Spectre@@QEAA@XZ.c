/*
 * XREFs of ??0SpinLock@Engine@Spectre@@QEAA@XZ @ 0x1800315CC
 * Callers:
 *     ??0Input@Engine@Spectre@@QEAA@XZ @ 0x18003152C (--0Input@Engine@Spectre@@QEAA@XZ.c)
 *     ??0SceneLayer@Engine@Spectre@@QEAA@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@4@@Z @ 0x18003FCA4 (--0SceneLayer@Engine@Spectre@@QEAA@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 * Callees:
 *     ?store@?$_Atomic_storage@J$03@std@@QEAAXJ@Z @ 0x180038E68 (-store@-$_Atomic_storage@J$03@std@@QEAAXJ@Z.c)
 */

__int64 __fastcall Spectre::Engine::SpinLock::SpinLock(Spectre::Engine::SpinLock *this, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  *(_DWORD *)this = 0;
  std::_Atomic_storage<long,4>::store(this, 0LL, a3, this);
  return v3;
}
