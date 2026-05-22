/*
 * XREFs of ?SetOrientationAngle@SystemCursor2@@QEAAJM@Z @ 0x1800EDB7C
 * Callers:
 *     ?SetCursorOrientationForInputType@SystemCursorService2@@UEAA_NW4InputType@@M@Z @ 0x1800ED790 (-SetCursorOrientationForInputType@SystemCursorService2@@UEAA_NW4InputType@@M@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800EE2FC (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursor2::SetOrientationAngle(SystemCursor2 *this, float a2)
{
  __int64 v2; // r11
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::weak_ptr<SystemCursorService2>::lock((char *)this + 56, &v7);
  if ( v7
    && (v3 = *(_QWORD *)(v2 + 168)) != 0
    && (v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v5 = 0;
  }
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return v5;
}
