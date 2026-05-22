/*
 * XREFs of ?End@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x180078B18
 * Callers:
 *     ?End@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJXZ @ 0x180078AC0 (-End@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204 (-MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV-$RefPtr.c)
 *     ??4?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionBatch@Composition@UI@Windows@@@Z @ 0x18001AFE8 (--4-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositi.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyBatchEnded@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@_N1@Z @ 0x18015AFF4 (-NotifyBatchEnded@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@_N1@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionBatch::End(Windows::UI::Composition::CompositionBatch *this)
{
  _BOOL8 v2; // r8
  int v3; // ecx
  _QWORD *v4; // r15
  __int64 v5; // rdx
  Microsoft::WRL2::NestableRuntimeClass ***v6; // r14
  _DWORD *v7; // rax
  Microsoft::WRL2::NestableRuntimeClass **v8; // rdi
  Microsoft::WRL2::NestableRuntimeClass **v9; // rbx
  volatile signed __int32 *v10; // r12
  Microsoft::WRL2::NestableRuntimeClass *v11; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v12; // rcx
  __int64 v13; // r13
  Microsoft::WRL2::NestableRuntimeClass *v14; // rcx
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  Windows::UI::Composition::BatchController *v21; // rcx
  int v22; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)this + 34) == GetCurrentThreadId() )
  {
    if ( *((_BYTE *)this + 130) && !*((_BYTE *)this + 128) && !*((_BYTE *)this + 129) )
    {
      v3 = *((_DWORD *)this + 33);
      LOBYTE(v2) = v3 == 0;
      if ( *((_DWORD *)this + 36) )
      {
        v21 = (Windows::UI::Composition::BatchController *)*((_QWORD *)this + 22);
        *((_BYTE *)this + 129) = 1;
        Windows::UI::Composition::BatchController::NotifyBatchEnded(v21, this, v2, 0);
        return 0LL;
      }
      v4 = (_QWORD *)*((_QWORD *)this + 22);
      v5 = *((unsigned int *)this + 35);
      *((_BYTE *)this + 128) = 1;
      v6 = (Microsoft::WRL2::NestableRuntimeClass ***)((char *)v4 + (v3 != 0 ? 40LL : 32LL));
      if ( !v3 && *((_DWORD *)this + 34) == *(_DWORD *)(*((_QWORD *)this + 3) + 104LL) )
      {
        v7 = (_DWORD *)v4[1];
        if ( v7 )
        {
          --*v7;
          v4[1] = 0LL;
        }
      }
      if ( !(_DWORD)v5 )
      {
        Windows::UI::Composition::BatchController::MigrateBatch((__int64)v4, (__int64)this, (__int64)v6, 3);
        LOBYTE(v18) = 1;
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4[3] + 440LL) + 48LL))(
                *(_QWORD *)(v4[3] + 440LL),
                v18);
        if ( v19 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xCB7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
            (const char *)(unsigned int)v19,
            v22);
        return 0LL;
      }
      v8 = (Microsoft::WRL2::NestableRuntimeClass **)*((_QWORD *)this + 23);
      if ( v8 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*((Microsoft::WRL2::NestableRuntimeClass **)this + 23));
      v9 = (Microsoft::WRL2::NestableRuntimeClass **)*((_QWORD *)this + 24);
      if ( v9 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*((Microsoft::WRL2::NestableRuntimeClass **)this + 24));
      v10 = (volatile signed __int32 *)v4[6];
      if ( *((volatile signed __int32 **)this + 24) != v10 )
      {
        if ( v10 && _InterlockedIncrement(v10 + 4) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, _BOOL8))(*(_QWORD *)v10 + 80LL))(v10, v5, v2);
        v11 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 24);
        *((_QWORD *)this + 24) = v10;
        if ( v11 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
      }
      v12 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 23);
      if ( v12 )
      {
        *((_QWORD *)this + 23) = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
      }
      v13 = v4[6];
      if ( v13 && *(Windows::UI::Composition::CompositionBatch **)(v13 + 184) != this )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)this + 4) == 1 )
          (*(void (__fastcall **)(Windows::UI::Composition::CompositionBatch *, __int64, _BOOL8))(*(_QWORD *)this + 80LL))(
            this,
            v5,
            v2);
        v14 = *(Microsoft::WRL2::NestableRuntimeClass **)(v13 + 184);
        *(_QWORD *)(v13 + 184) = this;
        if ( v14 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v14);
      }
      if ( (Windows::UI::Composition::CompositionBatch *)v4[6] != this )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)this + 4) == 1 )
          (*(void (__fastcall **)(Windows::UI::Composition::CompositionBatch *, __int64, _BOOL8))(*(_QWORD *)this + 80LL))(
            this,
            v5,
            v2);
        v15 = (volatile signed __int32 *)v4[6];
        v4[6] = this;
        if ( v15 && _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF) == 1 )
        {
          LOBYTE(v5) = 1;
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, _BOOL8))(*(_QWORD *)v15 + 64LL))(v15, v5, v2);
        }
      }
      if ( v8 )
      {
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=(
          v8 + 24,
          (Microsoft::WRL2::NestableRuntimeClass *)v9);
        if ( !v9 )
        {
LABEL_44:
          *((_DWORD *)this + 33) = 2;
          goto LABEL_45;
        }
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=(
          v9 + 23,
          (Microsoft::WRL2::NestableRuntimeClass *)v8);
      }
      else
      {
        if ( v6 && *v6 != v9 )
        {
          if ( v9 )
            Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)v9);
          v16 = (volatile signed __int32 *)*v6;
          *v6 = v9;
          if ( v16 && _InterlockedExchangeAdd(v16 + 4, 0xFFFFFFFF) == 1 )
          {
            LOBYTE(v5) = 1;
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, _BOOL8))(*(_QWORD *)v16 + 64LL))(v16, v5, v2);
          }
        }
        if ( !v9 )
          goto LABEL_44;
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(v9 + 23);
      }
      *((_DWORD *)this + 33) = 2;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v9);
LABEL_45:
      if ( v8 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v8);
      return 0LL;
    }
    v20 = 228LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
      (const char *)0x8000000ELL);
    v20 = 222LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
    (const char *)0x8000000ELL);
  return 2147483662LL;
}
