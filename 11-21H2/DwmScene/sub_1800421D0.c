/*
 * XREFs of sub_1800421D0 @ 0x1800421D0
 * Callers:
 *     sub_180015208 @ 0x180015208 (sub_180015208.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001287C @ 0x18001287C (sub_18001287C.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_18003EE90 @ 0x18003EE90 (sub_18003EE90.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800421D0(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r9
  _QWORD *i; // rcx
  __int64 *v6; // rax
  __int64 *v7; // r9
  unsigned int v9; // eax
  int v10; // r8d
  _QWORD v11[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  sub_1800436D4(a1);
  v4 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v4 && !sub_180016240(i, a2); i += 2 )
    ;
  v6 = (__int64 *)sub_18001287C((__int64)i);
  if ( v6 == v7 )
  {
    sub_1800113D0(v12, "Attempt to remove component that has not been added to scene node.");
    v9 = (unsigned int)sub_1800113D0(
                         v11,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\scenenode.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v9, v10, (unsigned int)v12, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18003EE90(v6 + 2, v7, v6);
  sub_180010910(*(_QWORD *)(a1 + 384) - 16LL);
  *(_QWORD *)(a1 + 384) -= 16LL;
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 112LL))(*a2);
  return sub_180010910((__int64)a2);
}
