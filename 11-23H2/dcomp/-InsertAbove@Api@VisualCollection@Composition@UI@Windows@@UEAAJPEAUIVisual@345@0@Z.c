/*
 * XREFs of ?InsertAbove@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@0@Z @ 0x180063020
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
 *     ?OnVisualAdded@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@00_N@Z @ 0x1801013B0 (-OnVisualAdded@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@00_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCollection::Api::InsertAbove(
        Windows::UI::Composition::VisualCollection::Api *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v10; // rdi
  int v11; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  signed __int32 v16; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v17; // r12
  volatile signed __int32 *v18; // rsi
  DirectComposition::CDevice *v19; // r13
  int v20; // r15d
  int v21; // r12d
  _DWORD *v22; // rax
  void (__fastcall ***v23)(_QWORD); // rcx
  __int64 v25; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v26; // [rsp+20h] [rbp-58h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v27; // [rsp+28h] [rbp-50h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v28; // [rsp+30h] [rbp-48h] BYREF
  void *v29; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v31; // [rsp+80h] [rbp+8h]
  struct Microsoft::WRL2::ContextRuntimeClass *v32; // [rsp+98h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 256LL))(*((_QWORD *)this + 2));
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x45,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualcollection.cpp",
            (const char *)(unsigned int)v7);
          DoStackCaptureDirect(v8, 0x5Du);
        }
        else
        {
          v9 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                 (struct Microsoft::WRL2::ContextSession *)v3,
                 a2,
                 (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
                 &v32);
          v10 = v32;
          v8 = v9;
          v27 = v32;
          if ( v9 < 0 )
          {
            DoStackCaptureDirect(v9, 0x60u);
          }
          else
          {
            v11 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                    (struct Microsoft::WRL2::ContextSession *)v3,
                    a3,
                    (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
                    &v26);
            v12 = v26;
            v8 = v11;
            v28 = v26;
            if ( v11 < 0 )
            {
              DoStackCaptureDirect(v11, 0x63u);
              Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v28);
            }
            else
            {
              v13 = *((_QWORD *)this + 2);
              if ( *((_QWORD *)v10 + 17) )
              {
                v25 = 1312LL;
              }
              else
              {
                if ( !v26 || *((_QWORD *)v26 + 17) == v13 )
                {
                  *((_QWORD *)v10 + 17) = v13;
                  v14 = *(_QWORD *)(v13 + 144);
                  if ( v14 )
                  {
                    if ( v12 )
                    {
                      v15 = *((_QWORD *)v12 + 19);
                      if ( v15 )
                      {
                        *(_QWORD *)(v15 + 160) = v10;
                        *((_QWORD *)v10 + 19) = *((_QWORD *)v12 + 19);
                      }
                      else
                      {
                        *(_QWORD *)(v14 + 160) = v10;
                      }
                      *((_QWORD *)v10 + 20) = v12;
                      *((_QWORD *)v12 + 19) = v10;
                    }
                    else
                    {
                      *((_QWORD *)v10 + 19) = v14;
                      *((_QWORD *)v10 + 20) = *(_QWORD *)(v14 + 160);
                      *(_QWORD *)(v14 + 160) = v10;
                      *(_QWORD *)(v13 + 144) = v10;
                    }
                  }
                  else
                  {
                    *(_QWORD *)(v13 + 144) = v10;
                  }
                  v16 = _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 4, 1u);
                  v17 = v32;
                  if ( !v16 )
                    (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *))(*(_QWORD *)v32 + 80LL))(v32);
                  v8 = 0;
                  v18 = (volatile signed __int32 *)v26;
                  v19 = *(DirectComposition::CDevice **)(*(_QWORD *)(v13 + 24) + 456LL);
                  if ( v26 )
                    v31 = *((_DWORD *)v26 + 32);
                  else
                    v31 = 0;
                  v20 = *(_DWORD *)(v13 + 128);
                  if ( v20 )
                  {
                    v21 = *((_DWORD *)v17 + 32);
                    if ( v21 )
                    {
                      DirectComposition::CDevice::BeginKernelCommand(v19, 0x14u, &v29, 0);
                      v22 = v29;
                      *(_DWORD *)v29 = 17;
                      v22[1] = v20;
                      v22[2] = v21;
                      v22[3] = 1;
                      v22[4] = v31;
                      v23 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v19 + 10);
                      if ( v23 )
                        (**v23)(v23);
                    }
                  }
                  if ( Windows::UI::Composition::Visual::s_fIsVisualTreeCallbackRegistered )
                    Windows::UI::Composition::CompositionDiagnosticsInterop::OnVisualAdded(
                      v32,
                      (struct Windows::UI::Composition::Visual *)v13,
                      (struct Windows::UI::Composition::Visual *)v18,
                      1);
                  if ( v18 && _InterlockedExchangeAdd(v18 + 4, 0xFFFFFFFF) == 1 )
                  {
                    LOBYTE(v14) = 1;
                    (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v26 + 64LL))(
                      v26,
                      v14);
                  }
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 4, 0xFFFFFFFF) == 1 )
                  {
                    LOBYTE(v14) = 1;
                    (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v32 + 64LL))(
                      v32,
                      v14);
                  }
                  goto LABEL_30;
                }
                v25 = 1317LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v25,
                (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
                (const char *)0x80070057LL);
              v8 = -2147024809;
              DoStackCaptureDirect(-2147024809, 0x65u);
              Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v28);
            }
          }
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v27);
        }
      }
      else
      {
        v8 = -2147024809;
        DoStackCaptureDirect(-2147024809, 0x5Bu);
      }
    }
    else
    {
      v8 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x5Au);
    }
LABEL_30:
    Microsoft::WRL2::ContextSession::EndApiEntry(v3);
    return v8;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return 2147483667LL;
}
