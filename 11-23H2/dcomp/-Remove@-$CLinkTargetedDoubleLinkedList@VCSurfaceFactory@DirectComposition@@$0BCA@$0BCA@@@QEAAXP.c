/*
 * XREFs of ?Remove@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEAAXPEAVCSurfaceFactory@DirectComposition@@@Z @ 0x18009C2A4
 * Callers:
 *     ??1CSurfaceFactory@DirectComposition@@MEAA@XZ @ 0x18001B2E4 (--1CSurfaceFactory@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::Remove(
        _DWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)(a2 + 288);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (result = (_QWORD *)v2[1], (_QWORD *)*result != v2) )
    __fastfail(3u);
  *result = v3;
  *(_QWORD *)(v3 + 8) = result;
  *(_OWORD *)v2 = 0LL;
  --*a1;
  return result;
}
