/*
 * XREFs of ?OnConnected@LightDismissClientProxy@@MEAAJXZ @ 0x180171F60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@QEAAPEAPEAVLightDismissClientProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x1801722D8 (--$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@-$vector@PEAVLightDismissClientProxy@@V-.c)
 */

__int64 __fastcall LightDismissClientProxy::OnConnected(LightDismissClientProxy *this)
{
  LightDismissClientProxy *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = this;
  if ( qword_180268DE0 == qword_180268DE8 )
  {
    std::vector<LightDismissClientProxy *>::_Emplace_reallocate<LightDismissClientProxy * const &>(
      this,
      qword_180268DE0,
      &v2);
  }
  else
  {
    *(_QWORD *)qword_180268DE0 = this;
    qword_180268DE0 += 8LL;
  }
  return 0LL;
}
