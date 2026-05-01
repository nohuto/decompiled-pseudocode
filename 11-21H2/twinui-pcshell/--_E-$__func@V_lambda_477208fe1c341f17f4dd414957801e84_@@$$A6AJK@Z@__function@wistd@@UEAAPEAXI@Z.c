/*
 * XREFs of ??_E?$__func@V_lambda_477208fe1c341f17f4dd414957801e84_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1802E1490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall wistd::__function::__func<_lambda_477208fe1c341f17f4dd414957801e84_,long (unsigned long)>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  *a1 = (__int64)&wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
