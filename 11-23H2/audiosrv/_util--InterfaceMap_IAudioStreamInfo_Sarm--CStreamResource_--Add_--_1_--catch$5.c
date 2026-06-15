/*
 * XREFs of _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::catch$5 @ 0x180133C37
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 184);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 248) = *v3;
  return 0LL;
}
