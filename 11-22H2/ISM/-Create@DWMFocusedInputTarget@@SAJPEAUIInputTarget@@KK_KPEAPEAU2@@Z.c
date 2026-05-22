/*
 * XREFs of ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z @ 0x180027AE0
 * Callers:
 *     ?UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z @ 0x180021F50 (-UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1801182AC (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x1801C5E88 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KK_K@Z @ 0x180027568 (--0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMFocusedInputTarget::Create(
        struct IInputTarget *a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        struct IInputTarget **a5)
{
  DWMFocusedInputTarget *v9; // rax
  DWMFocusedInputTarget *v10; // rbx
  DWMFocusedInputTarget *v11; // rax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a5 )
  {
    *a5 = 0LL;
    v9 = (DWMFocusedInputTarget *)malloc(0x58uLL);
    v10 = v9;
    if ( v9 )
      memset_0(v9, 0, 0x58uLL);
    if ( v10 )
      v11 = DWMFocusedInputTarget::DWMFocusedInputTarget(v10, a1, a2, a3, a4);
    else
      v11 = 0LL;
    if ( v11 )
    {
      *a5 = v11;
      return 0LL;
    }
    v13 = -2147024882;
    v14 = 73LL;
  }
  else
  {
    v13 = -2147467261;
    v14 = 60LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmfocusedinputtarget.cpp",
    (const char *)v13,
    v15);
  return v13;
}
