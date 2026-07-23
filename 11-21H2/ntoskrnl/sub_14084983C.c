/*
 * XREFs of sub_14084983C @ 0x14084983C
 * Callers:
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14084983C(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *Pool2; // rdi
  int v4; // esi
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 1400LL, 1884115024LL);
    if ( Pool2 )
    {
      v4 = dword_140C0C64C;
      v5 = 96 * dword_140C0C64C + 56;
      v6 = ExAllocatePool2(64LL, v5, 1884115024LL);
      Pool2[19] = v6;
      if ( v6 )
      {
        v7 = ExAllocatePool2(64LL, v5, 1884115024LL);
        Pool2[11] = v7;
        if ( v7 )
        {
          v8 = ExAllocatePool2(64LL, v5, 1884115024LL);
          Pool2[27] = v8;
          if ( v8 )
          {
            *(_DWORD *)(Pool2[19] + 48LL) = v4;
            *(_DWORD *)(Pool2[11] + 48LL) = v4;
            *(_DWORD *)(Pool2[27] + 48LL) = v4;
            *(_QWORD *)(a1 + 16) = Pool2;
            return v1;
          }
        }
      }
      v10 = (void *)Pool2[19];
      if ( v10 )
        ExFreePoolWithTag(v10, 0x704D5050u);
      v11 = (void *)Pool2[11];
      if ( v11 )
        ExFreePoolWithTag(v11, 0x704D5050u);
      v12 = (void *)Pool2[27];
      if ( v12 )
        ExFreePoolWithTag(v12, 0x704D5050u);
      ExFreePoolWithTag(Pool2, 0x704D5050u);
    }
    return (unsigned int)-1073741670;
  }
  return v1;
}
