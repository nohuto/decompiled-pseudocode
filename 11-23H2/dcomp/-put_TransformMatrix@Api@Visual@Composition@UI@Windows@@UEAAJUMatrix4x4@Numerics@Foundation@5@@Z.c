/*
 * XREFs of ?put_TransformMatrix@Api@Visual@Composition@UI@Windows@@UEAAJUMatrix4x4@Numerics@Foundation@5@@Z @ 0x18005D1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18004D000 (-AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonTyp.c)
 *     ?GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@XZ @ 0x18004EA04 (-GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@.c)
 *     ?NotifyPropertyChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAJIIPEA_N@Z @ 0x180050AC0 (-NotifyPropertyChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAJIIPEA_N@Z.c)
 *     ?EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ @ 0x18005B258 (-EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180079048 (--$_Try_emplace@AEBI$$V@-$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     memcmp_0 @ 0x1800A8120 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_TransformMatrix(__int64 a1, _OWORD *a2)
{
  _BYTE *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rax
  CSparseStorage *v6; // r14
  unsigned int v7; // edi
  int v9; // edx
  int *v10; // rcx
  char *Reference; // rsi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 *v15; // rax
  unsigned int v16; // r14d
  __int64 *v17; // rcx
  __int64 *v18; // rdx
  struct _RTL_GENERIC_TABLE *BindingManager; // rax
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edx
  unsigned __int64 v26; // [rsp+20h] [rbp-68h]
  bool v27; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-50h] BYREF
  _DWORD v29[4]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v30; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v31[40]; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = (_BYTE *)(a1 - 168);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 168 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v5 = *((_QWORD *)v2 + 14);
    v6 = (CSparseStorage *)(v2 + 112);
    if ( (*(_DWORD *)(v5 + 4) & 0x1000000) == 0 )
      goto LABEL_42;
    v9 = *(_DWORD *)(v5 + 12);
    v10 = (int *)(v5 + 12);
    if ( (v9 & 0x7F000000) != 0x8000000 )
    {
      do
      {
        v10 = (int *)((char *)v10 + (v9 & 0xFFFFFF) + 4);
        v9 = *v10;
      }
      while ( (*v10 & 0x7F000000) != 0x8000000 );
    }
    Reference = *(char **)(v10 + 1);
    if ( !Reference )
    {
LABEL_42:
      if ( !memcmp_0(a2, &Windows::UI::Composition::ComponentTransform3D::sc_defaultTransformMatrix, 0x40uLL) )
      {
LABEL_4:
        v7 = 0;
LABEL_5:
        Microsoft::WRL2::ContextSession::EndApiEntry(v4);
        return v7;
      }
      v12 = Windows::UI::Composition::Visual::EnsureComponentTransform((Windows::UI::Composition::Visual *)v2);
      v7 = v12;
      if ( v12 < 0 )
      {
        v22 = (unsigned int)v12;
        v23 = 1595LL;
        goto LABEL_39;
      }
      Reference = (char *)CSparseStorage::GetReference(v6, 8u);
    }
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)Reference + 3) + 456LL),
      *((_DWORD *)Reference + 32),
      8,
      a2,
      0x40uLL);
    if ( !a2 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v13 = *((_QWORD *)Reference + 3);
    *(_QWORD *)&v30 = 64LL;
    *((_QWORD *)&v30 + 1) = a2;
    v27 = 0;
    v14 = *(_QWORD *)(v13 + 840);
    if ( v14 )
    {
      v15 = *(__int64 **)(v14 + 136);
      v16 = *((_DWORD *)Reference + 32);
      v17 = v15;
      v28 = v16;
      v18 = (__int64 *)v15[1];
      while ( !*((_BYTE *)v18 + 25) )
      {
        if ( *((_DWORD *)v18 + 7) < v16 || *((_DWORD *)v18 + 7) == v16 && *((_DWORD *)v18 + 8) < 8u )
        {
          v18 = (__int64 *)v18[2];
        }
        else
        {
          v17 = v18;
          v18 = (__int64 *)*v18;
        }
      }
      if ( !*((_BYTE *)v17 + 25)
        && v16 >= *((_DWORD *)v17 + 7)
        && (v16 != *((_DWORD *)v17 + 7) || *((_DWORD *)v17 + 8) <= 8u)
        && v17 != v15 )
      {
        std::map<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>::_Try_emplace<unsigned int const &,>(
          v14 + 152,
          v31,
          &v28);
        v24 = *(_QWORD *)(v14 + 24);
        v25 = *(_DWORD *)(v14 + 128);
        v29[0] = v16;
        v29[1] = 8;
        DirectComposition::CDevice::ResourceSetBufferProperty(
          *(DirectComposition::CDevice **)(v24 + 456),
          v25,
          0,
          v29,
          8uLL);
      }
    }
    BindingManager = (struct _RTL_GENERIC_TABLE *)Windows::UI::Composition::CompositorCommon::GetBindingManager(*((Windows::UI::Composition::CompositorCommon **)Reference + 3));
    v20 = Windows::UI::Composition::AnimationBindingManager::NotifyPropertyChanged(
            BindingManager,
            *((_DWORD *)Reference + 32),
            8u,
            &v27);
    v7 = v20;
    if ( v20 >= 0 )
    {
      if ( v27 )
      {
        v21 = *(_QWORD *)(*((_QWORD *)Reference + 3) + 840LL);
        if ( v21 )
        {
          LODWORD(v26) = 265;
          Windows::UI::Composition::AnimationLoggingManager::AnimationEnded(
            v21,
            *((_DWORD *)Reference + 32),
            8u,
            1,
            v26,
            &v30);
        }
      }
      *(_OWORD *)(Reference + 136) = *a2;
      *(_OWORD *)(Reference + 152) = a2[1];
      *(_OWORD *)(Reference + 168) = a2[2];
      *(_OWORD *)(Reference + 184) = a2[3];
      goto LABEL_4;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x615,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
      (const char *)(unsigned int)v20);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcomponenttransform3d.cpp",
      (const char *)v7);
    v22 = v7;
    v23 = 1599LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)v22);
    DoStackCaptureDirect(v7, 0xA8Du);
    goto LABEL_5;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return 2147483667LL;
}
