/*
 * XREFs of ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x18003D270
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18007CB4C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001A384 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18003D588 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005C500 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x18005D3E4 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDisplayId@CCachedTarget@CCachedVisualImage@@QEBA?AVDisplayId@@XZ @ 0x1801FE938 (-GetDisplayId@CCachedTarget@CCachedVisualImage@@QEBA-AVDisplayId@@XZ.c)
 *     ?IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1801FEA24 (-IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 */

__int64 __fastcall CCachedVisualImage::Snapshot(CCachedVisualImage *this)
{
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v3; // rax
  struct IRenderTargetBitmap *v4; // rdi
  char *v5; // rcx
  struct D2D_SIZE_U *v6; // rax
  struct D2D_SIZE_U v7; // rdx
  CCachedVisualImage::CCachedTarget **v8; // rbx
  CCachedVisualImage::CCachedTarget *v9; // r14
  __int64 v10; // rax
  _DWORD *DisplayId; // rax
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h]
  _BYTE v15[24]; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+88h] [rbp+38h] BYREF
  struct IRenderTargetBitmap *v17; // [rsp+90h] [rbp+40h] BYREF
  CCachedVisualImage::CCachedTarget **v18; // [rsp+98h] [rbp+48h] BYREF

  CDisplayManager::GetPrimaryAdapterLuid(this);
  LODWORD(v14) = 0;
  *((_QWORD *)&v13 + 1) = DisplayId::None;
  BYTE4(v14) = 0;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 27));
  if ( PrimaryMonitorTarget )
  {
    v3 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, _BYTE *))(*(_QWORD *)PrimaryMonitorTarget + 96LL))(
           PrimaryMonitorTarget,
           v15);
    v13 = *(_OWORD *)v3;
    v14 = *(_QWORD *)(v3 + 16);
  }
  v17 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v17);
  if ( (int)CCachedVisualImage::EnsureRenderTargetBitmap(this, (const struct RenderTargetInfo *)&v13, &v17) < 0 )
  {
    *((_BYTE *)this + 1776) = 1;
  }
  else
  {
    v4 = v17;
    v5 = (char *)v17 + *(int *)(*((_QWORD *)v17 + 1) + 16LL) + 8;
    v6 = (struct D2D_SIZE_U *)(**(__int64 (__fastcall ***)(char *, char *))v5)(v5, &v16);
    v7 = *v6;
    *((struct D2D_SIZE_U *)this + 221) = *v6;
    CCachedVisualImage::RemoveInvalidTargets(this, v7);
    v8 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 24);
    while ( v8 != *((CCachedVisualImage::CCachedTarget ***)this + 25) )
    {
      v9 = *v8;
      if ( *((struct IRenderTargetBitmap **)*v8 + 1) != v4
        && (*((_BYTE *)v9 + 57)
         || ((DisplayId = (_DWORD *)CCachedVisualImage::CCachedTarget::GetDisplayId(*v8, &v16),
              *DisplayId == DisplayId::None)
          || *DisplayId == DisplayId::All)
         && !CCachedVisualImage::CCachedTarget::IsHardwareProtected(v9)) )
      {
        v8 = *std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase((__int64)this + 192, &v18, v8);
      }
      else
      {
        ++v8;
      }
    }
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 64LL))(this);
    v10 = *(_QWORD *)this;
    *((_BYTE *)this + 1777) = 1;
    (*(void (__fastcall **)(CCachedVisualImage *))(v10 + 224))(this);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
  return 0LL;
}
