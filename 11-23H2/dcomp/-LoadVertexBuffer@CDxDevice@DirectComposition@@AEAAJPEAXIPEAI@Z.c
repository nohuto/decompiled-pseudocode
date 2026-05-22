/*
 * XREFs of ?LoadVertexBuffer@CDxDevice@DirectComposition@@AEAAJPEAXIPEAI@Z @ 0x1800232B8
 * Callers:
 *     ?FlushPackedGutterExtensions@CDxDevice@DirectComposition@@AEAAJPEAUID3D11ShaderResourceView@@PEAUID3D11RenderTargetView@@IIAEBUGutterExtensionSurface@12@IAEBUtagRECT@@@Z @ 0x180022EF4 (-FlushPackedGutterExtensions@CDxDevice@DirectComposition@@AEAAJPEAUID3D11ShaderResourceView@@PEA.c)
 * Callees:
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDxDevice::LoadVertexBuffer(
        DirectComposition::CDxDevice *this,
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  size_t v5; // rsi
  __int64 *v6; // rcx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int128 v14; // [rsp+40h] [rbp-18h] BYREF

  v5 = a3;
  v6 = (__int64 *)*((_QWORD *)this + 9);
  v14 = 0LL;
  v9 = *v6;
  if ( a3 + *((_DWORD *)this + 50) > 0x7CB0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64, _DWORD, __int128 *))(v9 + 112))(
            v6,
            *((_QWORD *)this + 16),
            0LL,
            4LL,
            0,
            &v14);
    *((_DWORD *)this + 50) = 0;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64, _DWORD, __int128 *))(v9 + 112))(
            v6,
            *((_QWORD *)this + 16),
            0LL,
            5LL,
            0,
            &v14);
  }
  v11 = v10;
  if ( v10 >= 0 )
  {
    memcpy_0((void *)(v14 + *((unsigned int *)this + 50)), a2, v5);
    *a4 = *((_DWORD *)this + 50);
    v12 = *((_QWORD *)this + 9);
    *((_DWORD *)this + 50) += v5;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 120LL))(v12, *((_QWORD *)this + 16), 0LL);
  }
  return v11;
}
