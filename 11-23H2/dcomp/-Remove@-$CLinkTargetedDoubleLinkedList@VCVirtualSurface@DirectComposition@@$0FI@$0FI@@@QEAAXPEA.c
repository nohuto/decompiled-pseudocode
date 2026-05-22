/*
 * XREFs of ?Remove@?$CLinkTargetedDoubleLinkedList@VCVirtualSurface@DirectComposition@@$0FI@$0FI@@@QEAAXPEAVCVirtualSurface@DirectComposition@@@Z @ 0x18003C1C4
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ??1CVirtualSurface@DirectComposition@@MEAA@XZ @ 0x18003A9DC (--1CVirtualSurface@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CLinkTargetedDoubleLinkedList<DirectComposition::CVirtualSurface,88,88>::Remove(
        _DWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)(a2 + 88);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (result = (_QWORD *)v2[1], (_QWORD *)*result != v2) )
    __fastfail(3u);
  *result = v3;
  *(_QWORD *)(v3 + 8) = result;
  *(_OWORD *)v2 = 0LL;
  --*a1;
  return result;
}
