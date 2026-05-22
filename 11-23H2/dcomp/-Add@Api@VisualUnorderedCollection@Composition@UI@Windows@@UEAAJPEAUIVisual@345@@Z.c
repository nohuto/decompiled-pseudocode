/*
 * XREFs of ?Add@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180014660
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollection::Api::Add(
        Windows::UI::Composition::VisualUnorderedCollection::Api *this,
        struct IUnknown *a2)
{
  Microsoft::WRL2::ContextSession *v2; // rbp
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v12; // edx
  unsigned int v13; // edx
  int v14; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Microsoft::WRL2::ContextRuntimeClass *v16; // [rsp+40h] [rbp+8h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v17; // [rsp+50h] [rbp+18h] BYREF

  v2 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 104) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_9;
  }
  if ( !a2 )
  {
    v6 = -2147024809;
    v12 = 243;
LABEL_13:
    DoStackCaptureDirect(v6, v12);
    goto LABEL_9;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualunorderedcollection.cpp",
      (const char *)(unsigned int)v5);
    v12 = 245;
    goto LABEL_13;
  }
  v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         v2,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
         &v17);
  v8 = v17;
  v6 = v7;
  v16 = v17;
  if ( v7 < 0 )
  {
    v13 = 248;
    v14 = v7;
    goto LABEL_16;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct Microsoft::WRL2::ContextRuntimeClass *))(**((_QWORD **)this + 3)
                                                                                                + 40LL))(
         *((_QWORD *)this + 3),
         *((_QWORD *)this + 2),
         v17);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualunorderedcollection.cpp",
      (const char *)(unsigned int)v9);
    v13 = 249;
    v14 = v6;
LABEL_16:
    DoStackCaptureDirect(v14, v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v16);
    goto LABEL_9;
  }
  v6 = 0;
  if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v17 + 64LL))(v17, v10);
  }
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
