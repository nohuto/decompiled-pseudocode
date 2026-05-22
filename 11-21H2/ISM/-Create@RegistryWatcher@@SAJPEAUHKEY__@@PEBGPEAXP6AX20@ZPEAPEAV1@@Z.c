/*
 * XREFs of ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180027EEC
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180027C9C (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Initialize@MouseProcessor@@IEAAJXZ @ 0x1800390F8 (-Initialize@MouseProcessor@@IEAAJXZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017705C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x1801AC700 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 *     ?Initialize@ButtonProcessor@@IEAAJXZ @ 0x1801BA14C (-Initialize@ButtonProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x180027FC0 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RegistryWatcher *v19; // [rsp+40h] [rbp+8h] BYREF

  v19 = 0LL;
  v8 = a5;
  if ( !a5 )
  {
    v13 = -2147024809;
    v15 = 2147942487LL;
    v16 = 101LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
      (const char *)v15,
      v17);
    goto LABEL_7;
  }
  v9 = (RegistryWatcher *)malloc(0x38uLL);
  v11 = v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 1) = 0LL;
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 4) = 0LL;
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
  v19 = v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    v15 = 2147942414LL;
    v16 = 108LL;
    goto LABEL_12;
  }
  v12 = RegistryWatcher::Initialize(v11, v10, a2);
  v13 = v12;
  if ( v12 < 0 )
  {
    v15 = (unsigned int)v12;
    v16 = 111LL;
    goto LABEL_12;
  }
  v19 = 0LL;
  *v8 = v11;
  v13 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v19);
  return v13;
}
