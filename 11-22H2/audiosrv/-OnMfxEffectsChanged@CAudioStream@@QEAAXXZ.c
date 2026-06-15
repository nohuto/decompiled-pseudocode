/*
 * XREFs of ?OnMfxEffectsChanged@CAudioStream@@QEAAXXZ @ 0x180016884
 * Callers:
 *     ?DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180016400 (-DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@@Z @ 0x1800438F0 (-ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_87bf9f13687bedce95b5ee608297e79e__void_::_Do_call @ 0x18010AE20 (std--_Func_impl_no_alloc__lambda_87bf9f13687bedce95b5ee608297e79e__void_--_Do_call.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::OnMfxEffectsChanged(CAudioStream *this, void *a2)
{
  wil::details *v2; // rcx

  v2 = (wil::details *)*((_QWORD *)this + 45);
  if ( v2 )
    wil::details::SetEvent(v2, a2);
}
