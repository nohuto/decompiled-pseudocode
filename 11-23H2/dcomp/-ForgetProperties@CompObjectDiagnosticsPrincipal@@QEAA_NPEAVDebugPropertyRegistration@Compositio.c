/*
 * XREFs of ?ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Composition@UI@Windows@@@Z @ 0x18019D780
 * Callers:
 *     ?UnDebugProperties2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVDebugPropertyRegistration@234@@Z @ 0x18016EF30 (-UnDebugProperties2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEA.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U?$less@I@std@@V?$allocator@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800E6460 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U-$less@I@std.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU?$_Tree_node@UObjectPropertyPair@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E71BC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU-$_Tree_nod.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAXPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU12@AEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@0@@Z @ 0x18019C104 (--$_Destroy_range@V-$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAXPEAUC.c)
 *     ??1PropInfo@CompObjectDiagnosticsPrincipal@@QEAA@XZ @ 0x18019CA68 (--1PropInfo@CompObjectDiagnosticsPrincipal@@QEAA@XZ.c)
 *     ?DropCallbacks@CompObjectDiagnosticsPrincipal@@AEAAXXZ @ 0x18019D674 (-DropCallbacks@CompObjectDiagnosticsPrincipal@@AEAAXXZ.c)
 */

char __fastcall CompObjectDiagnosticsPrincipal::ForgetProperties(
        CompObjectDiagnosticsPrincipal *this,
        struct Windows::UI::Composition::DebugPropertyRegistration *a2)
{
  unsigned int *v2; // r14
  gsl::details *v5; // rcx
  char v6; // di
  unsigned int *i; // r15
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  struct Windows::UI::Composition::DebugPropertyRegistration *v16; // r9
  __int64 v17; // rax
  Microsoft::WRL2::NestableRuntimeClass *v18; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]

  v2 = (unsigned int *)*((_QWORD *)a2 + 6);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v20, (__int64)(*((_QWORD *)a2 + 7) - (_QWORD)v2) >> 2);
  if ( v20[0] == -1LL || (v6 = 0, !v2) && v20[0] )
  {
    gsl::details::terminate(v5);
    JUMPOUT(0x18019D8F0LL);
  }
  for ( i = &v2[v20[0]]; v2 != i; ++v2 )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,SuperWetInkBallpointPenPoint const,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>,0>>::_Find_lower_bound<unsigned int>(
      (__int64 *)this + 7,
      (__int64)v20,
      v2);
    v8 = v21;
    if ( !*(_BYTE *)(v21 + 25) && *v2 >= *(_DWORD *)(v21 + 32) && v21 != *((_QWORD *)this + 7) )
    {
      std::_Destroy_range<std::allocator<CompObjectDiagnosticsPrincipal::Contributor>>(
        *(CompObjectDiagnosticsPrincipal::Contributor **)(v21 + 72),
        *(CompObjectDiagnosticsPrincipal::Contributor **)(v21 + 80));
      *(_QWORD *)(v8 + 80) = *(_QWORD *)(v8 + 72);
      if ( (*(_DWORD *)(v8 + 48))-- == 1 )
      {
        v12 = std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Extract((_QWORD *)this + 7, v8, v9, v10);
        CompObjectDiagnosticsPrincipal::PropInfo::~PropInfo((CompObjectDiagnosticsPrincipal::PropInfo *)(v12 + 5));
        std::_Deallocate<16,0>(v12, 0x60uLL);
      }
    }
  }
  v13 = *((_QWORD *)this + 12);
  v14 = 0LL;
  v15 = (*((_QWORD *)this + 13) - v13) >> 3;
  if ( v15 )
  {
    while ( 1 )
    {
      v16 = *(struct Windows::UI::Composition::DebugPropertyRegistration **)(v13 + 8 * v14);
      if ( v16 == a2 )
        break;
      if ( ++v14 >= v15 )
        goto LABEL_18;
    }
    *(_QWORD *)(v13 + 8 * v14) = *(_QWORD *)(v13 + 8 * v15 - 8);
    *(_QWORD *)(v13 + 8 * v15 - 8) = v16;
    v17 = *((_QWORD *)this + 13);
    v18 = *(Microsoft::WRL2::NestableRuntimeClass **)(v17 - 8);
    if ( v18 )
    {
      *(_QWORD *)(v17 - 8) = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v18);
    }
    *((_QWORD *)this + 13) -= 8LL;
  }
LABEL_18:
  if ( *((_QWORD *)this + 12) == *((_QWORD *)this + 13) )
  {
    if ( *((_QWORD *)this + 8) )
      CompObjectDiagnosticsPrincipal::DropCallbacks(this);
    else
      return 1;
  }
  return v6;
}
