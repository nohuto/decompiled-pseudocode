/*
 * XREFs of sub_18003D19C @ 0x18003D19C
 * Callers:
 *     sub_180014790 @ 0x180014790 (sub_180014790.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_180032650 @ 0x180032650 (sub_180032650.c)
 *     unknown_libname_6 @ 0x18003A9D4 (unknown_libname_6.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003D19C(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rcx
  _QWORD *v5; // rcx
  __int64 *v6; // r9
  __int64 *v7; // r10
  unsigned int v8; // eax
  int v9; // r8d
  __int64 result; // rax
  __int64 v11; // rcx
  _QWORD v12[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  sub_18003E370();
  v4 = *(__int64 **)(a1 + 376);
  if ( v4 == *(__int64 **)(a1 + 384) )
  {
LABEL_4:
    sub_180010DD0(v13, (__int64)"Attempt to remove component that has not been added to scene node.");
    v8 = (unsigned int)sub_180010DD0(
                         v12,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\scenenode.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v8, v9, (unsigned int)v13, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  while ( !sub_180015678(v4, a2) )
  {
    v4 = v6;
    if ( v6 == v7 )
      goto LABEL_4;
  }
  unknown_libname_6(v6, v7, v5);
  sub_180032650(*(_QWORD *)(a1 + 384) - 16LL);
  *(_QWORD *)(a1 + 384) -= 16LL;
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 112LL))(*a2);
  v11 = a2[1];
  if ( v11 )
    return sub_180010530(v11);
  return result;
}
