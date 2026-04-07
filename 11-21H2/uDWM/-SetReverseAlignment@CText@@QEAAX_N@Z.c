/*
 * XREFs of ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x180035D7C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180046308 (-InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CText::SetReverseAlignment(CText *this, char a2)
{
  __int64 v2; // rax

  if ( ((*((_BYTE *)this + 288) & 4) != 0) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_BYTE *)this + 288) = (4 * a2) | *((_BYTE *)this + 288) & 0xFB;
    (*(void (__fastcall **)(CText *, __int64))(v2 + 24))(this, 4096LL);
  }
}
