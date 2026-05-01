/*
 * XREFs of ??_G?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAPEAXI@Z @ 0x1802F2140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  *a1 = &CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`vftable';
  v4 = (void *)a1[1];
  if ( v4 )
  {
    v5 = 0LL;
    if ( a1[2] )
    {
      do
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1[1] + 8 * v5++));
      while ( v5 < a1[2] );
      v4 = (void *)a1[1];
    }
    CoTaskMemFree(v4);
    a1[1] = 0LL;
  }
  a1[2] = 0LL;
  a1[4] = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
