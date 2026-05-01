/*
 * XREFs of ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F0138
 * Callers:
 *     ?Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180052310 (-Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EFDB0 (-GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F0008 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VPositionerPriority@@V1@AEAW4_TABLETMODESTATE@@@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAW4_TABLETMODESTATE@@@Z @ 0x1800F01C8 (--$MakeAndInitialize@VPositionerPriority@@V1@AEAW4_TABLETMODESTATE@@@Details@WRL@Microsoft@@YAJP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PositionerPriority_CreateInstance(int a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  v10 = a1;
  *a3 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<PositionerPriority,PositionerPriority,enum _TABLETMODESTATE &>(
         &v11,
         &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 236LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)(unsigned int)v4,
      v8);
    goto LABEL_3;
  }
  v4 = (**v11)(v11, &GUID_9579607f_b1e9_4350_b203_d2784a62a5cb, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 237LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return v5;
}
