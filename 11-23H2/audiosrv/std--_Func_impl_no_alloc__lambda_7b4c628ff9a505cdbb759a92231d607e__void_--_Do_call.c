/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7b4c628ff9a505cdbb759a92231d607e__void_::_Do_call @ 0x180071150
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800485E0 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_7b4c628ff9a505cdbb759a92231d607e__void_::_Do_call(__int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CPerStreamVolumeAudioSession::PersistSessionConfiguration(*(CPerStreamVolumeAudioSession **)(a1 + 8));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10B3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v1);
}
