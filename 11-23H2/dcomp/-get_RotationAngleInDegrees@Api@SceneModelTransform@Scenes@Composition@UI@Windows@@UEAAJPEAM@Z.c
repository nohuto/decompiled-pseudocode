/*
 * XREFs of ?get_RotationAngleInDegrees@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x1801931F0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneModelTransform::Api::get_RotationAngleInDegrees(
        Windows::UI::Composition::Scenes::SceneModelTransform::Api *this,
        float *a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v3 = 0;
  *a2 = 0.0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 17);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 128) & 2) != 0 )
  {
    *a2 = *(float *)(*((_QWORD *)this - 1) + 272LL) * 57.295776;
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
