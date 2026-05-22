/*
 * XREFs of ?get_ParentForTransform@Api@Visual@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z @ 0x18010CD80
 * Callers:
 *     <none>
 * Callees:
 *     ??$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001C0BC (--$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V-$ComPtrR.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetParentForTransform@Visual@Composition@UI@Windows@@QEAAPEAV1234@XZ @ 0x18010B4D4 (-GetParentForTransform@Visual@Composition@UI@Windows@@QEAAPEAV1234@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::get_ParentForTransform(
        Windows::UI::Composition::Visual::Api *this,
        struct Windows::UI::Composition::IVisual **a2)
{
  Windows::UI::Composition::Visual *v2; // rsi
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  Microsoft::WRL2::NestableRuntimeClass *ParentForTransform; // rax
  struct Windows::UI::Composition::IVisual *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::Visual::Api *)((char *)this - 176);
  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 19);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    ParentForTransform = Windows::UI::Composition::Visual::GetParentForTransform(v2);
    Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(ParentForTransform, (__int64 *)&v8);
    *a2 = v8;
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
