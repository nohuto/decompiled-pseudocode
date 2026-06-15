/*
 * XREFs of std::_Func_impl_no_alloc__lambda_fdb92b12402549453a208951f74be6cd__void_::_Do_call @ 0x1800DB450
 * Callers:
 *     <none>
 * Callees:
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18000FDF4 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_fdb92b12402549453a208951f74be6cd__void_::_Do_call(__int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CPerStreamVolumeAudioSession::PersistSessionConfiguration(*(CPerStreamVolumeAudioSession **)(a1 + 8));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10B5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v1);
}
