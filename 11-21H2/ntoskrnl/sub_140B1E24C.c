/*
 * XREFs of sub_140B1E24C @ 0x140B1E24C
 * Callers:
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 * Callees:
 *     sub_14021FB10 @ 0x14021FB10 (sub_14021FB10.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B1E24C()
{
  PEX_SPIN_LOCK v0; // rax
  unsigned int v1; // ebx
  ULONG_PTR v2; // rax
  _QWORD *Pool2; // rdi
  void *v4; // rax
  void *v5; // rsi
  _QWORD *v6; // rax
  PEX_SPIN_LOCK v7; // rcx
  ULONG_PTR v8; // rax
  void *v10; // rcx

  v0 = off_140C06A88;
  v1 = 0;
  *((_DWORD *)off_140C06A88 + 1) = 0;
  *((_QWORD *)v0 + 1) = 0LL;
  *((_DWORD *)v0 + 4) = 0;
  *v0 = 0;
  v2 = off_140D3B060;
  *(_QWORD *)off_140D3B060 = 0LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  if ( (dword_140D01448 & 3) == 3 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8uLL, 0x74446553u);
    if ( Pool2 )
    {
      v4 = (void *)ExAllocatePool2(64LL, 0x600uLL, 0x74446553u);
      v5 = v4;
      if ( v4 )
      {
        memset(v4, 0, 0x600uLL);
        v6 = (_QWORD *)ExAllocatePool2(64LL, 8uLL, 0x74446553u);
        v7 = off_140C06A88;
        *((_QWORD *)off_140C06A88 + 1) = v6;
        if ( v6 )
        {
          *v6 = v5;
          ++*((_DWORD *)v7 + 1);
          if ( sub_14021FB10((PVOID *)(off_140D3B060 + 8), 0x80u, 0, 0) )
          {
            v8 = off_140D3B060;
            *(_DWORD *)(off_140D3B060 + 16) = 64;
            *(_QWORD *)(v8 + 24) = Pool2;
            *Pool2 = 0LL;
            return v1;
          }
        }
        ExFreePoolWithTag(v5, 0x74446553u);
      }
      ExFreePoolWithTag(Pool2, 0x74446553u);
    }
    v1 = -1073741801;
    v10 = (void *)*((_QWORD *)off_140C06A88 + 1);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x74446553u);
  }
  return v1;
}
