/*
 * XREFs of sub_140569604 @ 0x140569604
 * Callers:
 *     sub_140569CA0 @ 0x140569CA0 (sub_140569CA0.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 */

unsigned __int64 __fastcall sub_140569604(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 i; // rbx
  __int64 j; // rdi

  CurrentThread = KeGetCurrentThread();
  __asm { rdsspq  rbx }
  v4 = *((_QWORD *)CurrentThread + 131) - 4096LL;
  result = (*((_QWORD *)CurrentThread + 132) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( _RBX >= v4 || _RBX < result )
  {
    for ( i = _RBX & 0xFFFFFFFFFFFFF000uLL; sub_14028FBF0(i - 4096); i -= 4096LL )
      ;
    for ( j = i; sub_14028FBF0(j); j += 4096LL )
      ;
    *a1 = j;
    return i;
  }
  else
  {
    *a1 = v4;
  }
  return result;
}
