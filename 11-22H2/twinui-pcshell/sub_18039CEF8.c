/*
 * XREFs of sub_18039CEF8 @ 0x18039CEF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18039CEF8(volatile __int32 *a1)
{
  char v1; // of
  __int32 v2; // ebx
  __int64 v3; // rsi
  __int16 v4; // fps

  if ( !v1 )
    JUMPOUT(0x18039CF53LL);
  *(_WORD *)(v3 - 122) = v4;
  _InterlockedExchange(a1, v2);
  return Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::InsertAt();
}
