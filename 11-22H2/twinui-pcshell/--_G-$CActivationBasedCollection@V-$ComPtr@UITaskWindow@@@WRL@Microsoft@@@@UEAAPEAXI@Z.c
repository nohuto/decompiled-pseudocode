/*
 * XREFs of ??_G?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAPEAXI@Z @ 0x1803AAAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

char *__fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`scalar deleting destructor'(
        char *a1,
        char a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 i; // rsi

  *(_QWORD *)a1 = &CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`vftable';
  v3 = (unsigned __int64 *)(a1 + 16);
  if ( *((_QWORD *)a1 + 1) )
  {
    for ( i = 0LL; i < *v3; ++i )
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(*((_QWORD *)a1 + 1) + 8 * i));
    CoTaskMemFree(*((LPVOID *)a1 + 1));
    *((_QWORD *)a1 + 1) = 0LL;
  }
  *v3 = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
