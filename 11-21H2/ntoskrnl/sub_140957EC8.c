/*
 * XREFs of sub_140957EC8 @ 0x140957EC8
 * Callers:
 *     sub_140762AEC @ 0x140762AEC (sub_140762AEC.c)
 *     sub_140762BAC @ 0x140762BAC (sub_140762BAC.c)
 *     sub_140799218 @ 0x140799218 (sub_140799218.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140957EC8(const void ***a1, const void **a2)
{
  unsigned int v3; // r15d
  _WORD *Pool2; // rax
  _WORD *v6; // rsi
  PVOID *v7; // rdi
  const void *v8; // rdx
  char result; // al

  v3 = *(unsigned __int16 *)a2 + 2 + *((_DWORD *)a1 + 2);
  Pool2 = (_WORD *)ExAllocatePool2(64LL, v3, 1869181008LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    v7 = (PVOID *)*a1;
    v8 = **a1;
    if ( v8 )
    {
      memmove(Pool2, v8, *((unsigned int *)a1 + 2));
      ExFreePoolWithTag(*v7, 0);
      v7 = (PVOID *)*a1;
    }
    memmove(&v6[(unsigned __int64)*((unsigned int *)a1 + 2) >> 1], a2[1], *(unsigned __int16 *)a2);
    result = 1;
    *((_DWORD *)a1 + 2) = v3;
    v6[((unsigned __int64)v3 >> 1) - 1] = 0;
    *v7 = v6;
  }
  else
  {
    *(_DWORD *)a1[3] = -1073741670;
    return 0;
  }
  return result;
}
