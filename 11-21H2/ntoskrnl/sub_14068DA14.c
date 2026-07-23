/*
 * XREFs of sub_14068DA14 @ 0x14068DA14
 * Callers:
 *     sub_14068D310 @ 0x14068D310 (sub_14068D310.c)
 *     sub_14068D778 @ 0x14068D778 (sub_14068D778.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14020B57C @ 0x14020B57C (sub_14020B57C.c)
 *     sub_14020B638 @ 0x14020B638 (sub_14020B638.c)
 *     sub_14020B698 @ 0x14020B698 (sub_14020B698.c)
 *     sub_140254F78 @ 0x140254F78 (sub_140254F78.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14068DA14(__int64 a1, LARGE_INTEGER a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rbx
  PVOID v9; // rax
  PVOID v10; // rdi
  ULONG_PTR v11; // rbp
  ULONG_PTR v12; // rcx
  NTSTATUS v13; // ebx
  void *v15; // r8
  int v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  LODWORD(v17) = 0;
  v6 = (unsigned __int64)(unsigned int)(a3 - a2.LowPart) >> 12;
  v9 = sub_14020B698(v6 + 72, 0x35384D43u);
  v10 = v9;
  if ( v9 )
  {
    memset(v9, 0, v6 + 72);
    *((_QWORD *)v10 + 4) = a3;
    *((LARGE_INTEGER *)v10 + 3) = a2;
    v11 = a3 - a2.QuadPart;
    v13 = sub_14020B638(
            *(void **)a1,
            *(HANDLE **)(a1 + 24),
            a2,
            v11,
            ((*(_DWORD *)(a1 + 32) & 1) == 0) << 13,
            v16,
            (PVOID *)v10 + 7);
    if ( v13 < 0
      || (v13 = sub_14020B57C(v12, *(void ***)(a1 + 24), *((void **)v10 + 7), v11, 1u, (ULONG *)&v17), v13 < 0) )
    {
      v15 = (void *)*((_QWORD *)v10 + 7);
      if ( v15 )
        sub_140254F78(v12, *(HANDLE **)(a1 + 24), v15);
      SeFreePrivileges((PPRIVILEGE_SET)v10);
    }
    else
    {
      *a4 = v10;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v13;
}
