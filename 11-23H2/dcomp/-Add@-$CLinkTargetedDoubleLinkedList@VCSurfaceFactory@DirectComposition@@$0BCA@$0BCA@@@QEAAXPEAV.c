/*
 * XREFs of ?Add@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEAAXPEAVCSurfaceFactory@DirectComposition@@@Z @ 0x18009C270
 * Callers:
 *     ??0CSurfaceFactory@DirectComposition@@IEAA@PEAVCDevice@1@_N@Z @ 0x18001B5E8 (--0CSurfaceFactory@DirectComposition@@IEAA@PEAVCDevice@1@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::Add(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // r8

  result = a1 + 8;
  v3 = (_QWORD *)(a2 + 288);
  v4 = *(_QWORD **)(a1 + 16);
  if ( *v4 != a1 + 8 )
    __fastfail(3u);
  *v3 = result;
  v3[1] = v4;
  *v4 = v3;
  *(_QWORD *)(a1 + 16) = v3;
  ++*(_DWORD *)a1;
  return result;
}
