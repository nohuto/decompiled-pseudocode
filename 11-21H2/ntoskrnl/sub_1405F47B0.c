/*
 * XREFs of sub_1405F47B0 @ 0x1405F47B0
 * Callers:
 *     sub_14024429C @ 0x14024429C (sub_14024429C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F4784 @ 0x1405F4784 (sub_1405F4784.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_OWORD *__fastcall sub_1405F47B0(_BYTE *a1)
{
  UNICODE_STRING *v1; // r14
  void *v2; // r13
  int v3; // r8d
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  _OWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _OWORD *Pool2; // rdi
  UNICODE_STRING *v13; // rax
  UNICODE_STRING *v14; // rsi
  UNICODE_STRING *v15; // rax
  void *v16; // r12
  void *Src[2]; // [rsp+30h] [rbp-58h]
  void *v18[2]; // [rsp+40h] [rbp-48h]
  unsigned __int64 v20; // [rsp+A8h] [rbp+20h]

  v1 = 0LL;
  v2 = 0LL;
  v3 = sub_1405F4784();
  *v4 = 0;
  result = *(_OWORD **)(v5 + 1528);
  if ( !result || *((_DWORD *)result + 2) != v3 )
  {
    if ( *((_BYTE *)KeGetCurrentThread() + 562) == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*((_DWORD *)CurrentThread + 29) & 0x400) != 0 || *((_BYTE *)CurrentThread + 586) == 1 )
        v8 = 0LL;
      else
        v8 = *((_QWORD *)CurrentThread + 30);
      if ( !v8 )
        return 0LL;
      v9 = *(_QWORD *)(v8 + 40);
      if ( !v9 )
        return 0LL;
      if ( (v9 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v9 + 24 > 0x7FFFFFFF0000LL || v9 + 24 < v9 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( *(_DWORD *)v9 != -1395763957 )
        return 0LL;
      v20 = *(_QWORD *)(v9 + 8);
      v10 = *(_QWORD *)(v9 + 16);
      if ( (v20 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v20 + 16 > 0x7FFFFFFF0000LL || v20 + 16 < v20 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (v10 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v10 + 16 > 0x7FFFFFFF0000LL || v10 + 16 < v10 )
        MEMORY[0x7FFFFFFF0000] = 0;
      *(_OWORD *)Src = *(_OWORD *)v20;
      *(_OWORD *)v18 = *(_OWORD *)v10;
      if ( WORD1(*(_OWORD *)v20) )
      {
        if ( ((__int64)Src[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = (unsigned __int64)Src[1] + WORD1(Src[0]);
        if ( v11 > 0x7FFFFFFF0000LL || (void *)v11 < Src[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( WORD1(v18[0]) )
      {
        if ( ((__int64)v18[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (char *)v18[1] + WORD1(v18[0]) > (void *)0x7FFFFFFF0000LL || (char *)v18[1] + WORD1(v18[0]) < v18[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Pool2 = (_OWORD *)ExAllocatePool2(256LL, 56LL, 1229940051LL);
      if ( Pool2 )
      {
        *Pool2 = 0LL;
        Pool2[1] = 0LL;
        Pool2[2] = 0LL;
        *((_QWORD *)Pool2 + 6) = 0LL;
        v13 = (UNICODE_STRING *)ExAllocatePool2(256LL, 16LL, 1414489427LL);
        v14 = v13;
        if ( v13 )
        {
          *v13 = 0LL;
          v2 = (void *)ExAllocatePool2(256LL, WORD1(Src[0]), 1414489427LL);
          if ( v2 )
          {
            v15 = (UNICODE_STRING *)ExAllocatePool2(256LL, 16LL, 1313826131LL);
            v1 = v15;
            if ( v15 )
            {
              *v15 = 0LL;
              v16 = (void *)ExAllocatePool2(256LL, WORD1(v18[0]), 1313826131LL);
              if ( v16 )
              {
                memmove(v2, Src[1], WORD1(Src[0]));
                RtlInitUnicodeString(v14, (PCWSTR)v2);
                memmove(v16, v18[1], WORD1(v18[0]));
                RtlInitUnicodeString(v1, (PCWSTR)v16);
                *((_QWORD *)Pool2 + 2) = v14;
                *((_QWORD *)Pool2 + 3) = v1;
                *a1 = 1;
                return Pool2;
              }
            }
          }
        }
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        if ( v1 )
          ExFreePoolWithTag(v1, 0);
        ExFreePoolWithTag(Pool2, 0);
      }
    }
    return 0LL;
  }
  return result;
}
