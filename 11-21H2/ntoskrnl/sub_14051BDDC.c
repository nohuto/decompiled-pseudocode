/*
 * XREFs of sub_14051BDDC @ 0x14051BDDC
 * Callers:
 *     sub_14021294C @ 0x14021294C (sub_14021294C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *__fastcall sub_14051BDDC(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 v3; // rdi
  size_t v4; // r8
  void *v5; // rcx
  void *result; // rax

  v1 = *(_DWORD **)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(unsigned int *)(a1 + 48);
  v5 = (void *)(v3 + *(unsigned int *)(v3 + 64));
  *(_DWORD *)(v3 + 20) = v1[4];
  result = memmove(v5, v1, v4);
  if ( *(_DWORD *)(a1 + 96) == 12 && !*(_DWORD *)(v3 + 20) && !*(_QWORD *)(v3 + 48) )
    *(_QWORD *)(v3 + 48) = v3;
  return result;
}
