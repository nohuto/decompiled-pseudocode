/*
 * XREFs of ?MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnimationResources@234@@Z @ 0x180178740
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Emplace_reallocate@UPathSharedSectionData@@@?$vector@UPathSharedSectionData@@V?$allocator@UPathSharedSectionData@@@std@@@std@@QEAAPEAUPathSharedSectionData@@QEAU2@$$QEAU2@@Z @ 0x180177FD4 (--$_Emplace_reallocate@UPathSharedSectionData@@@-$vector@UPathSharedSectionData@@V-$allocator@UP.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180178114 (--$_Emplace_reallocate@V-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@-$vector.c)
 *     ?_Reallocate_exactly@?$vector@UPathSharedSectionData@@V?$allocator@UPathSharedSectionData@@@std@@@std@@AEAAX_K@Z @ 0x180178B1C (-_Reallocate_exactly@-$vector@UPathSharedSectionData@@V-$allocator@UPathSharedSectionData@@@std@.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180178BA4 (-_Reallocate_exactly@-$vector@V-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V-.c)
 */

__int64 __fastcall Windows::UI::Composition::PathKeyFrameAnimation::MarshalTypeSpecificData(
        Windows::UI::Composition::PathKeyFrameAnimation *this,
        int a2,
        struct Windows::UI::Composition::KeyFrameAnimationResources **a3)
{
  _BYTE *v3; // rdi
  __int64 v4; // rax
  __int64 v7; // r15
  _DWORD *v8; // rsi
  _DWORD *v9; // rbx
  _DWORD *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rax
  void *v16; // r15
  char *v17; // rax
  char *v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 *v21; // r12
  __int64 *i; // r14
  __int64 v23; // rbx
  __int64 v24; // rbx
  DirectComposition::CDelayedDestructionObject **v25; // rdx
  void *v27[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE *v28; // [rsp+40h] [rbp-30h]
  struct Windows::UI::Composition::KeyFrameAnimationResources **v29; // [rsp+48h] [rbp-28h]
  DirectComposition::CDelayedDestructionObject *v30; // [rsp+50h] [rbp-20h] BYREF
  int v31; // [rsp+58h] [rbp-18h]

  v3 = 0LL;
  v4 = (__int64)(*((_QWORD *)this + 68) - *((_QWORD *)this + 67)) >> 4;
  v29 = a3;
  v28 = 0LL;
  v7 = (unsigned int)v4;
  *(_OWORD *)v27 = 0LL;
  if ( (_DWORD)v4 )
  {
    std::vector<PathSharedSectionData>::_Reallocate_exactly(v27, (unsigned int)v4);
    v3 = v28;
  }
  v8 = (_DWORD *)*((_QWORD *)this + 68);
  v9 = (_DWORD *)*((_QWORD *)this + 67);
  if ( v9 != v8 )
  {
    v10 = v27[1];
    do
    {
      v11 = *(_QWORD *)(*(_QWORD *)v9 + 48LL);
      v12 = *(_QWORD *)(v11 + 32);
      HIDWORD(v30) = *(_QWORD *)v9 - *(_DWORD *)(v11 + 56) + 56;
      v13 = *(_DWORD *)(v12 + 12);
      v14 = v9[2];
      v31 = v14;
      LODWORD(v30) = v13;
      if ( v10 == (_DWORD *)v3 )
      {
        std::vector<PathSharedSectionData>::_Emplace_reallocate<PathSharedSectionData>((__int64)v27, v10, (__int64)&v30);
        v10 = v27[1];
        v3 = v28;
      }
      else
      {
        *(_QWORD *)v10 = v30;
        v10[2] = v14;
        v10 += 3;
        v27[1] = v10;
      }
      v9 += 4;
    }
    while ( v9 != v8 );
  }
  v15 = 3 * v7;
  v16 = v27[0];
  DirectComposition::CDevice::ResourceSetBufferProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    a2,
    32,
    v27[0],
    4 * v15);
  v17 = (char *)operator new(0x20uLL);
  v18 = v17;
  if ( v17 )
  {
    v19 = *((_QWORD *)this + 68) - *((_QWORD *)this + 67);
    *(_QWORD *)v17 = &Windows::UI::Composition::PathKeyFrameAnimationResources::`vftable';
    *((_QWORD *)v17 + 1) = 0LL;
    *((_QWORD *)v17 + 2) = 0LL;
    *((_QWORD *)v17 + 3) = 0LL;
    v20 = v19 >> 4;
    if ( v20 )
    {
      if ( v20 > 0x1FFFFFFFFFFFFFFFLL )
        std::_Dwm_Xlength_error(v17 + 8);
      std::vector<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>::_Reallocate_exactly();
    }
  }
  else
  {
    v18 = 0LL;
  }
  v21 = (__int64 *)*((_QWORD *)this + 68);
  for ( i = (__int64 *)*((_QWORD *)this + 67); i != v21; i += 2 )
  {
    v23 = *i;
    if ( *(_DWORD *)(*i + 24) != 3 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v23 + 16) + 40LL))(v23 + 16, 3LL);
      *(_DWORD *)(v23 + 24) = 3;
    }
    v24 = *i;
    v30 = (DirectComposition::CDelayedDestructionObject *)v24;
    if ( v24 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v24 + 8));
    v25 = (DirectComposition::CDelayedDestructionObject **)*((_QWORD *)v18 + 2);
    if ( v25 == *((DirectComposition::CDelayedDestructionObject ***)v18 + 3) )
    {
      std::vector<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>(
        v18 + 8,
        (__int64)v25,
        &v30);
    }
    else
    {
      *v25 = 0LL;
      if ( v25 != &v30 )
      {
        v30 = 0LL;
        *v25 = (DirectComposition::CDelayedDestructionObject *)v24;
      }
      *((_QWORD *)v18 + 2) += 8LL;
    }
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v30);
  }
  *v29 = (struct Windows::UI::Composition::KeyFrameAnimationResources *)v18;
  if ( v16 )
    std::_Deallocate<16,0>(v16, 4 * ((v3 - (_BYTE *)v16) >> 2));
  return 0LL;
}
