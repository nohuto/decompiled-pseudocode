/*
 * XREFs of ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x1800463E8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18004621C (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 *     ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180046308 (-InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CText::SetBackgroundColor(CText *this, int a2)
{
  int v2; // edx
  __int64 v3; // rax

  v2 = a2 & 0xFFFFFF;
  if ( *((_DWORD *)this + 105) != v2 )
  {
    v3 = *(_QWORD *)this;
    *((_DWORD *)this + 105) = v2;
    (*(void (__fastcall **)(CText *, __int64))(v3 + 24))(this, 4096LL);
  }
}
