/*
 * XREFs of sub_1405FAB9C @ 0x1405FAB9C
 * Callers:
 *     sub_140238028 @ 0x140238028 (sub_140238028.c)
 *     sub_14037EC9C @ 0x14037EC9C (sub_14037EC9C.c)
 * Callees:
 *     sub_140381660 @ 0x140381660 (sub_140381660.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405FAB9C(__int64 a1, _WORD *a2)
{
  int v4; // ebx
  __int64 result; // rax

  sub_140381660(a1, (__int64)a2, -a2[5]);
  v4 = *(_DWORD *)(*(_QWORD *)a2 + 16LL);
  ExFreePoolWithTag(*(PVOID *)a2, 0);
  *(_QWORD *)a2 = 0LL;
  result = *(unsigned int *)(a1 + 544);
  *((_DWORD *)a2 + 2) = result;
  *(_DWORD *)(a1 + 544) = v4;
  return result;
}
