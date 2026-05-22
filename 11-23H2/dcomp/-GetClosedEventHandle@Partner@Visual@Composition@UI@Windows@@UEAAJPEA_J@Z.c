/*
 * XREFs of ?GetClosedEventHandle@Partner@Visual@Composition@UI@Windows@@UEAAJPEA_J@Z @ 0x18010B350
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetClosedEventHandle@Visual@Composition@UI@Windows@@QEAAJPEAPEAX@Z @ 0x18010B3EC (-GetClosedEventHandle@Visual@Composition@UI@Windows@@QEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::GetClosedEventHandle(
        Windows::UI::Composition::Visual::Partner *this,
        void **a2)
{
  Windows::UI::Composition::Visual *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int ClosedEventHandle; // eax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::Visual::Partner *)((char *)this - 232);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 26);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    ClosedEventHandle = Windows::UI::Composition::Visual::GetClosedEventHandle(v2, &v8);
    v5 = ClosedEventHandle;
    if ( ClosedEventHandle < 0 )
    {
      DoStackCaptureDirect(ClosedEventHandle, 0xC2Bu);
    }
    else
    {
      v5 = 0;
      *a2 = v8;
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
