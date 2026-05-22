/*
 * XREFs of ?OnConnected@LightDismissClientProxy@@MEAAJXZ @ 0x18017FD70
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@QEAAPEAPEAVLightDismissClientProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x1801800E8 (--$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@-$vector@PEAVLightDismissClientProxy@@V-.c)
 */

__int64 __fastcall LightDismissClientProxy::OnConnected(LightDismissClientProxy *this)
{
  LightDismissClientProxy *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = this;
  if ( qword_180278160 == qword_180278168 )
  {
    std::vector<LightDismissClientProxy *>::_Emplace_reallocate<LightDismissClientProxy * const &>(
      this,
      qword_180278160,
      &v2);
  }
  else
  {
    *(_QWORD *)qword_180278160 = this;
    qword_180278160 += 8LL;
  }
  return 0LL;
}
