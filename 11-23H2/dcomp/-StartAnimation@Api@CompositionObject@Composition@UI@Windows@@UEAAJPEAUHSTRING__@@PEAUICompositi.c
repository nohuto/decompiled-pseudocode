/*
 * XREFs of ?StartAnimation@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimation@345@@Z @ 0x18005CAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Api::StartAnimation(
        Windows::UI::Composition::CompositionObject::Api *this,
        HSTRING a2,
        struct IUnknown *a3)
{
  char *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  signed int v7; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // rdi
  unsigned int v9; // ebx
  signed int v10; // eax
  __int64 v11; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+50h] [rbp+8h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = (char *)this - 40;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (v3[32] & 2) == 0 )
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_7;
  }
  v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         (struct Microsoft::WRL2::ContextSession *)v5,
         a3,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimation::s_InterfaceType,
         &v14);
  v8 = v14;
  v9 = v7;
  v13 = v14;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801F5B20, 3u, v7, 0x3D5u, 0LL);
    goto LABEL_11;
  }
  v10 = (*(__int64 (__fastcall **)(char *, HSTRING, struct Microsoft::WRL2::ContextRuntimeClass *, _QWORD, _QWORD))(*(_QWORD *)v3 + 152LL))(
          v3,
          a2,
          v14,
          0LL,
          0LL);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801F5B20, 3u, v10, 0x3DCu, 0LL);
LABEL_11:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
    goto LABEL_7;
  }
  v9 = 0;
  if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(v11) = 1;
    (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v14 + 64LL))(v14, v11);
  }
LABEL_7:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v9;
}
