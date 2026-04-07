/*
 * XREFs of ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002AD90
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18002A9D0 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$CreateProxy@VCAtlasedRectsMeshProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z @ 0x1800244CC (--$CreateProxy@VCAtlasedRectsMeshProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1AtlasedRects@@QEAA@XZ @ 0x1800A8104 (--1AtlasedRects@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAtlasedImage::Validate(CBaseObject **this)
{
  int v2; // edi
  int v3; // eax
  char *v4; // rax
  __int64 v5; // r8
  int v7; // eax
  int v8; // eax
  __int128 v9; // [rsp+40h] [rbp-29h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h]
  unsigned int v11; // [rsp+58h] [rbp-11h]
  __int128 v12; // [rsp+60h] [rbp-9h] BYREF
  __int64 v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  __int128 v15; // [rsp+80h] [rbp+17h] BYREF
  __int64 v16; // [rsp+90h] [rbp+27h]
  int v17; // [rsp+98h] [rbp+2Fh]
  char *v18; // [rsp+A0h] [rbp+37h]
  int v19; // [rsp+D0h] [rbp+67h] BYREF

  v2 = 0;
  if ( !this[11] )
  {
    v7 = CCompositor::CreateProxy<CAtlasedRectsMeshProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           this + 11);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x392u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x182u);
      return (unsigned int)v2;
    }
  }
  v3 = *((_DWORD *)this + 24);
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this[11] + 2) + 16LL) + 808LL))(
             *(_QWORD *)(*((_QWORD *)this[11] + 2) + 16LL),
             *(unsigned int *)(*((_QWORD *)this[11] + 2) + 24LL),
             *((unsigned int *)this + 17));
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1A8u);
        return (unsigned int)v2;
      }
    }
    goto LABEL_16;
  }
  v19 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v4 = (char *)this + 100;
  if ( !*((_BYTE *)this + 116) )
    v4 = 0LL;
  v18 = v4;
  v11 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v9, 0x10u);
  v14 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v12, 0x10u);
  v17 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v15, 4u);
  (*((void (__fastcall **)(CBaseObject **, int *))*this + 4))(this, &v19);
  v2 = DynArrayImpl<0>::Grow((unsigned int)&v9, 16, v19, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x190u);
LABEL_24:
    AtlasedRects::~AtlasedRects((AtlasedRects *)&v9);
    return (unsigned int)v2;
  }
  v2 = DynArrayImpl<0>::Grow((unsigned int)&v12, 16, v19, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x191u);
    goto LABEL_24;
  }
  v2 = DynArrayImpl<0>::Grow((unsigned int)&v15, 4, v19, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x192u);
    goto LABEL_24;
  }
  v2 = (*((__int64 (__fastcall **)(CBaseObject **, __int128 *))*this + 2))(this, &v9);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x195u);
    goto LABEL_24;
  }
  LOBYTE(v5) = (unsigned int)(*((_DWORD *)this + 30) - 18) > 3;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this[11] + 2) + 16LL)
                                                                                          + 912LL))(
         *(_QWORD *)(*((_QWORD *)this[11] + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this[11] + 2) + 24LL),
         v5,
         v11,
         v9,
         v12,
         v15);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x1A4u);
    goto LABEL_24;
  }
  if ( (_QWORD)v15 != *((_QWORD *)&v15 + 1) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *(_QWORD *)&v15 = 0LL;
  }
  if ( (_QWORD)v12 != *((_QWORD *)&v12 + 1) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *(_QWORD *)&v12 = 0LL;
  }
  if ( (_QWORD)v9 != *((_QWORD *)&v9 + 1) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
LABEL_16:
  *((_DWORD *)this + 24) &= 0xFFFFFFFC;
  return (unsigned int)v2;
}
