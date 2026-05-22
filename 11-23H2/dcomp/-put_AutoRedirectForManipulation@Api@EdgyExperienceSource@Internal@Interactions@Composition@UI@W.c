/*
 * XREFs of ?put_AutoRedirectForManipulation@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAJE@Z @ 0x180131A00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::Api::put_AutoRedirectForManipulation(
        Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::Api *this,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // rdi

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 34);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 264) & 2) != 0 )
  {
    v6 = *((_QWORD *)this - 6);
    v5 = 0;
    if ( v6 )
    {
      v7 = a2 == 0 ? 2 : 0;
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(v6 + 24) + 456LL),
        *(_DWORD *)(v6 + 128),
        0,
        v7);
      *(_DWORD *)(v6 + 152) = v7;
    }
    else
    {
      DoStackCaptureDirect(-2147418113, 0x121u);
      v5 = -2147418113;
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
