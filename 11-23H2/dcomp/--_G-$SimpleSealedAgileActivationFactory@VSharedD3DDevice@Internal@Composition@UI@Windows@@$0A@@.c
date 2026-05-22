/*
 * XREFs of ??_G?$SimpleSealedAgileActivationFactory@VSharedD3DDevice@Internal@Composition@UI@Windows@@$0A@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800A1290
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall Microsoft::WRL::SimpleSealedAgileActivationFactory<Windows::UI::Composition::Internal::SharedD3DDevice,0>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  *((_DWORD *)a1 + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
