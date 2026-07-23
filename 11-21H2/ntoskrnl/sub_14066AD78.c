/*
 * XREFs of sub_14066AD78 @ 0x14066AD78
 * Callers:
 *     sub_14066AD24 @ 0x14066AD24 (sub_14066AD24.c)
 *     sub_1406E54C4 @ 0x1406E54C4 (sub_1406E54C4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066B04C @ 0x14066B04C (sub_14066B04C.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A73B0 @ 0x1407A73B0 (sub_1407A73B0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14066AD78(__int64 a1, __int64 a2)
{
  char v3; // r12
  __int64 v4; // rsi
  ULONG_PTR v5; // rdi
  char *Pool2; // r14
  void *v7; // rax
  PEPROCESS v8; // r13
  int v9; // ebx
  __int64 j; // r12
  int v11; // ecx
  unsigned __int64 v13; // r10
  __int64 v14; // rbx
  __int64 i; // r9
  int v16; // ecx
  char *v17; // [rsp+58h] [rbp-50h]
  int *v18; // [rsp+60h] [rbp-48h]
  char v19; // [rsp+B0h] [rbp+8h]
  __int64 v21; // [rsp+C0h] [rbp+18h]

  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  v19 = v3;
  if ( (*(_DWORD *)a1 & 0xFFF0FFFF) != 0 )
    return 3221225485LL;
  LODWORD(v4) = 1;
  v5 = 0LL;
  Pool2 = 0LL;
  if ( (*(_DWORD *)a1 & 0x40000) != 0 )
  {
    v4 = *(unsigned int *)(a1 + 16);
    if ( (unsigned int)v4 > 0x200 )
      return 3221227298LL;
    if ( (unsigned int)v4 > 1 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, 24 * v4, 1214476364LL);
      if ( !Pool2 )
        return 3221225495LL;
      v13 = *(_QWORD *)(a1 + 8);
      if ( *((_BYTE *)KeGetCurrentThread() + 562) )
      {
        v14 = 16LL * (unsigned int)v4;
        if ( v14 )
        {
          if ( (v13 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v14 + v13 > 0x7FFFFFFF0000LL || v14 + v13 < v13 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
      {
        v17 = &Pool2[24 * i];
        v18 = (int *)(v13 + 16LL * (unsigned int)i);
        v16 = *v18;
        *(_DWORD *)v17 = *v18;
        *((_QWORD *)v17 + 1) = (unsigned int)v18[1];
        *((_DWORD *)v17 + 4) = v18[2];
        *((_DWORD *)v17 + 5) = v18[3];
        if ( (v16 & 0xFFF4FFFF) != 0 )
        {
          v9 = -1073741811;
          goto LABEL_12;
        }
      }
      goto LABEL_3;
    }
    return 3221225485LL;
  }
LABEL_3:
  v7 = (void *)sub_1407A73B0(qword_1400011F8, 48LL * (unsigned int)v4, 0LL);
  v5 = (ULONG_PTR)v7;
  if ( v7 )
  {
    memset(v7, 0, 48LL * (unsigned int)v4);
    *(_DWORD *)(v5 + 4) = v4;
    if ( v3 )
      v8 = (PEPROCESS)*((_QWORD *)KeGetCurrentThread() + 23);
    else
      v8 = PsInitialSystemProcess;
    v9 = 0;
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= (unsigned int)v4 )
      {
        *(_QWORD *)(a2 + 48) = v5;
        v5 = 0LL;
        goto LABEL_12;
      }
      v21 = 48 * j;
      v9 = sub_14066B04C(v8, v19, v5 + 48 * j + 8);
      if ( v9 >= 0 )
      {
        v11 = *(_DWORD *)(qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(*(_QWORD *)(v21 + v5 + 24)
                                                                                                - 24LL) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(*(_QWORD *)(v21 + v5 + 24) - 48) >> 8)]
                        + 68);
        *(_DWORD *)(v21 + v5) = v11;
        if ( (v11 & 0xFFD) == 0 )
          break;
      }
    }
    v9 = -1073741790;
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_12:
  if ( v5 )
    sub_1407A5A54(v5);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4863704Cu);
  return (unsigned int)v9;
}
