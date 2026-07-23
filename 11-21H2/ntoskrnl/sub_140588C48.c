/*
 * XREFs of sub_140588C48 @ 0x140588C48
 * Callers:
 *     sub_1405BF56C @ 0x1405BF56C (sub_1405BF56C.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405875A0 @ 0x1405875A0 (sub_1405875A0.c)
 *     sub_1405891A4 @ 0x1405891A4 (sub_1405891A4.c)
 *     sub_14058938C @ 0x14058938C (sub_14058938C.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 */

__int64 __fastcall sub_140588C48(_QWORD *BugCheckParameter2)
{
  __int64 result; // rax
  __int64 v3; // r8
  unsigned __int16 *v4; // rbx
  unsigned int v5; // ebp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  volatile LONG *v8; // r14
  volatile LONG *v9; // r13
  volatile LONG *v10; // rcx
  volatile LONG *v11; // rcx
  KIRQL v12; // r15
  __int64 v13; // rsi
  unsigned __int64 *v14; // r14
  volatile LONG *v15; // r15
  __int64 v16; // r9
  unsigned int v17; // r8d
  __int64 v18; // rbp
  __int64 v19; // rbx
  _QWORD *v20; // rdx
  bool v21; // r8
  _QWORD *v22; // rcx
  volatile LONG *v23; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v26; // r9
  int v27; // eax
  bool v28; // zf
  ULONG_PTR v29; // r9
  volatile LONG *v30; // [rsp+30h] [rbp-68h]
  unsigned __int16 *v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  KIRQL v33; // [rsp+A0h] [rbp+8h]
  unsigned int v34; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v35; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v36; // [rsp+B8h] [rbp+20h]

  result = BugCheckParameter2[22];
  v3 = BugCheckParameter2[1999] << 18;
  v4 = **(unsigned __int16 ***)(result + 56);
  v31 = v4;
  if ( v3 )
    result = sub_1409811F0((_DWORD)BugCheckParameter2, (_DWORD)v4, v3, 0, 769, 1);
  v5 = 0;
  v6 = BugCheckParameter2[2];
  v7 = *((_QWORD *)v4 + 2);
  v35 = v6;
  v36 = v7;
  v34 = 0;
  if ( word_140D05000 )
  {
    v8 = (volatile LONG *)(v7 + 22848);
    v30 = (volatile LONG *)(v7 + 22848);
    v9 = (volatile LONG *)(v6 + 22848);
    do
    {
      if ( *((_QWORD *)v9 - 26) )
      {
        v10 = v8;
        if ( v7 >= v6 )
          v10 = v9;
        v33 = ExAcquireSpinLockExclusive(v10);
        v11 = v9;
        v12 = v33;
        if ( v7 >= v6 )
          v11 = v8;
        ExAcquireSpinLockExclusiveAtDpcLevel(v11);
        v13 = *((_QWORD *)v9 - 26);
        if ( v13 )
        {
          v14 = (unsigned __int64 *)(v8 - 52);
          v15 = v9 - 52;
          do
          {
            RtlAvlRemoveNode((unsigned __int64 *)v9 - 26, (unsigned __int64 *)v13);
            v17 = 0;
            v18 = *(_DWORD *)(v13 + 24) & 0x3FFFFF;
            v32 = qword_140C52968;
            v19 = *(_QWORD *)(qword_140C52968 + 8 * v18);
            if ( (v19 & 0x1C00000) == 0x1000000 )
            {
              sub_1405891A4(BugCheckParameter2, *(_QWORD *)(v13 + 24), 0LL, v16);
              v17 = 9;
            }
            *(_QWORD *)(v32 + 8 * v18) = v19 ^ (v19 ^ ((unsigned __int64)*v31 << 49)) & 0xFFE000000000000LL;
            if ( v17 >= 8 )
              sub_1405875A0(0LL, *(_QWORD *)(v13 + 24), v17);
            v20 = (_QWORD *)*v14;
            v21 = 0;
            if ( *v14 )
            {
              while ( 1 )
              {
                if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFuLL) >= (v20[3] & 0x3FFFFFuLL) )
                {
                  v22 = (_QWORD *)v20[1];
                  if ( !v22 )
                  {
                    v21 = 1;
                    break;
                  }
                }
                else
                {
                  v22 = (_QWORD *)*v20;
                  if ( !*v20 )
                  {
                    v21 = 0;
                    break;
                  }
                }
                v20 = v22;
              }
            }
            RtlAvlInsertNodeEx(v14, (unsigned __int64)v20, v21, (_QWORD *)v13);
            sub_14058938C(BugCheckParameter2, *(_QWORD *)(v13 + 24), 1LL);
            sub_14058938C(v31, *(_QWORD *)(v13 + 24), 1LL);
            v13 = *(_QWORD *)v15;
          }
          while ( *(_QWORD *)v15 );
          v8 = v30;
          v12 = v33;
          v6 = v35;
          v7 = v36;
          v5 = v34;
        }
        if ( v7 >= v6 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(v8);
          v23 = v9;
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(v9);
          v23 = v8;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v23);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v12 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v26 = *((_QWORD *)CurrentPrcb + 4375);
              v27 = ~(unsigned __int16)(-1LL << (v12 + 1));
              v28 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
              *(_DWORD *)(v26 + 20) &= v27;
              if ( v28 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v12);
      }
      result = (unsigned __int16)word_140D05000;
      v6 += 24512LL;
      v7 += 24512LL;
      v35 = v6;
      v8 += 6128;
      v36 = v7;
      ++v5;
      v30 = v8;
      v9 += 6128;
      v34 = v5;
    }
    while ( v5 < (unsigned __int16)word_140D05000 );
  }
  v29 = BugCheckParameter2[53];
  if ( v29 )
    KeBugCheckEx(0x1Au, 0x30000003uLL, (ULONG_PTR)BugCheckParameter2, v29, BugCheckParameter2[1999]);
  return result;
}
