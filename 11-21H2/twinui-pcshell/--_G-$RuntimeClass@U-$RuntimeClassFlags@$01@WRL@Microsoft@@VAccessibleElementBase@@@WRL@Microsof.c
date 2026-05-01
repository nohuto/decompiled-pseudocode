/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VAccessibleElementBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804CC580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  *((_DWORD *)a1 + 33) = -1073741823;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a1 + 14);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
