/*
 * XREFs of sub_140AF917C @ 0x140AF917C
 * Callers:
 *     sub_140AF8ED0 @ 0x140AF8ED0 (sub_140AF8ED0.c)
 *     sub_140AF8F6C @ 0x140AF8F6C (sub_140AF8F6C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140AF917C(_DWORD **a1)
{
  unsigned int v1; // ebx
  int v3; // edi
  _DWORD *Pool2; // rax
  _DWORD *v5; // rsi
  _DWORD *v6; // rdi

  v1 = 0;
  if ( *a1 )
    v3 = 2 * **a1;
  else
    v3 = 4;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(32 * v3 + 8), 0x416C6148u);
  v5 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v3;
    v6 = *a1;
    if ( *a1 )
    {
      Pool2[1] = v6[1];
      memmove(Pool2 + 2, v6 + 2, 32LL * (unsigned int)v6[1]);
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      Pool2[1] = 0;
    }
    *a1 = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
