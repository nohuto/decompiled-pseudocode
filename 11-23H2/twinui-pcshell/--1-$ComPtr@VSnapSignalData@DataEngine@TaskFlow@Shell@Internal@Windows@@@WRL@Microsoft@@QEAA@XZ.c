/*
 * XREFs of ??1?$ComPtr@VSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A6E80
 * Callers:
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::CreateSnapSignalData_::_1_::dtor$0 @ 0x1804A6F7B (_Windows--Internal--Shell--TaskFlow--DataEngine--CreateSnapSignalData_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804A7020 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UISna_ea_1804A7020.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData>::~ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData>::Release(result);
  }
  return result;
}
