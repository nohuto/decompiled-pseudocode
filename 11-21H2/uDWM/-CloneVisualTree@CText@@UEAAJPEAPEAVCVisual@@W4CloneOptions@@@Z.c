/*
 * XREFs of ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180046280
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180046308 (-InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CText@@SAJPEAPEAV1@@Z @ 0x180046FCC (-Create@CText@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CText::CloneVisualTree(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CBaseObject *v8; // rcx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CText *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  *a2 = 0LL;
  v6 = CText::Create(&v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = 516LL;
  }
  else
  {
    v6 = CText::InitializeVisualTreeClone(a1, v12, a3);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = 0LL;
      *a2 = v12;
      v7 = 0;
      goto LABEL_4;
    }
    v10 = 517LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"clientcore\\windows\\dwm\\udwm\\text.cpp",
    (const char *)(unsigned int)v6);
  v8 = v12;
LABEL_4:
  if ( v8 )
  {
    v12 = 0LL;
    CBaseObject::Release(v8);
  }
  return v7;
}
