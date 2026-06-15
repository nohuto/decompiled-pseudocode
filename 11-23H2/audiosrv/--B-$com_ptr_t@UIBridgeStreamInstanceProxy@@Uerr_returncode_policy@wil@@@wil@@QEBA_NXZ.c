/*
 * XREFs of ??B?$com_ptr_t@UIBridgeStreamInstanceProxy@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x180104F50
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180012FE0 (-StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180039B90 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::com_ptr_t<IBridgeStreamInstanceProxy,wil::err_returncode_policy>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}
