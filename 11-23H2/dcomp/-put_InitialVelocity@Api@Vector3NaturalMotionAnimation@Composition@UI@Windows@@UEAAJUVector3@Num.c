/*
 * XREFs of ?put_InitialVelocity@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z @ 0x180168C50
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector3NaturalMotionAnimation::Api::put_InitialVelocity(
        __int64 a1,
        __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  int v6; // eax

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 424);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 416) & 2) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 8);
    *(_QWORD *)(a1 - 16) = *(_QWORD *)a2;
    *(_DWORD *)(a1 - 8) = v6;
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
