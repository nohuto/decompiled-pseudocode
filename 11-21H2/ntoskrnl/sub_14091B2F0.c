/*
 * XREFs of sub_14091B2F0 @ 0x14091B2F0
 * Callers:
 *     <none>
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14091B2F0(unsigned int *a1, unsigned int a2, unsigned int a3, struct _LOOKASIDE_LIST_EX *a4)
{
  unsigned int v4; // ebx
  _PRIVILEGE_SET *v7; // rdi
  __int64 v8; // r13
  unsigned int v9; // ebp
  _PRIVILEGE_SET *v10; // rcx
  unsigned int v11; // r14d
  int v12; // ebp

  v4 = 0;
  v7 = 0LL;
  if ( a2 + a3 < a2 && a2 + a3 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)a1;
  v9 = (~((*(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9) - 1) & (a2 + (*(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9) + a3 - 1))
     - (a2 & ~((*(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9) - 1));
  if ( v9 < a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = (_PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
    v11 = v9;
    if ( v9 < 0x10000 )
      v11 = 0x10000;
    if ( !v10 )
      goto LABEL_12;
    if ( a1[4] < v11 )
    {
      SeFreePrivileges(v10);
    }
    else
    {
      v7 = (_PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
      v11 = a1[4];
    }
    *((_QWORD *)a1 + 1) = 0LL;
    a1[4] = 0;
    if ( !v7 )
    {
LABEL_12:
      v7 = (_PRIVILEGE_SET *)Allocate(PagedPool, v9, 0x6F494D43u, a4);
      if ( !v7 )
        return (unsigned int)-1073741801;
      v11 = v9;
    }
    v12 = sub_14042A5E0(v8, a1[5]);
    if ( v12 < 0 )
    {
      SeFreePrivileges(v7);
      return (unsigned int)v12;
    }
    else
    {
      *((_QWORD *)a1 + 1) = v7;
      a1[4] = v11;
      a4->L.ListHead.Alignment = (ULONGLONG)v7 + a2 % (*(_DWORD *)(v8 + 136) << 9);
    }
  }
  return v4;
}
