/*
 * XREFs of sub_14085ADDC @ 0x14085ADDC
 * Callers:
 *     sub_14080DA78 @ 0x14080DA78 (sub_14080DA78.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14085ADDC(__int64 a1, const void *a2, unsigned int a3)
{
  _DWORD *Pool2; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rax
  void *v9; // rcx

  Pool2 = (_DWORD *)ExAllocatePool2(256LL, a3 + 4, 1198550608LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = a3;
  memmove(Pool2 + 1, a2, a3);
  v8 = *(_QWORD *)(a1 + 312);
  v9 = *(void **)(v8 + 88);
  *(_QWORD *)(v8 + 88) = v7;
  if ( v9 )
    ExFreePoolWithTag(v9, 0x47706E50u);
  return 0LL;
}
