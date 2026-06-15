/*
 * XREFs of _CAppAudioSessionId::Copy_::_1_::catch$0 @ 0x18006C9C5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppAudioSessionId::Copy_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 32);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 128) = *v3;
  return 0LL;
}
