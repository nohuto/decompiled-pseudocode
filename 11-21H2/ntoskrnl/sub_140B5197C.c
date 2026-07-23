/*
 * XREFs of sub_140B5197C @ 0x140B5197C
 * Callers:
 *     sub_1403CB7F4 @ 0x1403CB7F4 (sub_1403CB7F4.c)
 * Callees:
 *     sub_14057158C @ 0x14057158C (sub_14057158C.c)
 *     sub_140577C84 @ 0x140577C84 (sub_140577C84.c)
 *     sub_1407F8914 @ 0x1407F8914 (sub_1407F8914.c)
 *     sub_1409620D4 @ 0x1409620D4 (sub_1409620D4.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall sub_140B5197C(char a1)
{
  unsigned int v3; // ebx
  PVOID PoolWithTag; // rax
  int *v5; // rdi
  unsigned int v6; // r9d
  int *i; // r8

  if ( dword_140D06A2C )
  {
    sub_140577C84();
    if ( !a1 )
      return 1;
LABEL_3:
    qword_140D06AE0 = 0LL;
    return 1;
  }
  if ( !a1 )
    return 1;
  v3 = dword_140D06884;
  if ( (_DWORD)dword_140D06884 == 1 )
  {
    dword_140D06A2C = 1;
    sub_140577C84();
    goto LABEL_3;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (unsigned int)dword_140D06884 + 360, 0x2020654Bu);
  v5 = (int *)PoolWithTag;
  if ( PoolWithTag )
  {
    *(_DWORD *)PoolWithTag = 0x393870 / v3;
    sub_1409620D4((unsigned __int16 *)PoolWithTag + 4, (__int64)sub_140577D00, 0LL, 0);
    v6 = 0;
    for ( i = v5 + 90; v6 < v3; *(i - 1) = v6 % v3 )
    {
      *(_QWORD *)i = -1LL;
      i[2] = 0;
      i += 4;
      ++v6;
    }
    _InterlockedExchange64(&qword_140D06AE0, (__int64)v5);
    sub_1407F8914(*v5, 0);
    if ( sub_14057158C((ULONG_PTR)(v5 + 2)) )
      return 1;
  }
  return 0;
}
