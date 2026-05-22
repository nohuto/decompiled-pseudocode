/*
 * XREFs of ?NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z @ 0x18001AC30
 * Callers:
 *     ?Destroy@CompositionEffectFactory@Composition@UI@Windows@@UEAAXXZ @ 0x180019160 (-Destroy@CompositionEffectFactory@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Thunk_Message_CompilationSucceeded_62@?$IEffectTemplateEvent_Receive@VCompositionEffectFactory@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180019C30 (-Thunk_Message_CompilationSucceeded_62@-$IEffectTemplateEvent_Receive@VCompositionEffectFactory@.c)
 *     ?NotifyCompleted@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x18001ABE0 (-NotifyCompleted@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?Message_CompilationFailed@CompositionEffectFactory@Composition@UI@Windows@@QEAAJJPEBG@Z @ 0x180176AA4 (-Message_CompilationFailed@CompositionEffectFactory@Composition@UI@Windows@@QEAAJJPEBG@Z.c)
 * Callees:
 *     ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204 (-MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV-$RefPtr.c)
 *     ?CheckCompleted@CompositionBatch@Composition@UI@Windows@@AEAA_NXZ @ 0x180010E0C (-CheckCompleted@CompositionBatch@Composition@UI@Windows@@AEAA_NXZ.c)
 *     ??4?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18001AF98 (--4-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionBatch@Composition@UI@Windows@@@Z @ 0x18001AFE8 (--4-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositi.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 */

void __fastcall Windows::UI::Composition::BatchController::NotifyObjectCompleted(
        Windows::UI::Composition::BatchController *this,
        struct Windows::UI::Composition::BatchMember *a2)
{
  int v2; // r15d
  char v4; // bl
  __int64 v5; // rcx
  struct Windows::UI::Composition::BatchMember *v6; // rdi
  __int64 v7; // rsi
  int v8; // eax
  bool v9; // zf
  __int64 v10; // rsi
  char *v11; // r8
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // r12
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // rcx
  __int64 v17; // r13
  Microsoft::WRL2::NestableRuntimeClass *v18; // rcx
  volatile signed __int32 *v19; // rcx
  volatile signed __int32 *v20; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v21; // rax
  struct Windows::UI::Composition::BatchMember *v22; // rax
  _DWORD *v23; // rsi
  unsigned int i; // r14d
  Windows::UI::Composition::CompositionBatch *v25; // rcx
  __int64 v26; // rcx
  int v27; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v29; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)a2;
  v6 = a2;
  if ( *(_QWORD *)a2 )
  {
    if ( (v5 & 1) != 0 )
    {
      v22 = (struct Windows::UI::Composition::BatchMember *)*((_QWORD *)this + 2);
      if ( v22 == a2 )
        goto LABEL_67;
      do
      {
        a2 = v22;
        v22 = (struct Windows::UI::Composition::BatchMember *)(*(_QWORD *)v22 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( !v22 )
          Microsoft::WRL2::FailFast::Do();
      }
      while ( v22 != v6 );
      if ( !a2 )
LABEL_67:
        *((_QWORD *)this + 2) = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      else
        *(_QWORD *)a2 = v5;
    }
    else
    {
      --*(_DWORD *)(v5 + 140);
      if ( Windows::UI::Composition::CompositionBatch::CheckCompleted((Windows::UI::Composition::CompositionBatch *)v5) )
      {
        Windows::UI::Composition::BatchController::MigrateBatch((__int64)this, *(_QWORD *)a2, (__int64)this + 48, 3);
        v4 = 1;
      }
    }
  }
  v7 = *((_QWORD *)v6 + 1);
  if ( v7 )
  {
    if ( (v7 & 1) != 0 )
    {
      v23 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFEuLL);
      for ( i = 0; i < v23[1]; ++i )
      {
        v25 = *(Windows::UI::Composition::CompositionBatch **)&v23[2 * i + 2];
        --*((_DWORD *)v25 + 35);
        if ( Windows::UI::Composition::CompositionBatch::CheckCompleted(v25) )
        {
          Windows::UI::Composition::BatchController::MigrateBatch((__int64)this, v26, (__int64)this + 48, 3);
          v4 = 1;
        }
      }
      v9 = (*v23)-- == 1;
      if ( v9 )
        operator delete(v23);
    }
    else
    {
      v9 = (*(_DWORD *)(v7 + 140))-- == 1;
      if ( v9 && *(_BYTE *)(v7 + 128) )
      {
        v10 = *((_QWORD *)v6 + 1);
        v11 = (char *)this + 48;
        v27 = v2;
        v12 = *(volatile signed __int32 **)(v10 + 184);
        if ( v12 && _InterlockedIncrement(v12 + 4) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, struct Windows::UI::Composition::BatchMember *, char *))(*(_QWORD *)v12 + 80LL))(
            v12,
            a2,
            v11);
          v11 = (char *)this + 48;
        }
        v13 = *(volatile signed __int32 **)(v10 + 192);
        v29 = (Microsoft::WRL2::NestableRuntimeClass *)v13;
        if ( v13 && _InterlockedIncrement(v13 + 4) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, struct Windows::UI::Composition::BatchMember *, char *))(*(_QWORD *)v13 + 80LL))(
            v13,
            a2,
            v11);
          v11 = (char *)this + 48;
        }
        v14 = (volatile signed __int32 *)*((_QWORD *)this + 7);
        if ( *(volatile signed __int32 **)(v10 + 192) != v14 )
        {
          if ( v14 && _InterlockedIncrement(v14 + 4) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, struct Windows::UI::Composition::BatchMember *, char *))(*(_QWORD *)v14 + 80LL))(
              v14,
              a2,
              v11);
            v11 = (char *)this + 48;
          }
          v15 = *(volatile signed __int32 **)(v10 + 192);
          *(_QWORD *)(v10 + 192) = v14;
          if ( v15 && _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, char *))(*(_QWORD *)v15 + 64LL))(v15, 1LL, v11);
            v11 = (char *)this + 48;
          }
        }
        v16 = *(volatile signed __int32 **)(v10 + 184);
        if ( v16 )
        {
          *(_QWORD *)(v10 + 184) = 0LL;
          if ( _InterlockedExchangeAdd(v16 + 4, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, char *))(*(_QWORD *)v16 + 64LL))(v16, 1LL, v11);
            v11 = (char *)this + 48;
          }
        }
        v17 = *((_QWORD *)this + 7);
        if ( v17 && *(_QWORD *)(v17 + 184) != v10 )
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 16)) == 1 )
          {
            (*(void (__fastcall **)(__int64, struct Windows::UI::Composition::BatchMember *, char *))(*(_QWORD *)v10 + 80LL))(
              v10,
              a2,
              v11);
            v11 = (char *)this + 48;
          }
          v18 = *(Microsoft::WRL2::NestableRuntimeClass **)(v17 + 184);
          *(_QWORD *)(v17 + 184) = v10;
          if ( v18 )
          {
            Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v18);
            v11 = (char *)this + 48;
          }
        }
        if ( *((_QWORD *)this + 7) != v10 )
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 16)) == 1 )
          {
            (*(void (__fastcall **)(__int64, struct Windows::UI::Composition::BatchMember *, char *))(*(_QWORD *)v10 + 80LL))(
              v10,
              a2,
              v11);
            v11 = (char *)this + 48;
          }
          v19 = (volatile signed __int32 *)*((_QWORD *)this + 7);
          *((_QWORD *)this + 7) = v10;
          if ( v19 && _InterlockedExchangeAdd(v19 + 4, 0xFFFFFFFF) == 1 )
          {
            LOBYTE(a2) = 1;
            (*(void (__fastcall **)(volatile signed __int32 *, struct Windows::UI::Composition::BatchMember *, char *))(*(_QWORD *)v19 + 64LL))(
              v19,
              a2,
              v11);
            v11 = (char *)this + 48;
          }
        }
        if ( v12 )
        {
          if ( *((Microsoft::WRL2::NestableRuntimeClass **)v12 + 24) != v29 )
          {
            if ( v29 )
              Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v29);
            v20 = (volatile signed __int32 *)*((_QWORD *)v12 + 24);
            *((_QWORD *)v12 + 24) = v29;
            if ( v20 && _InterlockedExchangeAdd(v20 + 4, 0xFFFFFFFF) == 1 )
            {
              LOBYTE(a2) = 1;
              (*(void (__fastcall **)(volatile signed __int32 *, struct Windows::UI::Composition::BatchMember *, char *))(*(_QWORD *)v20 + 64LL))(
                v20,
                a2,
                v11);
            }
          }
          if ( v29 )
            Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=((char *)v29 + 184, v12);
        }
        else
        {
          if ( v11 )
            Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=(v11, &v29);
          if ( v29 )
            Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock((char *)v29 + 184);
        }
        v21 = v29;
        *(_DWORD *)(v10 + 132) = 3;
        if ( v21 && _InterlockedExchangeAdd((volatile signed __int32 *)v21 + 4, 0xFFFFFFFF) == 1 )
        {
          LOBYTE(a2) = 1;
          (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, struct Windows::UI::Composition::BatchMember *, char *))(*(_QWORD *)v29 + 64LL))(
            v29,
            a2,
            v11);
        }
        if ( v12 && _InterlockedExchangeAdd(v12 + 4, 0xFFFFFFFF) == 1 )
        {
          LOBYTE(a2) = 1;
          (*(void (__fastcall **)(volatile signed __int32 *, struct Windows::UI::Composition::BatchMember *, char *))(*(_QWORD *)v12 + 64LL))(
            v12,
            a2,
            v11);
        }
        v4 = 1;
      }
    }
  }
  *(_QWORD *)v6 = 0LL;
  *((_QWORD *)v6 + 1) = 0LL;
  if ( v4 )
  {
    LOBYTE(a2) = 1;
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::UI::Composition::BatchMember *))(**(_QWORD **)(*((_QWORD *)this + 3) + 440LL)
                                                                                           + 48LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 440LL),
           a2);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xCB7,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v8,
        v27);
  }
}
