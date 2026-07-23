/*
 * XREFs of sub_1405C350C @ 0x1405C350C
 * Callers:
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 * Callees:
 *     sub_14026EBC4 @ 0x14026EBC4 (sub_14026EBC4.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405C350C(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  bool v6; // r8
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  bool v20; // zf
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  v21 = 0LL;
  v4 = sub_14026EBC4(a1, &v21);
  v5 = ExAcquireSpinLockExclusive(&dword_140C4F2F8);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140C4F2F0, a1);
  a1[3] &= ~8uLL;
  v6 = 0;
  v7 = (_QWORD *)qword_140C4F2F0;
  if ( qword_140C4F2F0 )
  {
    while ( 1 )
    {
      v8 = v7[3] & 7LL;
      if ( v8 > 4 )
        goto LABEL_15;
      if ( !(_DWORD)v8 )
      {
        v12 = *(v7 - 14);
        goto LABEL_16;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        v12 = *(v7 - 6);
        goto LABEL_16;
      }
      v10 = v9 - 1;
      if ( v10 )
        break;
      v13 = *(v7 - 7) + 128LL;
      v14 = 0LL;
      v12 = *(_QWORD *)(*(v7 - 7) + 136LL);
      do
      {
        v15 = *(unsigned int *)(v13 + 44);
        v13 = *(_QWORD *)(v13 + 16);
        v14 += v15;
      }
      while ( v13 );
LABEL_16:
      if ( v4 >= v12 )
      {
        v16 = (_QWORD *)v7[1];
        if ( !v16 )
        {
          v6 = 1;
          goto LABEL_22;
        }
      }
      else
      {
        v16 = (_QWORD *)*v7;
        if ( !*v7 )
        {
          v6 = 0;
          goto LABEL_22;
        }
      }
      v7 = v16;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v12 = v7[6];
      goto LABEL_16;
    }
    if ( v11 == 1 )
    {
      v12 = v7[4];
      goto LABEL_16;
    }
LABEL_15:
    v12 = 0LL;
    goto LABEL_16;
  }
LABEL_22:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4F2F0, (unsigned __int64)v7, v6, a2);
  a2[3] |= 8uLL;
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
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v20 = ((unsigned int)result & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= result;
        if ( v20 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
