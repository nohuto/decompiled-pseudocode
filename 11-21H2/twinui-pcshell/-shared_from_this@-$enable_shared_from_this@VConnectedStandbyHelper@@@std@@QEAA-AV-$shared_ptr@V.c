/*
 * XREFs of ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1801A8F88
 * Callers:
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1800E12A8 (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompThumbnailAnimation@@_N@Z @ 0x18049D468 (-SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompTh.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18009A154 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x1803F95F4 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::enable_shared_from_this<ConnectedStandbyHelper>::shared_from_this(__int64 a1, _QWORD *a2)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // r9

  *a2 = 0LL;
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  a2[1] = 0LL;
  if ( !v2 || !std::_Ref_count_base::_Incref_nz(v2) )
    std::_Throw_bad_weak_ptr();
  *v3 = *v4;
  v3[1] = v4[1];
  return v3;
}
