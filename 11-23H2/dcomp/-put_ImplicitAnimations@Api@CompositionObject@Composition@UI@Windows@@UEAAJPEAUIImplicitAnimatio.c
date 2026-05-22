/*
 * XREFs of ?put_ImplicitAnimations@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUIImplicitAnimationCollection@345@@Z @ 0x180036860
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180078A40 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Api::put_ImplicitAnimations(
        Windows::UI::Composition::CompositionObject::Api *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned int *v8; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbp
  int v10; // r14d
  __int64 v11; // r13
  unsigned int *v12; // rdi
  unsigned int *v13; // rax
  unsigned __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // eax
  signed __int64 v18; // rdi
  signed __int64 v19; // r12
  void *v20; // rax
  __int128 v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v23; // [rsp+80h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 16) & 2) != 0 )
  {
    v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v2,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::ImplicitAnimationCollection::s_InterfaceType,
           &v23);
    v7 = v5;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0x48Bu);
      if ( v23 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v23);
    }
    else
    {
      v8 = (unsigned int *)*((_QWORD *)this + 8);
      v9 = v23;
      v10 = v8[1] & 0x20000000;
      if ( v10 || v23 )
      {
        if ( v8 == (unsigned int *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
        {
          v8 = (unsigned int *)DefaultHeap::AllocClear(0x38uLL);
          if ( !v8 )
            RaiseFailFastException(0LL, 0LL, 0);
          *v8 = 56;
          *((_QWORD *)this + 8) = v8;
        }
        v11 = *v8;
        v12 = v8 + 3;
        v13 = v8 + 4;
        v14 = (unsigned __int64)v8 + v11;
        while ( (unsigned __int64)v13 <= v14 )
        {
          v6 = *v12;
          v15 = BYTE3(v6) & 0x7F;
          if ( v15 == 3 )
            goto LABEL_14;
          if ( !v15 )
          {
            if ( (unsigned __int64)(v12 + 5) <= v14 )
            {
              v6 = v6 & 0xFF000000 | 0x10;
              *v12 = v6;
              goto LABEL_14;
            }
            break;
          }
          if ( !v10 && (v6 & 0xFFFFFF) == 0x10 && (__ROR4__(1, v15) & v8[1]) == 0 )
            goto LABEL_14;
          v12 = (unsigned int *)((char *)v12 + (v6 & 0xFFFFFF) + 4);
          v13 = v12 + 1;
        }
        v18 = (char *)v12 - (char *)v8;
        v19 = v18 + 44;
        v20 = DefaultHeap::Realloc(v8, v18 + 44);
        *((_QWORD *)this + 8) = v20;
        if ( !v20 )
          RaiseFailFastException(0LL, 0LL, 0);
        memset_0((void *)(v11 + *((_QWORD *)this + 8)), 0, v19 - v11);
        **((_DWORD **)this + 8) = v19;
        v12 = (unsigned int *)(*((_QWORD *)this + 8) + v18);
        *v12 &= 0xFF000010;
        *v12 |= 0x10u;
LABEL_14:
        if ( v10 )
          (*(void (__fastcall **)(_QWORD))(_mm_srli_si128(*(__m128i *)(v12 + 1), 8).m128i_u64[0] + 8))(*(_QWORD *)(v12 + 1));
        if ( v9 )
        {
          Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass(v9, &v22);
          *(_QWORD *)&v21 = v22;
          *((_QWORD *)&v21 + 1) = &Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass;
          v16 = *v12 & 0xFFFFFF | 0x83000000;
          *(_OWORD *)(v12 + 1) = v21;
          *v12 = v16;
          *(_DWORD *)(*((_QWORD *)this + 8) + 4LL) |= 0x20000000u;
          *(_BYTE *)(*((_QWORD *)this + 8) + 8LL) = 1;
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)this + 8) + 4LL) &= ~0x20000000u;
        }
      }
      v7 = 0;
      if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(v6) = 1;
        (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, __int64))(*(_QWORD *)v23 + 64LL))(v23, v6);
      }
    }
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v7;
}
