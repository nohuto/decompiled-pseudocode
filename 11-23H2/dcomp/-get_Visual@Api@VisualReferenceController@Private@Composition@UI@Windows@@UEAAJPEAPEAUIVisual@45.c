/*
 * XREFs of ?get_Visual@Api@VisualReferenceController@Private@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@456@@Z @ 0x18016F560
 * Callers:
 *     <none>
 * Callees:
 *     ??$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001C0BC (--$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V-$ComPtrR.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@V?$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C038 (-InternalRelease@-$ComPtr@V-$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IE.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::VisualReferenceController::Api::get_Visual(
        Windows::UI::Composition::Private::VisualReferenceController::Api *this,
        struct Windows::UI::Composition::IVisual **a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rsi
  struct Windows::UI::Composition::IVisual *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 120) & 2) != 0 )
  {
    v9 = 0LL;
    v6 = *((_QWORD *)this + 2);
    v7 = 0LL;
    if ( v6 )
    {
      v7 = *(Microsoft::WRL2::NestableRuntimeClass **)(v6 + 8);
      if ( !v7 )
        Microsoft::WRL::ComPtr<CWeakReference<Windows::UI::Composition::Visual>>::InternalRelease((CWeakReferenceBase **)this + 2);
    }
    Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(v7, (__int64 *)&v9);
    *a2 = v9;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
