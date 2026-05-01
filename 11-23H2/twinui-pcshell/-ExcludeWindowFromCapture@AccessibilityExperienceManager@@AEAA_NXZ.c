/*
 * XREFs of ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x18053C0B0
 * Callers:
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18053CE74 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall AccessibilityExperienceManager::ExcludeWindowFromCapture(AccessibilityExperienceManager *this)
{
  char v1; // di
  __int64 v2; // rax
  __int64 v3; // rsi
  int (__fastcall *v4)(__int64, __int64 *); // rbx
  bool v5; // bl
  bool v6; // al
  __int128 v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-20h]
  __int128 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-8h]
  int v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF

  v1 = 0;
  v13 = 0LL;
  v2 = 0LL;
  v14 = 0LL;
  v3 = *((_QWORD *)this + 47);
  if ( v3 )
  {
    v4 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
    if ( v4(v3, &v13) < 0 || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v14) < 0 )
      goto LABEL_8;
    v2 = v14;
  }
  v12 = 1;
  LODWORD(v8) = 25;
  *((_QWORD *)&v8 + 1) = &v12;
  LODWORD(v9) = 4;
  v5 = (unsigned int)SetWindowCompositionAttribute(v2, &v8) != 0;
  LODWORD(v10) = 24;
  *((_QWORD *)&v10 + 1) = &v12;
  LODWORD(v11) = 4;
  v8 = v10;
  v9 = v11;
  v6 = (unsigned int)SetWindowCompositionAttribute(v14, &v8) != 0;
  if ( v5 && v6 )
    v1 = 1;
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  return v1;
}
