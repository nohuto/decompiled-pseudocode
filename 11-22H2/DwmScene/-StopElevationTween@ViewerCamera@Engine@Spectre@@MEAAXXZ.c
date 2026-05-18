/*
 * XREFs of ?StopElevationTween@ViewerCamera@Engine@Spectre@@MEAAXXZ @ 0x1800933F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?Cancel@Tween@Tweening@Utils@Spectre@@QEAAXXZ @ 0x180092248 (-Cancel@Tween@Tweening@Utils@Spectre@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ViewerCamera::StopElevationTween(Spectre::Engine::ViewerCamera *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  Spectre::Utils::Tweening::Tween **v4; // r10
  _QWORD *v5; // r10
  std::_Ref_count_base *v6[2]; // [rsp+20h] [rbp-18h] BYREF

  if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)this + 221) )
  {
    Spectre::Utils::Tweening::Tween::Cancel(*v4, v1, v2, v3);
    *(_OWORD *)v6 = 0LL;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v5, (__int64 *)v6);
    if ( v6[1] )
      std::_Ref_count_base::_Decref(v6[1]);
  }
}
