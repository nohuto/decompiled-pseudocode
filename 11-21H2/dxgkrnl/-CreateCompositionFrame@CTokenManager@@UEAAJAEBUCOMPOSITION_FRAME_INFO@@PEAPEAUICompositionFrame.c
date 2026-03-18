/*
 * XREFs of ?CreateCompositionFrame@CTokenManager@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEAPEAUICompositionFrame@@@Z @ 0x1C00084D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::CreateCompositionFrame(
        CTokenManager *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        struct ICompositionFrame **a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // rax
  __int64 result; // rax

  v6 = operator new[](200LL, 1717783892LL, 256LL);
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  *(_DWORD *)(v6 + 8) = 1;
  *(_QWORD *)v6 = &CCompositionFrame::`vftable';
  *(_OWORD *)(v6 + 32) = *(_OWORD *)a2;
  *(_OWORD *)(v6 + 48) = *((_OWORD *)a2 + 1);
  *(_OWORD *)(v6 + 64) = *((_OWORD *)a2 + 2);
  v8 = (*((_QWORD *)this + 2))++ == -1LL;
  v9 = *((_QWORD *)this + 2);
  if ( v8 )
  {
    *((_QWORD *)this + 2) = 1LL;
    v9 = 1LL;
  }
  *(_QWORD *)(v7 + 80) = v9;
  *(_DWORD *)(v7 + 88) = 0;
  *(_QWORD *)(v7 + 168) = v7 + 160;
  *(_QWORD *)(v7 + 160) = v7 + 160;
  *(_QWORD *)(v7 + 184) = v7 + 176;
  *(_QWORD *)(v7 + 176) = v7 + 176;
  *(_QWORD *)(v7 + 152) = v7 + 144;
  *(_QWORD *)(v7 + 144) = v7 + 144;
  *(_QWORD *)(v7 + 96) = 0LL;
  *(_QWORD *)(v7 + 104) = 0LL;
  *(_BYTE *)(v7 + 112) = 0;
  *(_QWORD *)(v7 + 120) = 0LL;
  *(_QWORD *)(v7 + 128) = 0LL;
  *(_WORD *)(v7 + 136) = 0;
  *(_BYTE *)(v7 + 138) = 0;
  *(_QWORD *)(v7 + 192) = this;
  (**(void (__fastcall ***)(CTokenManager *))this)(this);
  result = 0LL;
  *a3 = (struct ICompositionFrame *)v7;
  return result;
}
