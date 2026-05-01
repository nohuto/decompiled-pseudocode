/*
 * XREFs of ?RuntimeClassInitialize@GammaFlashAsyncOperation@@QEAAJMII@Z @ 0x180338CEC
 * Callers:
 *     ??$MakeAndInitialize@VGammaFlashAsyncOperation@@UIAsyncAction@Foundation@Windows@@AEAMAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAsyncAction@Foundation@Windows@@AEAMAEAI2@Z @ 0x180326F2C (--$MakeAndInitialize@VGammaFlashAsyncOperation@@UIAsyncAction@Foundation@Windows@@AEAMAEAIAEAI@D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GammaFlashAsyncOperation::RuntimeClassInitialize(
        GammaFlashAsyncOperation *this,
        float a2,
        int a3,
        int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((float *)this + 58) = a2;
  *((float *)this + 59) = a2;
  *((float *)this + 60) = a2;
  *((_DWORD *)this + 61) = a3;
  *((_DWORD *)this + 62) = a4;
  *((_BYTE *)this + 252) = 0;
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 104LL))((char *)this + 16);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE34,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
