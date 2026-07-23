/*
 * XREFs of sub_140A01A20 @ 0x140A01A20
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1409FE350 @ 0x1409FE350 (sub_1409FE350.c)
 *     sub_1409FE5F4 @ 0x1409FE5F4 (sub_1409FE5F4.c)
 *     sub_1409FEC6C @ 0x1409FEC6C (sub_1409FEC6C.c)
 *     sub_1409FF178 @ 0x1409FF178 (sub_1409FF178.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A01A20(char *Src, unsigned int a2, volatile void *a3, unsigned int *a4)
{
  KPROCESSOR_MODE v7; // dl
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r15d
  char *v11; // rdx
  unsigned int v12; // edi
  unsigned int v13; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v15; // r14
  PVOID v16; // rsi
  int v17; // ebx
  unsigned int v18; // eax
  int v19; // eax
  KPROCESSOR_MODE PreviousMode; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+24h] [rbp-64h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+2Ch] [rbp-5Ch]
  PVOID P; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-38h]

  v21 = 0;
  P = 0LL;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  if ( a2 - 1 <= 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = *((_BYTE *)CurrentThread + 562);
    PreviousMode = v7;
    v8 = (unsigned __int64)(Src + 4);
    v9 = 0x7FFFFFFF0000LL;
    if ( v7 )
    {
      if ( v8 >= 0x7FFFFFFF0000LL )
        v8 = 0x7FFFFFFF0000LL;
      v10 = *(_DWORD *)v8;
      NumberOfBytes[0] = *(_DWORD *)v8;
    }
    else
    {
      v10 = *(_DWORD *)v8;
      NumberOfBytes[0] = *(_DWORD *)v8;
    }
    if ( v10 < 0xC )
      return 3221225485LL;
    if ( v7 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = &Src[v10];
      if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v9 = (__int64)a4;
      *(_DWORD *)v9 = *(_DWORD *)v9;
      v12 = *a4;
      v21 = v12;
      v13 = v12;
      if ( !a3 )
      {
        v12 = 0;
        v21 = 0;
        v13 = 0;
      }
      if ( v13 )
        ProbeForWrite(a3, v13, 4u);
      if ( !SeSinglePrivilegeCheck(stru_140D3CA50, PreviousMode) )
        return 3221225569LL;
      v10 = NumberOfBytes[0];
    }
    else
    {
      v12 = *a4;
      v21 = v12;
      v13 = v12;
      if ( !a3 )
      {
        v12 = 0;
        v21 = 0;
        v13 = 0;
      }
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72766E45u);
    v15 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memmove(PoolWithTag, Src, v10);
    v15[1] = v10;
    if ( v13 )
    {
      v16 = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x72766E45u);
      *(_QWORD *)&NumberOfBytes[1] = v16;
      if ( !v16 )
      {
        ExFreePoolWithTag(v15, 0);
        P = 0LL;
        return 3221225626LL;
      }
    }
    else
    {
      v16 = 0LL;
      *(_QWORD *)&NumberOfBytes[1] = 0LL;
    }
    v17 = sub_1409FF178((unsigned __int64)v15, (unsigned __int64)v15 + (unsigned int)v15[1]);
    if ( v17 < 0 )
    {
LABEL_49:
      ExFreePoolWithTag(v15, 0);
      if ( v17 >= 0 )
      {
        if ( !v16 )
        {
LABEL_54:
          *a4 = v12;
          return (unsigned int)v17;
        }
        memmove((void *)a3, v16, v12);
      }
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        *(_QWORD *)&NumberOfBytes[1] = 0LL;
      }
      goto LABEL_54;
    }
    v18 = v15[2];
    if ( a2 == v18 )
    {
      if ( v12 < v10 )
        v17 = -1073741789;
      else
        memmove(v16, v15, v10);
      v12 = v10;
      v21 = v10;
      goto LABEL_49;
    }
    if ( v18 )
    {
      if ( v18 <= 2 )
      {
        v19 = sub_1409FE350((__int64)v15, a2, v16, (__int64)&v21);
        goto LABEL_47;
      }
      if ( v18 == 3 )
      {
        v19 = sub_1409FEC6C((__int64)v15, a2, (char *)v16, &v21);
        goto LABEL_47;
      }
      if ( v18 == 4 )
      {
        v19 = sub_1409FE5F4((__int64)v15, a2, (__int64)v16, (__int64)&v21);
LABEL_47:
        v17 = v19;
        v12 = v21;
        goto LABEL_49;
      }
    }
    v17 = -1073741811;
    goto LABEL_49;
  }
  return 3221225485LL;
}
