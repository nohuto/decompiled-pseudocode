/*
 * XREFs of ?Append@?$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAUICompositionShape@234@@Z @ 0x180077570
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
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Uninitialized_move@PEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAPEAV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x1800B7010 (--$_Uninitialized_move@PEAV-$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplementsIVectorWinRt<Windows::UI::Composition::CompositionShapeCollection,>::Append(
        __int64 a1,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // esi
  int v6; // eax
  Microsoft::WRL2::NestableRuntimeClass **v7; // rdx
  Microsoft::WRL2::NestableRuntimeClass **v8; // r8
  Microsoft::WRL2::NestableRuntimeClass **v9; // r15
  const char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  SIZE_T v17; // r12
  HANDLE ProcessHeap; // rax
  unsigned __int64 v19; // r14
  volatile signed __int32 *v20; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v21; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v22; // r15
  __int64 v23; // rdx
  volatile signed __int32 *v24; // rcx
  Microsoft::WRL2::NestableRuntimeClass **i; // rbp
  Microsoft::WRL2::NestableRuntimeClass *v27; // rcx
  void *v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v31; // rcx
  unsigned int v32; // edx
  LPVOID v33; // rax
  struct Microsoft::WRL2::ContextRuntimeClass *v34; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v36; // [rsp+70h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v37; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v38; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 128) & 2) != 0 )
  {
    v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           *(struct Microsoft::WRL2::ContextSession **)(a1 - 136),
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionShape::s_InterfaceType,
           &v34);
    v37 = v34;
    if ( v5 < 0 )
    {
      v32 = 143;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, Microsoft::WRL2::NestableRuntimeClass **))(*(_QWORD *)(a1 - 32) + 16LL))(
             a1 - 32,
             &v37);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v9 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 - 16);
        v5 = 0;
        v10 = *(const char **)(a1 - 8);
        if ( v9 != (Microsoft::WRL2::NestableRuntimeClass **)v10 )
        {
          v31 = v37;
          *v9 = v37;
          if ( v31 )
            Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v31);
          *(_QWORD *)(a1 - 16) += 8LL;
          goto LABEL_20;
        }
        v11 = *(_QWORD *)(a1 - 24);
        v12 = ((__int64)v9 - v11) >> 3;
        if ( v12 == 0x1FFFFFFFFFFFFFFFLL )
          std::_Dwm_Xlength_error(v10);
        v13 = v12 + 1;
        v14 = (__int64)&v10[-v11] >> 3;
        v15 = v14 >> 1;
        if ( v14 <= 0x1FFFFFFFFFFFFFFFLL - (v14 >> 1) )
        {
          v16 = v12 + 1;
          if ( v15 + v14 >= v13 )
            v16 = v15 + v14;
          if ( v16 <= 0x1FFFFFFFFFFFFFFFLL )
          {
            v17 = 8 * v16;
            if ( v17 < 0x1000 )
            {
              if ( v17 )
              {
                ProcessHeap = GetProcessHeap();
                v19 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, v17);
                if ( v19 )
                  goto LABEL_13;
LABEL_46:
                ModuleFailFastForHRESULT(2147942414LL, retaddr);
              }
              v19 = 0LL;
              goto LABEL_13;
            }
            if ( v17 + 39 >= v17 )
            {
              v33 = operator new(v17 + 39);
              if ( !v33 )
              {
                _o__invalid_parameter_noinfo_noreturn();
                __debugbreak();
                goto LABEL_46;
              }
              v19 = ((unsigned __int64)v33 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
              *(_QWORD *)(v19 - 8) = v33;
LABEL_13:
              v20 = (volatile signed __int32 *)v37;
              *(_QWORD *)(v19 + 8 * v12) = v37;
              if ( v20 && _InterlockedIncrement(v20 + 4) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 80LL))(v20);
              v7 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 - 16);
              v8 = (Microsoft::WRL2::NestableRuntimeClass **)v19;
              v21 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 - 24);
              if ( v9 == v7 )
              {
                for ( ; v21 != v7; ++v21 )
                {
                  *v8 = 0LL;
                  if ( v8 != v21 )
                  {
                    *v8 = *v21;
                    *v21 = 0LL;
                  }
                  ++v8;
                }
              }
              else
              {
                std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>>(
                  v21,
                  v9,
                  v19);
                std::_Uninitialized_move<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop> *,std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>>(
                  v9,
                  *(_QWORD *)(a1 - 16),
                  v19 + 8 * (v12 + 1));
              }
              v22 = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 - 24);
              if ( v22 )
              {
                for ( i = *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 - 16); v22 != i; ++v22 )
                {
                  v27 = *v22;
                  if ( *v22 )
                  {
                    *v22 = 0LL;
                    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v27);
                  }
                }
                v28 = *(void **)(a1 - 24);
                v29 = *(_QWORD *)(a1 - 8) - (_QWORD)v28;
                v36 = v28;
                v30 = v29 & 0xFFFFFFFFFFFFFFF8uLL;
                v38 = v30;
                if ( v30 >= 0x1000 )
                {
                  std::_Adjust_manually_vector_aligned(&v36, &v38);
                  v28 = v36;
                  v30 = v38;
                }
                operator delete(v28, v30);
              }
              *(_QWORD *)(a1 - 24) = v19;
              *(_QWORD *)(a1 - 16) = v19 + 8 * v13;
              *(_QWORD *)(a1 - 8) = v17 + v19;
LABEL_20:
              (**(void (__fastcall ***)(__int64, Microsoft::WRL2::NestableRuntimeClass **, Microsoft::WRL2::NestableRuntimeClass **))(a1 - 32))(
                a1 - 32,
                v7,
                v8);
              v24 = (volatile signed __int32 *)v37;
              if ( v37 )
              {
                v37 = 0LL;
                if ( _InterlockedExchangeAdd(v24 + 4, 0xFFFFFFFF) == 1 )
                {
                  LOBYTE(v23) = 1;
                  (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v24 + 64LL))(v24, v23);
                }
              }
              goto LABEL_23;
            }
          }
        }
        std::_Throw_bad_array_new_length();
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x78,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
        (const char *)(unsigned int)v6);
      v32 = 145;
    }
    DoStackCaptureDirect(v5, v32);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v37);
LABEL_23:
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
