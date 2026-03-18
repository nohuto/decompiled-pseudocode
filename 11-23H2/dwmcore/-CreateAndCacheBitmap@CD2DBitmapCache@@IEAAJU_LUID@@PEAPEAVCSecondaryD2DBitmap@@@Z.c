/*
 * XREFs of ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800E6F0C
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x1800ADF80 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007769C (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800A22E4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800AEEE0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x1800BCEBC (--1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ.c)
 *     ??0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z @ 0x1800E7158 (--0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800E71C0 (--$_Emplace_reallocate@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedB.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800E72EC (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     _Init_thread_footer @ 0x18010F8D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18010F938 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::CreateAndCacheBitmap(
        CD2DBitmapCache *this,
        struct _LUID a2,
        struct CSecondaryD2DBitmap **a3)
{
  CD2DBitmapCache::CCachedBitmap *v3; // rbx
  CD2DBitmapCache::CCachedBitmap *v6; // rdi
  int Device; // eax
  __int64 v8; // rcx
  unsigned int v9; // r15d
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, _BYTE *); // rcx
  const struct PixelFormatInfo *v12; // rbx
  const struct D2D_SIZE_U *v13; // rax
  const struct CResourceTag *v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  CD2DBitmapCache::CCachedBitmap *v17; // rax
  __int64 v18; // rcx
  CD2DBitmapCache::CCachedBitmap *v19; // rax
  CD2DBitmapCache::CCachedBitmap **v20; // rdx
  struct CSecondaryD2DBitmap *v21; // rax
  CD2DBitmapCache::CCachedBitmap *v23; // [rsp+30h] [rbp-30h] BYREF
  CD3DDevice *v24; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v25[8]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v26[16]; // [rsp+48h] [rbp-18h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v6 = 0LL;
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, a2, &v24);
  v9 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Device, 0xCFu, 0LL);
  }
  else
  {
    v10 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    if ( dword_1803EA0A0 > *(_DWORD *)(v10 + 4) )
    {
      Init_thread_header(&dword_1803EA0A0);
      if ( dword_1803EA0A0 == -1 )
      {
        dword_1803EA0B0 = 24;
        qword_1803EA0A8 = (__int64)"DWM Sysmem Source Bitmap";
        Init_thread_footer(&dword_1803EA0A0);
      }
    }
    if ( dword_1803EA0B8 > *(_DWORD *)(v10 + 4) )
    {
      Init_thread_header(&dword_1803EA0B8);
      if ( dword_1803EA0B8 == -1 )
      {
        dword_1803EA0C8 = 23;
        qword_1803EA0C0 = (__int64)"DWM Cross-Device Bitmap";
        Init_thread_footer(&dword_1803EA0B8);
      }
    }
    v11 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 3)
                                                    + 8LL
                                                    + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 8LL));
    v12 = (const struct PixelFormatInfo *)(**v11)(v11, v26);
    v13 = (const struct D2D_SIZE_U *)(***((__int64 (__fastcall ****)(_QWORD, _BYTE *))this + 3))(
                                       *((_QWORD *)this + 3),
                                       v25);
    v14 = (const struct CResourceTag *)off_1803E3658[0];
    if ( *((_QWORD *)this + 4) )
      v14 = off_1803E3660;
    v15 = CD3DDevice::CreateSecondaryD2DBitmap(v24, v14, v13, v12, &v23);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xD7u, 0LL);
      v3 = v23;
    }
    else
    {
      v17 = (CD2DBitmapCache::CCachedBitmap *)DefaultHeap::Alloc(0x10uLL);
      v3 = v23;
      if ( v17
        && (v19 = (CD2DBitmapCache::CCachedBitmap *)CD2DBitmapCache::CCachedBitmap::CCachedBitmap(
                                                      v17,
                                                      (CD2DBitmapCache *)((char *)this
                                                                        + *(int *)(*((_QWORD *)this + 2) + 4LL)
                                                                        + 16),
                                                      v23),
            v23 = v19,
            (v6 = v19) != 0LL) )
      {
        v20 = (CD2DBitmapCache::CCachedBitmap **)*((_QWORD *)this + 7);
        if ( v20 == *((CD2DBitmapCache::CCachedBitmap ***)this + 8) )
        {
          std::vector<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>::_Emplace_reallocate<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>(
            (char *)this + 48,
            v20,
            &v23);
          v6 = v23;
        }
        else
        {
          v6 = 0LL;
          *v20 = v19;
          *((_QWORD *)this + 7) += 8LL;
        }
        v21 = v3;
        v3 = 0LL;
        *a3 = v21;
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0xDAu, 0LL);
      }
    }
  }
  if ( v24 )
    CD3DDevice::Release(v24);
  if ( v6 )
  {
    CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(v6);
    operator delete(v6, 0x10uLL);
  }
  if ( v3 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v3);
  return v9;
}
