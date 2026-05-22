/*
 * XREFs of ?Remove@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180062DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnVisualRemoved@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@@Z @ 0x18010153C (-OnVisualRemoved@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCollection::Api::Remove(
        Windows::UI::Composition::VisualCollection::Api *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // eax
  char *v8; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // rbx
  signed __int32 v12; // eax
  struct Windows::UI::Composition::Visual *v13; // r14
  __int64 v14; // rcx
  volatile signed __int32 *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // r14d
  int v20; // r12d
  DirectComposition::CDevice *v21; // rdi
  _DWORD *v22; // rax
  void (__fastcall ***v23)(_QWORD); // rcx
  __int64 v25; // rcx
  unsigned int v26; // edx
  int v27; // ecx
  void *v28; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct Microsoft::WRL2::ContextRuntimeClass *v30; // [rsp+80h] [rbp+18h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v31; // [rsp+88h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    if ( a2 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 256LL))(*((_QWORD *)this + 2));
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x45,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualcollection.cpp",
          (const char *)(unsigned int)v5);
        DoStackCaptureDirect(v6, 0xDDu);
      }
      else
      {
        v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
               (struct Microsoft::WRL2::ContextSession *)v2,
               a2,
               (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
               &v30);
        v9 = v30;
        v6 = v7;
        v31 = v30;
        if ( v7 < 0 )
        {
          v26 = 224;
          v27 = v7;
        }
        else
        {
          v10 = *((_QWORD *)this + 2);
          v11 = (__int64 *)((char *)v30 + 136);
          if ( *((_QWORD *)v30 + 17) == v10 )
          {
            v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v30 + 4, 1u);
            v13 = v30;
            if ( !v12 )
              (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *))(*(_QWORD *)v30 + 80LL))(v30);
            if ( Windows::UI::Composition::Visual::s_fIsVisualTreeCallbackRegistered )
              Windows::UI::Composition::CompositionDiagnosticsInterop::OnVisualRemoved(v13);
            v14 = *v11;
            v6 = 0;
            v15 = 0LL;
            if ( v9 != (struct Microsoft::WRL2::ContextRuntimeClass *)-136LL )
              v15 = (volatile signed __int32 *)v13;
            if ( v14 )
            {
              v16 = *(_QWORD *)(v14 + 144);
              v8 = (char *)v9 + 160;
              if ( (volatile signed __int32 *)v16 == v15 )
              {
                *(_QWORD *)(v14 + 144) = *((_QWORD *)v9 + 19);
                v25 = *((_QWORD *)v9 + 19);
                if ( v25 )
                  *(_QWORD *)(v25 + 160) = *(_QWORD *)v8;
              }
              else
              {
                v17 = *((_QWORD *)v9 + 19);
                v18 = *(_QWORD *)v8;
                if ( v17 )
                {
                  *(_QWORD *)(v17 + 160) = v18;
                  *(_QWORD *)(*(_QWORD *)v8 + 152LL) = *((_QWORD *)v9 + 19);
                }
                else
                {
                  *(_QWORD *)(v16 + 160) = v18;
                  *(_QWORD *)(*(_QWORD *)v8 + 152LL) = 0LL;
                }
              }
              *v11 = 0LL;
              *((_QWORD *)v9 + 19) = 0LL;
              *(_QWORD *)v8 = v15;
            }
            if ( _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF) == 1 )
            {
              LOBYTE(v8) = 1;
              (*(void (__fastcall **)(volatile signed __int32 *, char *))(*(_QWORD *)v15 + 64LL))(v15, v8);
            }
            v19 = *(_DWORD *)(v10 + 128);
            if ( v19 )
            {
              v20 = *((_DWORD *)v30 + 32);
              if ( v20 )
              {
                v21 = *(DirectComposition::CDevice **)(*(_QWORD *)(v10 + 24) + 456LL);
                DirectComposition::CDevice::BeginKernelCommand(v21, 0xCu, &v28, 0);
                v22 = v28;
                *(_DWORD *)v28 = 20;
                v22[1] = v19;
                v22[2] = v20;
                v23 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v21 + 10);
                if ( v23 )
                  (**v23)(v23);
              }
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 4, 0xFFFFFFFF) == 1 )
            {
              LOBYTE(v8) = 1;
              (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, char *))(*(_QWORD *)v30 + 64LL))(
                v30,
                v8);
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 4, 0xFFFFFFFF) == 1 )
            {
              LOBYTE(v8) = 1;
              (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, char *))(*(_QWORD *)v30 + 64LL))(
                v30,
                v8);
            }
            goto LABEL_27;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x569,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
            (const char *)0x80070057LL);
          v6 = -2147024809;
          v26 = 226;
          v27 = -2147024809;
        }
        DoStackCaptureDirect(v27, v26);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v31);
      }
    }
    else
    {
      v6 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0xDBu);
    }
LABEL_27:
    Microsoft::WRL2::ContextSession::EndApiEntry(v2);
    return v6;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return 2147483667LL;
}
