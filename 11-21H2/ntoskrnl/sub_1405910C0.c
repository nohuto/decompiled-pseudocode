/*
 * XREFs of sub_1405910C0 @ 0x1405910C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140216544 @ 0x140216544 (sub_140216544.c)
 *     sub_1402165BC @ 0x1402165BC (sub_1402165BC.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403A5C24 @ 0x1403A5C24 (sub_1403A5C24.c)
 *     sub_1403B40EC @ 0x1403B40EC (sub_1403B40EC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405915B4 @ 0x1405915B4 (sub_1405915B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall sub_1405910C0(__int64 a1)
{
  int v1; // r12d
  char v2; // si
  __int64 v3; // r13
  unsigned __int64 v4; // r15
  __int64 v5; // r9
  unsigned __int64 v6; // r14
  unsigned __int64 *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  _QWORD *i; // rax
  __int64 j; // rdi
  bool v18; // zf
  char v19; // r9
  char v20; // r12
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rax
  int v26; // eax
  int v27; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v30; // eax
  __int64 v31; // r8
  PVOID v32; // rcx
  PVOID *result; // rax
  _QWORD *v34; // rdx
  PVOID *v35; // rax
  signed __int32 v36[8]; // [rsp+0h] [rbp-98h] BYREF
  int v37; // [rsp+20h] [rbp-78h]
  int v38; // [rsp+24h] [rbp-74h]
  int v39; // [rsp+28h] [rbp-70h]
  unsigned __int64 v40; // [rsp+30h] [rbp-68h]
  unsigned __int64 *v41; // [rsp+38h] [rbp-60h]
  unsigned __int64 v42; // [rsp+40h] [rbp-58h]
  PVOID P[10]; // [rsp+48h] [rbp-50h] BYREF
  char v45; // [rsp+A8h] [rbp+10h]
  int v46; // [rsp+B0h] [rbp+18h]
  int v47; // [rsp+B8h] [rbp+20h]

  v1 = 0;
  v39 = 0;
  v2 = 0;
  v37 = 0;
  P[1] = P;
  P[0] = P;
  v46 = 0;
  v45 = 0;
  LOBYTE(v38) = 0;
  v47 = 0;
  v3 = 0LL;
  v4 = sub_1402165BC(1);
  v5 = 1LL;
  do
  {
    v6 = qword_140C4F040[v3 + 2085];
    v7 = (unsigned __int64 *)&qword_140C4F040[v3 + 2072];
    v8 = -1LL;
    v41 = v7;
LABEL_3:
    v9 = qword_140C4F040[v3 + 2081];
    if ( !v9 )
      goto LABEL_63;
    if ( v8 > v9 )
      v8 = qword_140C4F040[v3 + 2081];
    v10 = qword_140C4F040[v3 + 2074];
    v40 = v8;
    if ( v10 >= qword_140C53140 )
    {
      v11 = *v7;
      v42 = 3 * ((unsigned __int64)qword_140C53140 >> 2);
      if ( v11 )
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v11 + 24);
          if ( v6 >= v12 )
          {
            if ( v6 < v12 + 512 )
              goto LABEL_14;
            v13 = *(_QWORD *)(v11 + 8);
          }
          else
          {
            v13 = *(_QWORD *)v11;
          }
          if ( !v13 )
            break;
          v11 = v13;
        }
        while ( 1 )
        {
LABEL_14:
          if ( !v11 )
            break;
          v14 = *(_QWORD *)(v11 + 8);
          v15 = v11;
          if ( v14 )
          {
            for ( i = *(_QWORD **)v14; i; i = (_QWORD *)*i )
              v14 = (unsigned __int64)i;
          }
          else
          {
            for ( j = *(_QWORD *)(v11 + 16); ; j = *(_QWORD *)(v14 + 16) )
            {
              v14 = j & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v14 || *(_QWORD *)v14 == v15 )
                break;
              v15 = v14;
            }
          }
          if ( v1 )
          {
            v18 = v1-- == 1;
            v46 = v1;
            if ( v18 )
            {
              sub_1403B40EC();
              v8 = v40;
              v2 = 0;
            }
          }
          if ( *(_DWORD *)(v11 + 68) )
          {
            v5 = 1LL;
            v6 = *(_QWORD *)(v11 + 24) + 512LL;
            v40 = v8 - 1;
            if ( v8 == 1 )
              goto LABEL_60;
            if ( (++v37 & 0xF) == 0 && (unsigned int)sub_1403A5C24(v2) )
              goto LABEL_53;
            if ( KeShouldYieldProcessor() )
            {
              v19 = 1;
LABEL_53:
              sub_140216544(v4, v19 + (v2 != 0));
              sub_1402165BC(1);
              v26 = 0;
              if ( !v2 )
                v26 = v1;
              v2 = 0;
              v46 = v26;
              v1 = v26;
LABEL_56:
              v5 = 1LL;
LABEL_57:
              v7 = v41;
              v8 = v40;
              goto LABEL_3;
            }
            v11 = v14;
          }
          else
          {
            if ( !v2 )
            {
              v6 = *(_QWORD *)(v11 + 24);
              sub_140216544(v4, 1);
              v1 = 64;
              v2 = 1;
              v46 = 64;
              _InterlockedOr(v36, 0);
              v39 = dword_140D31240;
              LOBYTE(v38) = 0;
              v45 = 0;
              sub_1402165BC(2);
              v5 = 1LL;
              goto LABEL_57;
            }
            v20 = ++v37;
            if ( !v45 )
            {
              sub_14026A230();
              v45 = 1;
            }
            if ( !(_BYTE)v38 )
            {
              if ( *(_BYTE *)(v11 + 72) )
              {
                v21 = *(_DWORD *)(v11 + 76);
                if ( (unsigned int)(v39 - v21) <= 2 && ((v21 & 1) != 0 || (unsigned int)(v39 - v21) < 2) )
                {
                  v22 = sub_1405915B4(v11, 1LL, v7, v5);
                  v23 = (unsigned __int8)v38;
                  if ( v22 )
                    v23 = 1;
                  v20 = 0;
                  v37 = 0;
                  v38 = v23;
                }
              }
            }
            RtlAvlRemoveNode(v41, (unsigned __int64 *)v11);
            v24 = _InterlockedDecrement64(&qword_140C4F040[v47 + 2074]);
            _InterlockedAdd64(&qword_140C4F040[v47 + 2081], 0xFFFFFFFFFFFFFFFFuLL);
            v25 = P[0];
            if ( *((PVOID **)P[0] + 1) != P )
LABEL_77:
              __fastfail(3u);
            *(PVOID *)v11 = P[0];
            v5 = 1LL;
            *(_QWORD *)(v11 + 8) = P;
            v25[1] = v11;
            P[0] = (PVOID)v11;
            if ( v24 <= v42 )
            {
              v1 = v46;
              v27 = 1;
              v3 = 1LL;
              goto LABEL_62;
            }
            v6 = *(_QWORD *)(v11 + 24) + 512LL;
            if ( !--v40 )
            {
LABEL_60:
              v1 = v46;
              break;
            }
            v11 = v14;
            if ( (v20 & 0xF) == 0 && (unsigned int)sub_1403A5C24(v2) || KeShouldYieldProcessor() )
            {
              sub_140216544(v4, 2);
              v1 = 0;
              v2 = 0;
              v46 = 0;
              sub_1402165BC(1);
              goto LABEL_56;
            }
          }
          v1 = v46;
          v5 = 1LL;
          v8 = v40;
        }
      }
      v27 = v47;
LABEL_62:
      qword_140C4F040[v3 + 2085] = v6;
    }
    else
    {
LABEL_63:
      v27 = v47;
    }
    ++v3;
    v47 = v27 + 1;
  }
  while ( v27 + 1 < 2 );
  sub_140216544(v4, (v2 != 0) + 1);
  ExAcquireSpinLockExclusive(&dword_140C53160);
  *(_QWORD *)(a1 + 24) = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C53160);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v31 = *((_QWORD *)CurrentPrcb + 4375);
        v18 = (v30 & *(_DWORD *)(v31 + 20)) == 0;
        *(_DWORD *)(v31 + 20) &= v30;
        if ( v18 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  while ( 1 )
  {
    v32 = P[0];
    result = P;
    if ( P[0] == P )
      return result;
    v34 = *(_QWORD **)P[0];
    v35 = (PVOID *)*((_QWORD *)P[0] + 1);
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] || *v35 != P[0] )
      goto LABEL_77;
    *v35 = v34;
    v34[1] = v35;
    ExFreePoolWithTag(v32, 0);
  }
}
