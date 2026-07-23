/*
 * XREFs of sub_14026F0F0 @ 0x14026F0F0
 * Callers:
 *     sub_14026F050 @ 0x14026F050 (sub_14026F050.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_1402ED77C @ 0x1402ED77C (sub_1402ED77C.c)
 *     MmCommitSessionMappedView @ 0x1406A3F90 (MmCommitSessionMappedView.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_140700A40 @ 0x140700A40 (sub_140700A40.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall sub_14026F0F0(unsigned int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r11
  unsigned int *v4; // r9
  unsigned __int64 v5; // rbx
  bool v6; // cf
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8

  v3 = *a2;
  v4 = a1;
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 96LL);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x1000) != 0 )
  {
    v6 = a1[12] < 0x40000000;
  }
  else
  {
    v6 = a1[12] < 0x40000000;
    if ( a1[12] < 0x40000000 )
    {
      if ( v3 < a1[11] )
        return v4;
      return 0LL;
    }
  }
  v7 = (-(__int64)v6 & 0xFFFFFFFFFFFE0000uLL) + 0x40000;
  v8 = v3 / v7;
  v9 = v3 % v7;
  v10 = (unsigned int)(v3 / v7);
  v11 = v10 + 1;
  if ( !v9 )
    v11 = v10;
  if ( v11 <= v5 )
  {
    v4 += 22 * v8;
    if ( v9 < v4[11] )
    {
      *a2 = v9;
      return v4;
    }
  }
  return 0LL;
}
