/*
 * XREFs of sub_14080751C @ 0x14080751C
 * Callers:
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 * Callees:
 *     sub_14020DB30 @ 0x14020DB30 (sub_14020DB30.c)
 *     MmObtainChargesToLockPagedPool @ 0x14081D080 (MmObtainChargesToLockPagedPool.c)
 *     sub_1409314BC @ 0x1409314BC (sub_1409314BC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14080751C()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // rax
  unsigned int v2; // r8d
  int v3; // r9d
  unsigned __int64 v4; // rdi
  unsigned int v5; // r8d
  unsigned int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  ULONG_PTR v10; // rbp
  __int64 Pool2; // rax
  char *v12; // rbx
  __int64 result; // rax
  __int64 v14; // [rsp+30h] [rbp-98h]
  __int64 v15; // [rsp+58h] [rbp-70h]
  __int64 v16; // [rsp+D0h] [rbp+8h]
  __int64 v17; // [rsp+D8h] [rbp+10h]
  __int64 v18; // [rsp+E0h] [rbp+18h]
  __int64 v19; // [rsp+E8h] [rbp+20h]

  if ( dword_140C15C70 == 2 )
    v0 = 102400LL;
  else
    v0 = v14;
  v1 = sub_14020DB30(0);
  v4 = (v1 + 32) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v4 < v1 || v4 > 0xFFFFFFFF )
    return 3221225626LL;
  v16 = v2;
  v5 = ((unsigned int)v4 >> 3) + v2;
  v17 = v5;
  v18 = (v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8;
  v6 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176;
  v19 = (((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8;
  if ( v3 == 2 )
  {
    v7 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176;
    v6 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 232;
  }
  else
  {
    v7 = v15;
  }
  v8 = v6;
  v9 = (v6 + 135) & 0xFFFFFFF8;
  if ( (dword_140D0688C & 2) == 0
    || (result = sub_1409314BC(((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176),
        (int)result >= 0) )
  {
    v10 = ((((_DWORD)v9 + 4159) & 0xFFFFF000) + 0x3FFF) & 0xFFFFF000;
    Pool2 = ExAllocatePool2(256LL, v10, 1919052136LL);
    v12 = (char *)Pool2;
    if ( Pool2 )
    {
      if ( (unsigned int)MmObtainChargesToLockPagedPool(Pool2, v10) )
      {
        qword_140C22C28 = (__int64)(v12 + 4096);
        qword_140C22C18 = v10;
        qword_140C22C10 = v12;
        qword_140C22C20 = (__int64)v12;
        if ( dword_140C15C70 == 2 )
          qword_140C22C78 = (__int64)&v12[v0];
        else
          qword_140C22C78 = 0LL;
        LODWORD(xmmword_140C22C40) = v4;
        *((_QWORD *)&xmmword_140C22C40 + 1) = &v12[v16];
        LODWORD(xmmword_140C22C30) = v4;
        *((_QWORD *)&xmmword_140C22C30 + 1) = &v12[v17];
        qword_140C22C50 = (__int64)&v12[v18];
        if ( dword_140C15C70 == 2 )
          qword_140C22C80 = (__int64)&v12[v7];
        else
          qword_140C22C80 = 0LL;
        qword_140C22C58 = &v12[v9];
        qword_140C22C60 = &v12[((_DWORD)v9 + 4159) & 0xFFFFF000];
        qword_140C22C68 = &v12[v8];
        qword_140C22C70 = (__int64)&v12[v19];
        return 0LL;
      }
      ExFreePoolWithTag(v12, 0x72626968u);
    }
    return 3221225626LL;
  }
  return result;
}
