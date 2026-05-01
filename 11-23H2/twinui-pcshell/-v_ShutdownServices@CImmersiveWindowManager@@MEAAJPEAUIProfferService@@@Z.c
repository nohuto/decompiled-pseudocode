/*
 * XREFs of ?v_ShutdownServices@CImmersiveWindowManager@@MEAAJPEAUIProfferService@@@Z @ 0x1801BD4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CImmersiveWindowManager::v_ShutdownServices(
        CImmersiveWindowManager *this,
        struct IProfferService *a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 i; // rbx

  v2 = *((_QWORD *)this + 19);
  for ( i = 0LL; i < v2; ++i )
    IUnknown_SetSite(*(IUnknown **)(*((_QWORD *)this + 18) + 8 * i), 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 23);
  return 0LL;
}
