/*
 * XREFs of ?get_Offset@Api@PointLight@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x18017ABD0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::PointLight::Api::get_Offset(
        Windows::UI::Composition::PointLight::Api *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  unsigned int v2; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v2 = 0;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  *(_DWORD *)a2 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 30);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 232) & 2) != 0 )
  {
    *(_QWORD *)a2 = *((_QWORD *)this + 4);
    *((_DWORD *)a2 + 2) = *((_DWORD *)this + 10);
  }
  else
  {
    v2 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v2;
}
