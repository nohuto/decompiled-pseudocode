/*
 * XREFs of ?RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z @ 0x1800E6CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180098660 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrap.c)
 *     ?PushCookie@CDelegatedInkTrailCookieTracker@DirectComposition@@QEAAJI@Z @ 0x1800E5C2C (-PushCookie@CDelegatedInkTrailCookieTracker@DirectComposition@@QEAAJI@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@1@@Z @ 0x1800E6404 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U?$less@I@std@@V?$allocator@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800E6460 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U-$less@I@std.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU?$_Tree_node@UObjectPropertyPair@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E71BC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU-$_Tree_nod.c)
 *     McTemplateU0pqq_EventWriteTransfer @ 0x1800E7618 (McTemplateU0pqq_EventWriteTransfer.c)
 *     ?SetInkLookupId@CSynchronousSuperWetInk@DirectComposition@@QEAAJI@Z @ 0x1800FCA9C (-SetInkLookupId@CSynchronousSuperWetInk@DirectComposition@@QEAAJI@Z.c)
 *     ?SetPropertiesForId@CSynchronousSuperWetInk@DirectComposition@@QEAAJIIHPEBEI@Z @ 0x1800FCAF8 (-SetPropertiesForId@CSynchronousSuperWetInk@DirectComposition@@QEAAJIIHPEBEI@Z.c)
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailImpl::RemoveTrailPoints(
        DirectComposition::CDelegatedInkTrailImpl *this,
        unsigned int a2)
{
  RTL_SRWLOCK *v2; // r13
  unsigned int v4; // r14d
  char v5; // r12
  __int64 **v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 *v11; // rbx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm6
  __int128 v15; // xmm7
  __int128 v16; // xmm8
  __int128 v17; // xmm9
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // r9
  void *v21; // rax
  signed __int32 v22; // ebx
  int v23; // edi
  __int64 v24; // rdx
  DirectComposition::CDelegatedInkTrailCookieTracker *v26; // rcx
  int v27; // edx
  int v28; // ecx
  unsigned int v29; // [rsp+30h] [rbp-D8h]
  __int128 v30; // [rsp+38h] [rbp-D0h]
  __int64 v31; // [rsp+48h] [rbp-C0h]
  unsigned __int8 v32[4]; // [rsp+78h] [rbp-90h] BYREF
  int v33; // [rsp+7Ch] [rbp-8Ch]
  __int64 v34; // [rsp+80h] [rbp-88h]
  __int128 v35; // [rsp+88h] [rbp-80h]
  __int128 v36; // [rsp+98h] [rbp-70h]
  __int128 v37; // [rsp+A8h] [rbp-60h]
  __int128 v38; // [rsp+B8h] [rbp-50h]
  char v39; // [rsp+C8h] [rbp-40h]
  _BYTE v40[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]
  __int64 v43; // [rsp+178h] [rbp+70h] BYREF
  unsigned int v44; // [rsp+180h] [rbp+78h] BYREF

  v44 = a2;
  v2 = (RTL_SRWLOCK *)((char *)this + 24);
  v4 = a2;
  v5 = 0;
  v30 = 0LL;
  v31 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)this + 3);
  v6 = (__int64 **)((char *)this + 32);
  std::_Tree<std::_Tmap_traits<unsigned int,SuperWetInkBallpointPenPoint const,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)this + 4,
    (__int64)v40,
    &v44);
  v10 = v41;
  if ( !*(_BYTE *)(v41 + 25) && v4 >= *(_DWORD *)(v41 + 32) )
  {
    v11 = *v6;
    if ( (__int64 *)v41 != *v6 )
    {
      v12 = *(_OWORD *)(v41 + 40);
      v9 = *v11;
      v13 = *(_OWORD *)(v41 + 56);
      v43 = *v11;
      HIDWORD(v30) = HIDWORD(v12);
      v31 = v13;
      if ( *(_BYTE *)(v41 + 25) )
      {
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>,void *>>>(
          (__int64)this + 32,
          (__int64)this + 32,
          v11[1]);
        v11[1] = (__int64)v11;
        *v11 = (__int64)v11;
        v11[2] = (__int64)v11;
        *((_QWORD *)this + 5) = 0LL;
      }
      else
      {
        while ( v9 != v10 )
        {
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(
            &v43,
            v7,
            v8,
            v9);
          v21 = (void *)std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Extract((char *)this + 32, v20);
          std::_Deallocate<16,0>(v21, 0x60uLL);
          v9 = v43;
        }
      }
      v5 = 1;
    }
  }
  v14 = *((_OWORD *)this + 3);
  v15 = *((_OWORD *)this + 4);
  v16 = *((_OWORD *)this + 5);
  v17 = *((_OWORD *)this + 6);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v5 )
  {
    *(_DWORD *)v32 = 0;
    v18 = *((_QWORD *)this + 2);
    v33 = HIDWORD(v30);
    v34 = v31;
    v39 = 0;
    v35 = v14;
    v36 = v15;
    v37 = v16;
    v38 = v17;
    if ( v18 )
    {
      v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 20), 1u);
      v4 = v44;
      v19 = v22 + 1;
    }
    else
    {
      v19 = v4;
    }
    v23 = DirectComposition::CSynchronousSuperWetInk::SetPropertiesForId(
            *((DirectComposition::CSynchronousSuperWetInk **)this + 1),
            v19,
            v4,
            v9,
            v32,
            v29);
    if ( v23 < 0 )
    {
      v24 = 286LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\delegatedinktrailimpl.cpp",
        (const char *)(unsigned int)v23);
      return (unsigned int)v23;
    }
    v26 = (DirectComposition::CDelegatedInkTrailCookieTracker *)*((_QWORD *)this + 2);
    if ( v26 )
    {
      v23 = DirectComposition::CDelegatedInkTrailCookieTracker::PushCookie(v26, v19);
      if ( v23 < 0 )
      {
        v24 = 296LL;
        goto LABEL_17;
      }
    }
    else
    {
      v23 = DirectComposition::CSynchronousSuperWetInk::SetInkLookupId(
              *((DirectComposition::CSynchronousSuperWetInk **)this + 1),
              v19);
      if ( v23 < 0 )
      {
        v24 = 291LL;
        goto LABEL_17;
      }
    }
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x400) != 0 )
      McTemplateU0pqq_EventWriteTransfer(v28, v27, (_DWORD)this - 16, v4, v19);
  }
  return 0LL;
}
