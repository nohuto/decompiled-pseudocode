/*
 * XREFs of ?StartNewTrail@CDelegatedInkTrailImpl@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800E6F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180098660 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrap.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AD0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@1@@Z @ 0x1800E6404 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU?$_Tree_node@UObjectPropertyPair@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E71BC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU-$_Tree_nod.c)
 *     McTemplateU0pqffff_EventWriteTransfer @ 0x1800E755C (McTemplateU0pqffff_EventWriteTransfer.c)
 *     ?BeginStroke@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIHI@Z @ 0x1800FC2B8 (-BeginStroke@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIHI@Z.c)
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailImpl::StartNewTrail(
        DirectComposition::CDelegatedInkTrailImpl *this,
        const struct _D3DCOLORVALUE *a2)
{
  RTL_SRWLOCK *v2; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int128 v7; // xmm0
  unsigned int v8; // ebx
  __int64 *v9; // rdi
  __int64 *v10; // rax
  __int64 i; // rbx
  __int64 j; // rax
  bool v13; // zf
  __int64 v14; // r9
  __int128 v15; // xmm1
  DirectComposition::CSynchronousSuperWetInk *v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // edi
  __int64 v25; // r9
  void *v26; // rax
  int v27; // [rsp+20h] [rbp-59h]
  unsigned int v28; // [rsp+28h] [rbp-51h]
  unsigned __int8 Source[4]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v30; // [rsp+54h] [rbp-25h]
  int v31; // [rsp+5Ch] [rbp-1Dh]
  __int128 v32; // [rsp+60h] [rbp-19h]
  __int128 v33; // [rsp+70h] [rbp-9h]
  __int128 v34; // [rsp+80h] [rbp+7h]
  __int128 v35; // [rsp+90h] [rbp+17h]
  char v36; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v38; // [rsp+E0h] [rbp+67h] BYREF
  RTL_SRWLOCK *v39; // [rsp+E8h] [rbp+6Fh] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 24);
  AcquireSRWLockExclusive((PSRWLOCK)this + 3);
  v7 = *(_OWORD *)&a2->r;
  v8 = 0;
  v39 = v2;
  *(_OWORD *)((char *)this + 72) = v7;
  if ( *((_QWORD *)this + 5) )
  {
    v9 = (__int64 *)*((_QWORD *)this + 4);
    v10 = v9;
    if ( *((_BYTE *)v9 + 25) )
    {
      i = v9[2];
    }
    else
    {
      i = *v9;
      if ( *(_BYTE *)(*v9 + 25) )
      {
        for ( i = v9[1]; !*(_BYTE *)(i + 25) && v10 == *(__int64 **)i; i = *(_QWORD *)(i + 8) )
          v10 = (__int64 *)i;
        if ( *((_BYTE *)v10 + 25) )
          i = (__int64)v10;
      }
      else
      {
        for ( j = *(_QWORD *)(i + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
          i = j;
      }
    }
    v13 = *(_BYTE *)(i + 25) == 0;
    v14 = *v9;
    v38 = *v9;
    if ( v13 )
    {
      while ( v14 != i )
      {
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(
          &v38,
          v5,
          v6,
          v14);
        v26 = (void *)std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Extract((char *)this + 32, v25);
        std::_Deallocate<16,0>(v26, 0x60uLL);
        v14 = v38;
      }
    }
    else
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>,void *>>>(
        (__int64)this + 32,
        (__int64)this + 32,
        v9[1]);
      v9[1] = (__int64)v9;
      *v9 = (__int64)v9;
      v9[2] = (__int64)v9;
      *((_QWORD *)this + 5) = 0LL;
    }
    v8 = *(_DWORD *)(**((_QWORD **)this + 4) + 32LL);
  }
  v15 = *((_OWORD *)this + 4);
  v16 = (DirectComposition::CSynchronousSuperWetInk *)*((_QWORD *)this + 1);
  *(_DWORD *)Source = 0;
  v30 = 0LL;
  v17 = *((_OWORD *)this + 3);
  *((_BYTE *)this + 112) = 1;
  v33 = v15;
  v18 = *((_OWORD *)this + 6);
  v31 = 0;
  v32 = v17;
  v19 = *((_OWORD *)this + 5);
  v36 = 1;
  v35 = v18;
  v34 = v19;
  v20 = DirectComposition::CSynchronousSuperWetInk::BeginStroke(v16, Source, v6, v8, v27, v28);
  v23 = v20;
  if ( v20 >= 0 )
  {
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x400) != 0 )
      McTemplateU0pqffff_EventWriteTransfer(
        v22,
        v21,
        (_DWORD)this - 16,
        v8,
        LODWORD(a2->r),
        LODWORD(a2->g),
        LODWORD(a2->b),
        LODWORD(a2->a));
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\delegatedinktrailimpl.cpp",
      (const char *)(unsigned int)v20);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v39);
    return v23;
  }
}
