/*
 * XREFs of ?get_TransformMatrix@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJPEAUMatrix4x4@Numerics@Foundation@6@@Z @ 0x180181B30
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner::get_TransformMatrix(
        Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner *this,
        struct Windows::Foundation::Numerics::Matrix4x4 *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rax
  _OWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF

  memset_0(v11, 0, sizeof(v11));
  v4 = v11[1];
  *(_OWORD *)a2 = v11[0];
  v5 = v11[2];
  *((_OWORD *)a2 + 1) = v4;
  v6 = v11[3];
  *((_OWORD *)a2 + 2) = v5;
  *((_OWORD *)a2 + 3) = v6;
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*((_BYTE *)this - 120) & 2) != 0 )
  {
    v9 = *((_QWORD *)this + 6);
    *(_OWORD *)a2 = *(_OWORD *)(v9 + 136);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v9 + 152);
    *((_OWORD *)a2 + 2) = *(_OWORD *)(v9 + 168);
    *((_OWORD *)a2 + 3) = *(_OWORD *)(v9 + 184);
    v8 = 0;
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
