/*
 * XREFs of sub_14091BB78 @ 0x14091BB78
 * Callers:
 *     sub_1406A0094 @ 0x1406A0094 (sub_1406A0094.c)
 *     sub_14091BD30 @ 0x14091BD30 (sub_14091BD30.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14091BB78(unsigned int *a1, unsigned int a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 v5; // rbp
  int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // r14d
  char *v9; // rax
  char *v10; // rsi
  _PRIVILEGE_SET *v11; // rcx

  v5 = a2;
  v6 = *a1;
  v7 = 0;
  if ( a1[1] - v6 < a2 )
  {
    v8 = v6 + a2;
    v9 = (char *)Allocate(PagedPool, 8LL * (v6 + a2), 0x36344D43u, a4);
    v10 = v9;
    if ( v9 )
    {
      memmove(v9, *((const void **)a1 + 1), 8LL * *a1);
      memset(&v10[8 * *a1], 0, 8 * v5);
      v11 = (_PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
      if ( v11 )
        SeFreePrivileges(v11);
      *((_QWORD *)a1 + 1) = v10;
      a1[1] = v8;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v7;
}
