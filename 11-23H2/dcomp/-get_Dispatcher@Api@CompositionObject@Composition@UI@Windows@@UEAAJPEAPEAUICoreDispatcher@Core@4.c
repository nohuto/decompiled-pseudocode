/*
 * XREFs of ?get_Dispatcher@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUICoreDispatcher@Core@45@@Z @ 0x180109DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UICoreDispatcher@Core@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUICoreDispatcher@Core@UI@Windows@@@Z @ 0x1801094FC (--4-$ComPtr@UICoreDispatcher@Core@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUICoreDispatcher@Co.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Api::get_Dispatcher(
        Windows::UI::Composition::CompositionObject::Api *this,
        struct Windows::UI::Core::ICoreDispatcher **a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rdx
  struct Windows::UI::Core::ICoreDispatcher *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    v6 = *((_QWORD *)this - 2);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Core::ICoreDispatcher>::operator=((__int64 *)&v8, *(_QWORD *)(v6 + 488));
    *a2 = v8;
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v8);
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
