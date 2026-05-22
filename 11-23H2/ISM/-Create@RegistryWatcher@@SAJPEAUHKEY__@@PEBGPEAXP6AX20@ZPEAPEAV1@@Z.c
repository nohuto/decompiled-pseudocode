/*
 * XREFs of ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18003AD64
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x18004F568 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Initialize@MouseProcessor@@IEAAJXZ @ 0x180052A0C (-Initialize@MouseProcessor@@IEAAJXZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180196490 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x1801CAAF0 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 *     ?Initialize@ButtonProcessor@@IEAAJXZ @ 0x1801D844C (-Initialize@ButtonProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x18003FE10 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RegistryWatcher::Create(
        HKEY a1,
        const unsigned __int16 *a2,
        void *a3,
        void (*a4)(void *, HKEY),
        struct RegistryWatcher **a5)
{
  struct RegistryWatcher **v8; // rsi
  RegistryWatcher *v9; // rax
  HKEY v10; // rdx
  RegistryWatcher *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RegistryWatcher *v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0LL;
  v8 = a5;
  if ( !a5 )
  {
    v13 = -2147024809;
    v15 = 101LL;
LABEL_11:
    v16 = v13;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
      (const char *)v16);
    goto LABEL_7;
  }
  v9 = (RegistryWatcher *)RefCountedObject::operator new(0x38uLL);
  v11 = v9;
  a5 = (struct RegistryWatcher **)v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = &RefCountedObject::`vftable';
    *((_DWORD *)v9 + 2) = 1;
    *(_QWORD *)v9 = &RegistryWatcher::`vftable';
    *((_QWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v9 + 5) = a3;
    *((_QWORD *)v9 + 6) = a4;
  }
  else
  {
    v11 = 0LL;
  }
  v18 = v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    v15 = 108LL;
    goto LABEL_11;
  }
  v12 = RegistryWatcher::Initialize(v11, v10, a2);
  v13 = v12;
  if ( v12 < 0 )
  {
    v16 = (unsigned int)v12;
    v15 = 111LL;
    goto LABEL_13;
  }
  v18 = 0LL;
  *v8 = v11;
  v13 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v18);
  return v13;
}
