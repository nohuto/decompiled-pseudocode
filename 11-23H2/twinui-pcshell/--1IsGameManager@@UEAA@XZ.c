/*
 * XREFs of ??1IsGameManager@@UEAA@XZ @ 0x18019B64C
 * Callers:
 *     ??_EIsGameManager@@UEAAPEAXI@Z @ 0x18019B610 (--_EIsGameManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     PiiFilterDelete @ 0x1800EDB2C (PiiFilterDelete.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall IsGameManager::~IsGameManager(IsGameManager *this)
{
  volatile __int64 *v2; // rdi
  __int64 v3; // rsi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  char *v7; // rcx

  *(_QWORD *)this = &IsGameManager::`vftable';
  *((_BYTE *)this + 48) = 1;
  v2 = (volatile __int64 *)&unk_180985348;
  v3 = 7LL;
  do
  {
    v4 = (void *)_InterlockedExchange64(v2, -1LL);
    if ( v4 != (void *)-1LL )
      UnregisterWaitEx(v4, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    v5 = (void *)_InterlockedExchange64(v2, -1LL);
    if ( v5 != (void *)-1LL )
      UnregisterWaitEx(v5, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    v6 = (void *)_InterlockedExchange64(v2 - 1, -1LL);
    if ( v6 != (void *)-1LL )
      FindCloseChangeNotification(v6);
    v2 += 9;
    --v3;
  }
  while ( v3 );
  IsGameManager::_pStaticThis = 0LL;
  v7 = (char *)*((_QWORD *)this + 12);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  PiiFilterDelete(*((char **)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
  if ( *((_QWORD *)this + 2) )
    FreeGameConfigStoreClient();
  *((_DWORD *)this + 3) = -1073741823;
}
