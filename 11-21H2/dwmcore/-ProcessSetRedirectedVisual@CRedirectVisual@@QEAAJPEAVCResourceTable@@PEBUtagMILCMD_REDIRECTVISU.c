/*
 * XREFs of ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z @ 0x18023B4D0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18025B500 (-Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CRedirectVisual::ProcessSetRedirectedVisual(
        CRedirectVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL *a3)
{
  struct CResourceTable *v3; // r9
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CVisual *Resource; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct CVisual *v10; // rcx
  struct CRedirectedVisualContent *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  struct CRedirectedVisualContent *v15; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2;
  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 )
  {
    Resource = (struct CVisual *)CResourceTable::GetResource((__int64)v3, v5, 0xC3u);
    if ( !Resource )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2003303421, 0x18u);
      return v4;
    }
  }
  v9 = *((_QWORD *)this + 32);
  v10 = 0LL;
  if ( v9 )
    v10 = *(struct CVisual **)(v9 + 72);
  if ( Resource != v10 )
  {
    v11 = 0LL;
    v15 = 0LL;
    if ( Resource )
    {
      v12 = CRedirectedVisualContent::Create(Resource, &v15);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x2Au);
        return v4;
      }
      v11 = v15;
    }
    (*(void (__fastcall **)(CRedirectVisual *, struct CRedirectedVisualContent *, const struct tagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL *, struct CResourceTable *))(*(_QWORD *)this + 312LL))(
      this,
      v11,
      a3,
      v3);
    if ( v11 )
      (*(void (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v4;
}
