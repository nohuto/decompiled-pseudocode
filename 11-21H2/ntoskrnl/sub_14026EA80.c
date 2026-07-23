/*
 * XREFs of sub_14026EA80 @ 0x14026EA80
 * Callers:
 *     sub_140246A0C @ 0x140246A0C (sub_140246A0C.c)
 *     sub_14025592C @ 0x14025592C (sub_14025592C.c)
 *     sub_14026E564 @ 0x14026E564 (sub_14026E564.c)
 *     sub_140273390 @ 0x140273390 (sub_140273390.c)
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_1406A3A68 @ 0x1406A3A68 (sub_1406A3A68.c)
 *     sub_1406DDC90 @ 0x1406DDC90 (sub_1406DDC90.c)
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 *     sub_1406F4878 @ 0x1406F4878 (sub_1406F4878.c)
 *     sub_1406F4904 @ 0x1406F4904 (sub_1406F4904.c)
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 *     sub_14070893C @ 0x14070893C (sub_14070893C.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 * Callees:
 *     sub_14026EBC4 @ 0x14026EBC4 (sub_14026EBC4.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14026EA80(__int64 a1, int a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 result; // rax
  int v16; // ecx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  bool v19; // zf
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v20 = 0LL;
  v4 = sub_14026EBC4(a1, &v20);
  v5 = ExAcquireSpinLockExclusive(&dword_140C4F2F8);
  if ( !a2 )
  {
    RtlAvlRemoveNode(&qword_140C4F2F0, a1);
    *(_QWORD *)(a1 + 24) &= ~8uLL;
    goto LABEL_19;
  }
  v7 = (_QWORD *)qword_140C4F2F0;
  LOBYTE(v6) = 0;
  if ( !qword_140C4F2F0 )
    goto LABEL_18;
  while ( 1 )
  {
    v8 = v7[3] & 7LL;
    if ( v8 > 4 )
      goto LABEL_9;
    if ( !(_DWORD)v8 )
    {
      v6 = *(v7 - 14);
      goto LABEL_6;
    }
    v10 = v8 - 1;
    if ( !v10 )
    {
      v6 = *(v7 - 6);
      goto LABEL_6;
    }
    v11 = v10 - 1;
    if ( !v11 )
      break;
    v16 = v11 - 1;
    if ( !v16 )
    {
      v6 = v7[6];
      goto LABEL_6;
    }
    if ( v16 == 1 )
    {
      v6 = v7[4];
      goto LABEL_6;
    }
LABEL_9:
    v9 = (_QWORD *)v7[1];
    if ( !v9 )
    {
      LOBYTE(v6) = 1;
      goto LABEL_18;
    }
LABEL_8:
    v7 = v9;
  }
  v12 = *(v7 - 7) + 128LL;
  v13 = 0LL;
  v6 = *(_QWORD *)(*(v7 - 7) + 136LL);
  do
  {
    v14 = *(unsigned int *)(v12 + 44);
    v12 = *(_QWORD *)(v12 + 16);
    v13 += v14;
  }
  while ( v12 );
LABEL_6:
  if ( v4 >= v6 )
    goto LABEL_9;
  v9 = (_QWORD *)*v7;
  if ( *v7 )
    goto LABEL_8;
  LOBYTE(v6) = 0;
LABEL_18:
  RtlAvlInsertNodeEx(&qword_140C4F2F0, v7, v6, a1);
  *(_QWORD *)(a1 + 24) |= 8uLL;
LABEL_19:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F2F8);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v19 = ((unsigned int)result & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= result;
        if ( v19 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
