/*
 * XREFs of ?SetRTLReading@CText@@QEAAX_N@Z @ 0x180035D9C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180046308 (-InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CText::SetRTLReading(CText *this, char a2)
{
  __int64 v2; // rax

  if ( ((*((_BYTE *)this + 288) & 2) != 0) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_BYTE *)this + 288) = (2 * a2) | *((_BYTE *)this + 288) & 0xFD;
    (*(void (__fastcall **)(CText *, __int64))(v2 + 24))(this, 4096LL);
  }
}
