/*
 * XREFs of ?StopIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ @ 0x180093450
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?Cancel@Tween@Tweening@Utils@Spectre@@QEAAXXZ @ 0x180092248 (-Cancel@Tween@Tweening@Utils@Spectre@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ViewerCamera::StopIdleRotation(Spectre::Engine::ViewerCamera *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  Spectre::Utils::Tweening::Tween **v5; // r10
  _QWORD *v6; // r10
  std::_Ref_count_base *v7[2]; // [rsp+20h] [rbp-18h] BYREF

  if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)this + 223) )
  {
    Spectre::Utils::Tweening::Tween::Cancel(*v5, v2, v3, v4);
    *(_OWORD *)v7 = 0LL;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v6, (__int64 *)v7);
    if ( v7[1] )
      std::_Ref_count_base::_Decref(v7[1]);
  }
  *((_BYTE *)this + 1898) = 0;
}
