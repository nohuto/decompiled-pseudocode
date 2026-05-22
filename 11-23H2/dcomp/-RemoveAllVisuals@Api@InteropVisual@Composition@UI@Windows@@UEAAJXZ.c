/*
 * XREFs of ?RemoveAllVisuals@Api@InteropVisual@Composition@UI@Windows@@UEAAJXZ @ 0x180157EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ @ 0x18000F4C8 (-RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropVisual::Api::RemoveAllVisuals(
        Windows::UI::Composition::InteropVisual::Api *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v3; // edi
  unsigned int v4; // edx
  int v5; // ecx
  int v6; // eax

  v1 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 34);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v1);
  if ( (*((_BYTE *)this - 264) & 2) != 0 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      v3 = -2147024891;
      v4 = 308;
      v5 = -2147024891;
    }
    else
    {
      v6 = Windows::UI::Composition::Visual::RemoveAllChildren((Windows::UI::Composition::InteropVisual::Api *)((char *)this - 296));
      v3 = v6;
      if ( v6 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v4 = 311;
      v5 = v6;
    }
    DoStackCaptureDirect(v5, v4);
    goto LABEL_9;
  }
  v3 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v1);
  return v3;
}
