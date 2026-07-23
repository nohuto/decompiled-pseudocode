/*
 * XREFs of sub_14099FD78 @ 0x14099FD78
 * Callers:
 *     sub_14099FE80 @ 0x14099FE80 (sub_14099FE80.c)
 * Callees:
 *     sub_14099FC44 @ 0x14099FC44 (sub_14099FC44.c)
 *     sub_1409A00F0 @ 0x1409A00F0 (sub_1409A00F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14099FD78(__int64 a1, char *a2, __int64 a3, unsigned __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  int v10; // edi
  __int64 Pool2; // rax
  _QWORD *v12; // rcx
  __int64 v13; // r8

  v5 = 0LL;
  if ( (unsigned __int64)(a2 + 44) <= a4 )
  {
    Pool2 = ExAllocatePool2(64LL, 88LL, 1817210704LL);
    v5 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      v10 = sub_1409A00F0(Pool2, *(unsigned int *)a2, a3, a4);
      if ( v10 < 0 )
        goto LABEL_9;
      v5[2] = a1;
      v12 = (_QWORD *)((char *)v5 + 36);
      v13 = 4LL;
      do
      {
        *v12 = *(_QWORD *)((char *)v12 + a2 - (char *)v5 - 32);
        ++v12;
        --v13;
      }
      while ( v13 );
      v10 = sub_14099FC44(
              (__int64)v5,
              (__int128 *)(a3 + *((unsigned int *)a2 + 10)),
              *((unsigned int *)a2 + 9),
              a3,
              a4,
              v5 + 9,
              v5 + 10);
      if ( v10 < 0 )
      {
LABEL_9:
        ExFreePoolWithTag(v5, 0x6C506F50u);
        v5 = 0LL;
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1073741306;
  }
  *a5 = v5;
  return (unsigned int)v10;
}
