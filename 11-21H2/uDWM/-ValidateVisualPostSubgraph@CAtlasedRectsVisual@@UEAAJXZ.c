/*
 * XREFs of ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x18000B550
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180021080 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::ValidateVisualPostSubgraph(CAtlasedRectsVisual *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // ecx
  int v8; // edx
  unsigned __int64 v10; // r8
  int v11; // r14d
  int v12; // r14d
  int v13; // ebp
  int v14; // ebp
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // eax
  int v21; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v23; // [rsp+50h] [rbp+8h]
  __int64 v24; // [rsp+58h] [rbp+10h]

  v3 = *((_DWORD *)this + 22);
  if ( (v3 & 0x100) != 0 )
  {
    LOBYTE(a3) = *((_DWORD *)this + 24) != 0;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 16LL)
                                                             + 504LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
            a3);
    v19 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x3CDu);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA,
        (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)v19);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (int)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
        (const char *)v19);
      return v19;
    }
    *((_DWORD *)this + 22) &= ~0x100u;
    v3 = *((_DWORD *)this + 22);
  }
  if ( (v3 & 0x1000) == 0 )
    goto LABEL_11;
  v5 = 0LL;
  if ( !*((_DWORD *)this + 68) )
    goto LABEL_10;
  do
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 31) + 8 * v5);
    v7 = *(_DWORD *)(v6 + 32);
    v8 = *(_DWORD *)(v6 + 40);
    if ( v7 == 0x7FFFFFFF
      && *(_DWORD *)(v6 + 36) == 0x7FFFFFFF
      && v8 == 0x7FFFFFFF
      && *(_DWORD *)(v6 + 44) == 0x7FFFFFFF )
    {
      goto LABEL_8;
    }
    v23 = *(_QWORD *)(v6 + 24);
    v10 = HIDWORD(v23);
    if ( *(_DWORD *)(v6 + 36) == 0x7FFFFFFF )
    {
      v20 = 0;
      if ( v7 != 0x7FFFFFFF )
        v20 = *(_DWORD *)(v6 + 32);
      v7 = v20;
      LODWORD(v24) = v20;
    }
    else
    {
      v11 = *((_DWORD *)this + 32);
      if ( v7 != 0x7FFFFFFF )
      {
        v12 = v11 - *(_DWORD *)(v6 + 36) - v7;
        LODWORD(v24) = *(_DWORD *)(v6 + 32);
        LODWORD(v23) = v12;
        goto LABEL_16;
      }
      v7 = v11 - v23 - *(_DWORD *)(v6 + 36);
      LODWORD(v24) = v7;
    }
    v12 = *(_QWORD *)(v6 + 24);
LABEL_16:
    if ( *(_DWORD *)(v6 + 44) == 0x7FFFFFFF )
    {
      v21 = 0;
      if ( v8 != 0x7FFFFFFF )
        v21 = *(_DWORD *)(v6 + 40);
      HIDWORD(v24) = v21;
      goto LABEL_43;
    }
    v13 = *((_DWORD *)this + 33);
    if ( v8 == 0x7FFFFFFF )
    {
      HIDWORD(v24) = v13 - v10 - *(_DWORD *)(v6 + 44);
LABEL_43:
      v14 = HIDWORD(*(_QWORD *)(v6 + 24));
      goto LABEL_19;
    }
    HIDWORD(v24) = *(_DWORD *)(v6 + 40);
    v14 = v13 - v8 - *(_DWORD *)(v6 + 44);
    HIDWORD(v23) = v14;
LABEL_19:
    if ( v12 <= 0 )
    {
      v12 = 0;
      LODWORD(v23) = 0;
    }
    if ( v14 <= 0 )
    {
      v14 = 0;
      HIDWORD(v23) = 0;
    }
    if ( __PAIR64__(HIDWORD(v24), v7) != *(_QWORD *)(v6 + 16) )
    {
      *(_QWORD *)(v6 + 16) = v24;
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v6, 1u, 0x2000u);
    }
    if ( *(_DWORD *)(v6 + 24) != v12 || *(_DWORD *)(v6 + 28) != v14 )
    {
      *(_DWORD *)(v6 + 96) |= 1u;
      v15 = *(_QWORD *)(v6 + 80);
      *(_QWORD *)(v6 + 24) = v23;
      if ( v15 )
        (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)v15 + 24LL))(v15, 0x2000LL, v10);
    }
LABEL_8:
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < *((_DWORD *)this + 68) );
  v3 = *((_DWORD *)this + 22);
LABEL_10:
  v3 &= ~0x1000u;
  *((_DWORD *)this + 22) = v3;
LABEL_11:
  if ( (v3 & 0x2000) == 0 )
    return 0LL;
  v16 = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *))(*(_QWORD *)this + 200LL))(this);
  v17 = v16;
  if ( v16 >= 0 )
  {
    *((_DWORD *)this + 22) &= ~0x2000u;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x79,
    (int)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
    (const char *)(unsigned int)v16);
  return v17;
}
