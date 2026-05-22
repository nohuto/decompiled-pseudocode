/*
 * XREFs of ?put_DampingRatio@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x18017E200
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetDampingRatio@Spring@Composition@UI@Windows@@QEAAJM@Z @ 0x1801692F4 (-SetDampingRatio@Spring@Composition@UI@Windows@@QEAAJM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::SpringScalarNaturalMotionAnimation::Api::put_DampingRatio(
        Windows::UI::Composition::SpringScalarNaturalMotionAnimation::Api *this,
        float a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v4; // edi
  int v5; // eax

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 54);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 424) & 2) != 0 )
  {
    v5 = Windows::UI::Composition::Spring::SetDampingRatio(
           (Windows::UI::Composition::SpringScalarNaturalMotionAnimation::Api *)((char *)this - 16),
           a2);
    v4 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x34u);
    else
      v4 = 0;
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}
