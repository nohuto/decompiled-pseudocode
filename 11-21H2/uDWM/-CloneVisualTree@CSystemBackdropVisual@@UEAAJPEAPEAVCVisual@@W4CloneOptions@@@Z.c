/*
 * XREFs of ?CloneVisualTree@CSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800E0F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSystemBackdropVisual@@SAJPEAPEAV1@@Z @ 0x1800E0FF0 (-Create@CSystemBackdropVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CSystemBackdropVisual@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800E16E4 (-InitializeVisualTreeClone@CSystemBackdropVisual@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemBackdropVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // edi
  CBaseObject *v8; // rbx
  __int64 v9; // rdx
  CBaseObject *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v13; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v6 = CSystemBackdropVisual::Create(&v13);
  v7 = v6;
  v8 = v13;
  if ( v6 < 0 )
  {
    v9 = 81LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_7;
  }
  v6 = CSystemBackdropVisual::InitializeVisualTreeClone(a1, v13, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 83LL;
    goto LABEL_5;
  }
  v10 = v8;
  v8 = 0LL;
  *a2 = v10;
  v7 = 0;
LABEL_7:
  if ( v8 )
    CBaseObject::Release(v8);
  return v7;
}
