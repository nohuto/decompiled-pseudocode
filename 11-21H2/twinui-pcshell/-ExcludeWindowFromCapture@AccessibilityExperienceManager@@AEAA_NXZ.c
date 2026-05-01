/*
 * XREFs of ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x180487834
 * Callers:
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x180488704 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall AccessibilityExperienceManager::ExcludeWindowFromCapture(
        AccessibilityExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // rsi
  int (__fastcall *v7)(__int64, __int64 *); // rbx
  bool v8; // bl
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // al
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h]
  __int128 v15; // [rsp+38h] [rbp-18h]
  __int64 v16; // [rsp+48h] [rbp-8h]
  int v17; // [rsp+70h] [rbp+20h] BYREF
  __int64 v18; // [rsp+78h] [rbp+28h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v4 = 0;
  v18 = 0LL;
  v5 = 0LL;
  v19 = 0LL;
  v6 = *((_QWORD *)this + 47);
  if ( v6 )
  {
    v7 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    if ( v7(v6, &v18) < 0 || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v19) < 0 )
      goto LABEL_8;
    v5 = v19;
  }
  v17 = 1;
  LODWORD(v13) = 25;
  *((_QWORD *)&v13 + 1) = &v17;
  LODWORD(v14) = 4;
  v8 = (unsigned int)SetWindowCompositionAttribute(v5, &v13, a3, a4) != 0;
  LODWORD(v15) = 24;
  *((_QWORD *)&v15 + 1) = &v17;
  LODWORD(v16) = 4;
  v13 = v15;
  v14 = v16;
  v11 = (unsigned int)SetWindowCompositionAttribute(v19, &v13, v9, v10) != 0;
  if ( v8 && v11 )
    v4 = 1;
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  return v4;
}
