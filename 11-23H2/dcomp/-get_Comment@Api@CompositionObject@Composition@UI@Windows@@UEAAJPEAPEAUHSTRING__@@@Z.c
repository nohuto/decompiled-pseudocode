/*
 * XREFs of ?get_Comment@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180088CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetComment@CompositionObject@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x180088D2C (-GetComment@CompositionObject@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Api::get_Comment(
        Windows::UI::Composition::CompositionObject::Api *this,
        HSTRING *a2)
{
  Windows::UI::Composition::CompositionObject *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  v2 = (Windows::UI::Composition::CompositionObject::Api *)((char *)this - 48);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::CompositionObject::GetComment(v2, a2);
    v5 = 0;
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
