/*
 * XREFs of ?get_TransformMatrix@Api@Visual@Composition@UI@Windows@@UEAAJPEAUMatrix4x4@Numerics@Foundation@5@@Z @ 0x18010D2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::get_TransformMatrix(
        Windows::UI::Composition::Visual::Api *this,
        struct Windows::Foundation::Numerics::Matrix4x4 *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int v8; // edi
  char *Reference; // rax
  _OWORD *v10; // rax
  _OWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF

  memset_0(v12, 0, sizeof(v12));
  v4 = v12[1];
  *(_OWORD *)a2 = v12[0];
  v5 = v12[2];
  *((_OWORD *)a2 + 1) = v4;
  v6 = v12[3];
  *((_OWORD *)a2 + 2) = v5;
  *((_OWORD *)a2 + 3) = v6;
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    Reference = (char *)CSparseStorage::GetReference((Windows::UI::Composition::Visual::Api *)((char *)this - 56), 8);
    v8 = 0;
    if ( Reference )
      v10 = Reference + 136;
    else
      v10 = &Windows::UI::Composition::ComponentTransform3D::sc_defaultTransformMatrix;
    *(_OWORD *)a2 = *v10;
    *((_OWORD *)a2 + 1) = v10[1];
    *((_OWORD *)a2 + 2) = v10[2];
    *((_OWORD *)a2 + 3) = v10[3];
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v8;
}
