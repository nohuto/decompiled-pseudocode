/*
 * XREFs of sub_1405B1A10 @ 0x1405B1A10
 * Callers:
 *     sub_1405E2170 @ 0x1405E2170 (sub_1405E2170.c)
 *     sub_1405E22E8 @ 0x1405E22E8 (sub_1405E22E8.c)
 * Callees:
 *     sub_140264ED0 @ 0x140264ED0 (sub_140264ED0.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140589CEC @ 0x140589CEC (sub_140589CEC.c)
 *     sub_1405B1974 @ 0x1405B1974 (sub_1405B1974.c)
 *     sub_1405B1D98 @ 0x1405B1D98 (sub_1405B1D98.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

ULONG_PTR *__fastcall sub_1405B1A10(ULONG_PTR **a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  signed __int32 v6; // eax
  unsigned int v7; // r13d
  ULONG_PTR **v8; // r10
  ULONG_PTR *result; // rax
  __int64 v10; // rdi
  struct _MDL *v11; // rax
  struct _MDL *PartitionNodePagesForMdl; // rsi
  __int64 *v13; // rbp
  __int64 v14; // r15
  __int64 *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdi
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v23; // di
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v25; // r9
  int v26; // eax
  bool v27; // zf
  int v28; // eax
  unsigned __int8 v29; // [rsp+40h] [rbp-68h]
  char v30[3]; // [rsp+41h] [rbp-67h] BYREF
  int v31; // [rsp+44h] [rbp-64h]
  __int64 v32; // [rsp+48h] [rbp-60h] BYREF
  ULONG_PTR *v33; // [rsp+50h] [rbp-58h]
  unsigned __int64 v34; // [rsp+58h] [rbp-50h]
  __int128 v35; // [rsp+60h] [rbp-48h] BYREF

  v30[0] = 0;
  v32 = 0LL;
  v35 = 0LL;
  *a5 = 0;
  sub_140339C20(0LL, 0, (__int64)&v35);
  v6 = _InterlockedExchangeAdd((volatile signed __int32 *)v35, 1u);
  v7 = DWORD2(v35) & v6 | HIDWORD(v35);
  result = sub_140264ED0(v8, 0LL, v30);
  v33 = result;
  v10 = (__int64)result;
  if ( !result )
    return result;
  if ( (*((_DWORD *)result + 1) & 8) == 0
    || (v11 = (struct _MDL *)sub_1402828F0(64, 8 * a2 + 48, 0x69646D4Du), (PartitionNodePagesForMdl = v11) == 0LL) )
  {
LABEL_32:
    v28 = 513;
    if ( !a4 )
    {
LABEL_34:
      PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                                  0,
                                                  -1,
                                                  0LL,
                                                  a2 << 12,
                                                  1,
                                                  v7 >> byte_140C506CC,
                                                  v28,
                                                  a1);
      goto LABEL_35;
    }
LABEL_33:
    v28 = 517;
    goto LABEL_34;
  }
  v13 = (__int64 *)&v11[1];
  v31 = 64;
  v14 = 8 * a2;
  v15 = (__int64 *)&v11[1];
  v34 = (unsigned __int64)&v11[1] + 8 * a2;
  if ( (unsigned __int64)&v11[1] >= v34 )
    goto LABEL_31;
  v16 = a3;
  while ( 1 )
  {
    v17 = sub_1402EB440(v10, *((_DWORD *)qword_14003BE90 + v16), v7, 2, &v32, 0);
    *v15 = v17;
    if ( v17 == -1 )
    {
      if ( !v32 )
        break;
      v18 = v31;
      while ( !(unsigned int)sub_1405B1974(v32, (__int64)v33, v14 >> 3, v18) )
      {
        if ( v15 != v13 && !a4 )
          goto LABEL_27;
        if ( (v31 & 0x40) == 0 )
          break;
        v18 = v31 & 0xFFFFFFBF;
        v31 &= ~0x40u;
      }
      --v15;
      v14 += 8LL;
    }
    else
    {
      v19 = 48 * v17 - 0x220000000000LL;
      v20 = sub_1402F2700(v19);
      v21 = *(_QWORD *)(v19 + 40);
      *(_QWORD *)v19 = 0LL;
      v29 = v20;
      *(_QWORD *)(v19 + 40) = v21 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
      *(_QWORD *)(v19 + 16) = 0LL;
      sub_140589CEC(v19, 512);
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !dword_140D06B08 )
        goto LABEL_23;
      if ( (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v23 = v29;
        if ( v29 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = *((_QWORD *)CurrentPrcb + 4375);
          v26 = ~(unsigned __int16)(-1LL << (v29 + 1));
          v27 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v26;
          if ( v27 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      else
      {
LABEL_23:
        v23 = v29;
      }
      __writecr8(v23);
    }
    v16 = a3;
    ++v15;
    v14 -= 8LL;
    if ( (unsigned __int64)v15 >= v34 )
      break;
    v10 = (__int64)v33;
  }
  if ( v15 == v13 )
  {
LABEL_31:
    ExFreePoolWithTag(PartitionNodePagesForMdl, 0);
    goto LABEL_32;
  }
LABEL_27:
  PartitionNodePagesForMdl->Next = 0LL;
  PartitionNodePagesForMdl->StartVa = 0LL;
  PartitionNodePagesForMdl->Size = 8 * (v15 - v13 + 6);
  PartitionNodePagesForMdl->MdlFlags = 2;
  *(_QWORD *)&PartitionNodePagesForMdl->ByteCount = (unsigned int)(v15 - v13) << 12;
  if ( a4 && v15 != (__int64 *)v34 )
  {
    sub_1405B1D98(PartitionNodePagesForMdl);
    ExFreePoolWithTag(PartitionNodePagesForMdl, 0);
    goto LABEL_33;
  }
  *a5 = 1;
LABEL_35:
  if ( v30[0] )
    sub_1403606C4(v33[22]);
  return (ULONG_PTR *)PartitionNodePagesForMdl;
}
