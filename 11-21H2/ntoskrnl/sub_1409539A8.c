/*
 * XREFs of sub_1409539A8 @ 0x1409539A8
 * Callers:
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140764604 @ 0x140764604 (sub_140764604.c)
 *     sub_140764758 @ 0x140764758 (sub_140764758.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_140953AB8 @ 0x140953AB8 (sub_140953AB8.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409539A8(PVOID *a1, __int64 a2)
{
  PVOID *Pool2; // rax
  int v5; // ebx
  __int64 v6; // r8
  void *v7; // rcx

  Pool2 = (PVOID *)ExAllocatePool2(256LL, 88LL, 1466986064LL);
  *a1 = Pool2;
  if ( !Pool2 )
    goto LABEL_2;
  v5 = sub_14077DE70(*(_WORD **)(a2 + 8), 0xC8uLL, 0x57706E50u, Pool2);
  if ( v5 >= 0 )
  {
    v5 = sub_140764758((__int64)*a1 + 8, a2);
    if ( v5 >= 0 )
    {
      *((_DWORD *)*a1 + 17) = PsGetCurrentThreadProcessId();
      if ( *(_QWORD *)(a2 + 96) )
      {
        *((_DWORD *)*a1 + 16) = *(_DWORD *)(a2 + 88);
        *((_QWORD *)*a1 + 7) = ExAllocatePool2(256LL, *(unsigned int *)(a2 + 88), 1466986064LL);
        v7 = (void *)*((_QWORD *)*a1 + 7);
        if ( !v7 )
        {
LABEL_2:
          v5 = -1073741670;
          goto LABEL_9;
        }
        memmove(v7, *(const void **)(a2 + 96), *(unsigned int *)(a2 + 88));
      }
      v5 = sub_140764604(*(_DWORD *)(a2 + 104), *(_QWORD *)(a2 + 112), v6, (_DWORD *)*a1 + 20, (__int64 *)*a1 + 9);
      if ( v5 >= 0 )
        return (unsigned int)v5;
    }
  }
LABEL_9:
  if ( *a1 )
  {
    sub_140953AB8(*a1);
    *a1 = 0LL;
  }
  return (unsigned int)v5;
}
