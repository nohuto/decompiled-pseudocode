/*
 * XREFs of ??_GCProjectedShadowScene@@UEAAPEAXI@Z @ 0x1800043E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800048C4 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CProjectedShadowScene *__fastcall CProjectedShadowScene::`scalar deleting destructor'(
        CProjectedShadowScene *this,
        char a2)
{
  CProjectedShadowScene::~CProjectedShadowScene(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x88uLL);
    else
      operator delete(this);
  }
  return this;
}
