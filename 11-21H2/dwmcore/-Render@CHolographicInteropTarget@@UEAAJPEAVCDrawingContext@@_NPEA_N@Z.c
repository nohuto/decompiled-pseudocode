/*
 * XREFs of ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180299F98
 * Callers:
 *     ?Render@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18010ACD0 (-Render@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180111D6E (McTemplateU0xx_EventWriteTransfer.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x1801932D8 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x180244868 (McTemplateU0xxx_EventWriteTransfer.c)
 *     ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z @ 0x18027DBC4 (-EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x180296028 (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?PostInteropTextureUpdate@CHolographicManager@@QEAAXIPEAX0@Z @ 0x180296438 (-PostInteropTextureUpdate@CHolographicManager@@QEAAXIPEAX0@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x18029A484 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 *     McTemplateU0xxxx_EventWriteTransfer @ 0x18029A760 (McTemplateU0xxxx_EventWriteTransfer.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x18029B1A4 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::Render(
        CHolographicInteropTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rax
  DWORD v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int i; // esi
  struct CHolographicInteropTexture *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  struct CHolographicInteropTexture *v18; // rbp
  unsigned int v19; // r9d
  unsigned int v20; // r15d
  unsigned int j; // r14d
  void *v22; // r9
  void *v23; // r8
  CHolographicManager *v24; // rcx
  __int64 v25; // r8
  CD3DDevice *v26; // rcx
  unsigned int v27; // esi
  CHolographicInteropTexture *TextureAtIndex; // rax
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-58h] BYREF

  LODWORD(v4) = 0;
  v5 = qword_1803D7D70 + 1;
  *a4 = 0;
  qword_1803D7D70 = v5;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xx_EventWriteTransfer((__int64)this, &EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDER, v5, qword_1803D7D68);
  v9 = (_QWORD *)*((_QWORD *)this - 16);
  if ( (unsigned int)((__int64)(v9[19] - v9[18]) >> 3) )
  {
    v10 = v9[5];
    if ( v10 )
    {
      if ( !*(_BYTE *)(v10 + 216) )
      {
        v11 = WaitForSingleObject(*((HANDLE *)this - 7), 0xAu);
        v13 = *((_QWORD *)this - 16);
        if ( v11 )
        {
          v27 = 0;
          for ( LODWORD(v4) = (__int64)(*(_QWORD *)(v13 + 152) - *(_QWORD *)(v13 + 144)) >> 3; v27 < (unsigned int)v4; ++v27 )
          {
            TextureAtIndex = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this - 16), v27);
            if ( TextureAtIndex )
              CHolographicInteropTexture::CacheDirtyRegion(TextureAtIndex);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
            McTemplateU0xxx_EventWriteTransfer(
              v13,
              &EVTDESC_HOLOGRAPHICINTEROPTARGET_WAITONINCOMINGFAILED,
              qword_1803D7D70,
              qword_1803D7D68,
              0LL);
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 34) + 656LL) + 120LL))(
            *(_QWORD *)(*((_QWORD *)this - 34) + 656LL),
            0LL,
            0x8000LL);
        }
        else
        {
          v4 = (__int64)(*(_QWORD *)(v13 + 152) - *(_QWORD *)(v13 + 144)) >> 3;
          *a4 = (_DWORD)v4 != 0;
          for ( i = 0; i < (unsigned int)v4; ++i )
          {
            v15 = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this - 16), i);
            v18 = v15;
            if ( v15 && *((_BYTE *)v15 + 232) )
            {
              v20 = 1;
              if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this - 34), v12, v16, v17) )
                v20 = 2;
              for ( j = 0; j < v20; ++j )
                CHolographicInteropTarget::RenderTexture(
                  (CHolographicInteropTarget *)((char *)this - 288),
                  a2,
                  v18,
                  v19,
                  j);
            }
          }
          v22 = (void *)*((_QWORD *)this - 7);
          v23 = (void *)*((_QWORD *)this - 8);
          v24 = (CHolographicManager *)*((_QWORD *)this - 16);
          ++qword_1803D7D68;
          CHolographicManager::PostInteropTextureUpdate(v24, v12, v23, v22);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
            McGenEventWrite_EventWriteTransfer(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_HOLOGRAPHICINTEROPTARGET_SYNCPOSTED,
              v25,
              1u,
              &v30);
          v26 = (CD3DDevice *)*((_QWORD *)this - 14);
          if ( v26 )
            CD3DDevice::EnqueueSetEvent(v26, *((void **)this - 8));
        }
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xxxx_EventWriteTransfer(
      v4,
      (unsigned int)&EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDERCOMPLETE,
      qword_1803D7D70,
      qword_1803D7D68,
      qword_1803D7D70 - qword_1803D7D68,
      v4);
  return 0LL;
}
