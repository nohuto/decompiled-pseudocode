/*
 * XREFs of ?Append@?$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@UICompositionColorGradientStopCollection@234@@Composition@UI@Windows@@UEAAJPEAUICompositionColorGradientStop@234@@Z @ 0x180045CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Uninitialized_move@PEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAPEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x1800B7010 (--$_Uninitialized_move@PEAV-$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplementsIVectorWinRt<Windows::UI::Composition::CompositionColorGradientStopCollection,Windows::UI::Composition::ICompositionColorGradientStopCollection>::Append(
        __int64 a1,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // esi
  int v6; // eax
  Microsoft::WRL2::NestableRuntimeClass **v7; // rdx
  Microsoft::WRL2::NestableRuntimeClass **v8; // rsi
  const char *v9; // rcx
  __int64 v10; // r15
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rax
  volatile signed __int32 *v17; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v18; // r14
  Microsoft::WRL2::NestableRuntimeClass **v19; // r8
  Microsoft::WRL2::NestableRuntimeClass **v20; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v21; // rsi
  Microsoft::WRL2::NestableRuntimeClass **v22; // r15
  Microsoft::WRL2::NestableRuntimeClass *v23; // rcx
  void *v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // rdx
  volatile signed __int32 *v28; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v30; // rcx
  unsigned int v31; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v32; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  void *v34; // [rsp+70h] [rbp+40h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v35; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp+58h] BYREF

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 128) & 2) != 0 )
  {
    v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           *(struct Microsoft::WRL2::ContextSession **)(a1 - 136),
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionColorGradientStop::s_InterfaceType,
           &v32);
    v35 = v32;
    if ( v5 < 0 )
    {
      v31 = 143;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, Microsoft::WRL2::NestableRuntimeClass **))(*(_QWORD *)(a1 - 32) + 16LL))(
             a1 - 32,
             &v35);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v8 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 - 16);
        v9 = *(const char **)(a1 - 8);
        if ( v8 == (Microsoft::WRL2::NestableRuntimeClass **)v9 )
        {
          v10 = ((__int64)v8 - *(_QWORD *)(a1 - 24)) >> 3;
          if ( v10 == 0x1FFFFFFFFFFFFFFFLL )
            std::_Dwm_Xlength_error(v9);
          v11 = v10 + 1;
          v12 = (__int64)&v9[-*(_QWORD *)(a1 - 24)] >> 3;
          if ( v12 > 0x1FFFFFFFFFFFFFFFLL - (v12 >> 1) )
          {
            v14 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else
          {
            v13 = (v12 >> 1) + v12;
            v14 = v10 + 1;
            if ( v13 >= v11 )
              v14 = v13;
            if ( v14 > 0x1FFFFFFFFFFFFFFFLL )
              std::_Throw_bad_array_new_length();
          }
          v15 = v14;
          v16 = std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v14);
          v17 = (volatile signed __int32 *)v35;
          v18 = (Microsoft::WRL2::NestableRuntimeClass **)v16;
          *(_QWORD *)(v16 + 8 * v10) = v35;
          if ( v17 && _InterlockedIncrement(v17 + 4) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 80LL))(v17);
          v19 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 - 16);
          v20 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 - 24);
          if ( v8 == v19 )
          {
            v7 = v18;
            while ( v20 != v19 )
            {
              *v7 = 0LL;
              if ( v7 != v20 )
              {
                *v7 = *v20;
                *v20 = 0LL;
              }
              ++v7;
              ++v20;
            }
          }
          else
          {
            std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>>(
              v20,
              v8,
              v18);
            std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>>(
              v8,
              *(_QWORD *)(a1 - 16),
              &v18[v10 + 1]);
          }
          v21 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 - 24);
          if ( v21 )
          {
            v22 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 - 16);
            while ( v21 != v22 )
            {
              v23 = *v21;
              if ( *v21 )
              {
                *v21 = 0LL;
                Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v23);
              }
              ++v21;
            }
            v24 = *(void **)(a1 - 24);
            v25 = *(_QWORD *)(a1 - 8) - (_QWORD)v24;
            v34 = v24;
            v26 = v25 & 0xFFFFFFFFFFFFFFF8uLL;
            v36 = v26;
            if ( v26 >= 0x1000 )
            {
              std::_Adjust_manually_vector_aligned(&v34, &v36);
              v24 = v34;
              v26 = v36;
            }
            operator delete(v24, v26);
          }
          *(_QWORD *)(a1 - 24) = v18;
          *(_QWORD *)(a1 - 16) = &v18[v11];
          *(_QWORD *)(a1 - 8) = &v18[v15];
        }
        else
        {
          v30 = v35;
          *v8 = v35;
          if ( v30 )
            Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v30);
          *(_QWORD *)(a1 - 16) += 8LL;
        }
        (**(void (__fastcall ***)(__int64, Microsoft::WRL2::NestableRuntimeClass **))(a1 - 32))(a1 - 32, v7);
        v28 = (volatile signed __int32 *)v35;
        v5 = 0;
        if ( v35 )
        {
          v35 = 0LL;
          if ( _InterlockedExchangeAdd(v28 + 4, 0xFFFFFFFF) == 1 )
          {
            LOBYTE(v27) = 1;
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v28 + 64LL))(v28, v27);
          }
        }
        goto LABEL_32;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x78,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
        (const char *)(unsigned int)v6);
      v31 = 145;
    }
    DoStackCaptureDirect(v5, v31);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v35);
LABEL_32:
    Microsoft::WRL2::ContextSession::EndApiEntry(v2);
    return (unsigned int)v5;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return 2147483667LL;
}
