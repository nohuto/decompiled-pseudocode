/*
 * XREFs of sub_1408048F4 @ 0x1408048F4
 * Callers:
 *     sub_140804350 @ 0x140804350 (sub_140804350.c)
 *     sub_14094E570 @ 0x14094E570 (sub_14094E570.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408048F4(__int64 a1, __int64 a2)
{
  int v2; // esi
  void *v4; // rdi
  __int64 v5; // rdx
  unsigned int v7; // eax
  void *Pool2; // rax
  __int64 v10; // rcx
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 40);
  if ( !v5 )
    goto LABEL_6;
  if ( (unsigned __int16)*(_DWORD *)(a2 + 32) != 0x8000 )
  {
    v7 = *(_DWORD *)(a2 + 36);
    if ( v7 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, v7, 1667526736LL);
      v4 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      memmove(Pool2, *(const void **)(a2 + 40), *(unsigned int *)(a2 + 36));
    }
    goto LABEL_6;
  }
  if ( *(_QWORD *)&qword_140D00AC0 )
    v10 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
  else
    v10 = 0LL;
  v2 = sub_14077FFEC(v10, v5, 0LL, 0, 0x20019u, (__int64)&v11);
  if ( v2 >= 0 )
  {
    v4 = v11;
LABEL_6:
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
    *(_QWORD *)(a1 + 40) = v4;
  }
  return (unsigned int)v2;
}
