/*
 * XREFs of ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x1801DF578
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::GetDeviceTarget(CDirectFlipInfo *this, struct IDeviceTarget **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  char *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v16; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = *((_QWORD *)this + 2);
  v16 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  v6 = v5 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
  if ( v16 )
  {
    v7 = (__int64)v16 + *(int *)(v16[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))(v6 + 8))(
         v6 + 8,
         &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
         &v16);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x17Du);
  }
  else
  {
    v11 = (char *)this + 32;
    if ( *((_DWORD *)this + 13) != 3 )
      v11 = 0LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD *, char *, struct IDeviceTarget **))(*v16 + 8LL))(v16, v11, a2);
    v10 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x180u);
  }
  if ( v16 )
  {
    v14 = (__int64)v16 + *(int *)(v16[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v10;
}
