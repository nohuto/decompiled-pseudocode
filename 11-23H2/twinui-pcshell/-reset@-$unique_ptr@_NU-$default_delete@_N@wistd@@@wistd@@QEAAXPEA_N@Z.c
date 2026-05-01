/*
 * XREFs of ?reset@?$unique_ptr@_NU?$default_delete@_N@wistd@@@wistd@@QEAAXPEA_N@Z @ 0x1801C6208
 * Callers:
 *     ?IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ @ 0x1801FF4F4 (-IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ.c)
 *     ??__Fs_isSuppressedByShellConfig@?1??IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ@YAXXZ @ 0x1802C7C60 (--__Fs_isSuppressedByShellConfig@-1--IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ@YAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall wistd::unique_ptr<bool,wistd::default_delete<bool>>::reset(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    operator delete(v2, 1uLL);
}
