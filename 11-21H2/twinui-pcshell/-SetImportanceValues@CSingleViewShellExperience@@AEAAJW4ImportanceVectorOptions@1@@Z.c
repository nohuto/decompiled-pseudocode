/*
 * XREFs of ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x18009C8E0
 * Callers:
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18009C8B4 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18009EBDC (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800C92C8 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSingleViewShellExperience::SetImportanceValues(__int64 a1, char a2)
{
  char v4; // al
  __int16 v5; // ax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  unsigned int v12; // [rsp+30h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  RmActivityImportanceInitialize(&v12);
  v4 = HIBYTE(v12);
  if ( (a2 & 1) != 0 )
    v4 = -16;
  HIBYTE(v12) = v4;
  v5 = v12;
  if ( (a2 & 2) != 0 )
    v5 = v12 | 0x400;
  LOWORD(v12) = v5 | 0x101;
  v13 = 0LL;
  v6 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24))(
         *(_QWORD *)(a1 + 24),
         &GUID_35f1648c_265f_402c_b575_c9a325451df5,
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = 1289LL;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, v12);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return 0LL;
    }
    v10 = 1290LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  return v7;
}
