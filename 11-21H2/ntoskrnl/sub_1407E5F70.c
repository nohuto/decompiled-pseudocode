/*
 * XREFs of sub_1407E5F70 @ 0x1407E5F70
 * Callers:
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1407190AC @ 0x1407190AC (sub_1407190AC.c)
 *     sub_14071C288 @ 0x14071C288 (sub_14071C288.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

__int64 __fastcall sub_1407E5F70(__int64 a1, _QWORD *a2, int a3, char a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rbx
  char *PoolWithQuotaTag; // rax
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  __int64 *v21; // rdx
  _QWORD *v22; // rax
  unsigned __int8 CurrentIrql; // bl
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v26; // rdx
  __int64 **v27; // rcx
  __int64 ***v28; // rax
  _QWORD *v29; // rdx
  __int64 **v30; // rax
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v33; // r9
  int v34; // eax
  bool v35; // zf
  int v36; // eax
  signed __int32 v37[8]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v38[2]; // [rsp+40h] [rbp-68h] BYREF
  char v39; // [rsp+50h] [rbp-58h]
  char v40; // [rsp+51h] [rbp-57h]
  _BYTE v41[5]; // [rsp+52h] [rbp-56h]
  char v42; // [rsp+57h] [rbp-51h]
  _QWORD v43[2]; // [rsp+60h] [rbp-48h] BYREF

  if ( (unsigned __int8)sub_140AB45A0(a1, 0LL) )
  {
    sub_1407190AC(a2);
    return 3221225852LL;
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( !v12 )
  {
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x58uLL, 0x626E4D43u);
    v12 = (__int64)PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
    {
      sub_1407190AC(a2);
      return 3221225626LL;
    }
    *((_QWORD *)PoolWithQuotaTag + 4) = *(_QWORD *)(a1 + 8);
    *((_DWORD *)PoolWithQuotaTag + 12) = a3 & 0x3FFFFFFF | ((a4 & 1) << 30);
    *((_QWORD *)PoolWithQuotaTag + 3) = PoolWithQuotaTag + 16;
    *((_QWORD *)PoolWithQuotaTag + 2) = PoolWithQuotaTag + 16;
    *(_QWORD *)(a1 + 16) = PoolWithQuotaTag;
    *((_QWORD *)PoolWithQuotaTag + 5) = a1;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(PoolWithQuotaTag + 56));
    v15 = (__int64 *)(v13 + 1592);
    v16 = *(_QWORD *)(v13 + 1592);
    if ( v16 )
    {
      v11 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) >> 21) & 0x3FF;
      while ( 1 )
      {
        v15 = (__int64 *)v16;
        if ( ((*(_DWORD *)(*(_QWORD *)(v16 + 32) + 8LL) >> 21) & 0x3FFu) > (unsigned int)v11 )
          break;
        v16 = *(_QWORD *)v16;
        if ( !*v15 )
          goto LABEL_8;
      }
      *(_QWORD *)v12 = v16;
      **(_QWORD **)(v16 + 8) = v12;
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v16 + 8);
      *(_QWORD *)(v16 + 8) = v12;
    }
    else
    {
LABEL_8:
      *v15 = v12;
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = v15;
    }
  }
  v17 = *(_QWORD *)(v12 + 16);
  v18 = (_QWORD *)(v12 + 16);
  if ( *(_QWORD *)(v17 + 8) != v12 + 16 )
    goto LABEL_32;
  *a2 = v17;
  a2[1] = v18;
  *(_QWORD *)(v17 + 8) = a2;
  v19 = a2 + 4;
  *v18 = a2;
  if ( (a2[7] & 0x10000) != 0 )
  {
    a2[5] = a2 + 4;
    *v19 = v19;
  }
  else
  {
    v29 = *(_QWORD **)(a7 + 40);
    if ( *v29 != a7 + 32 )
      goto LABEL_32;
    *v19 = a7 + 32;
    a2[5] = v29;
    *v29 = v19;
    *(_QWORD *)(a7 + 40) = v19;
  }
  if ( (unsigned int)(unsigned __int16)*((_DWORD *)a2 + 14) - 3 > 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    CurrentThread = KeGetCurrentThread();
    if ( (*((_BYTE *)CurrentThread + 1384) & 8) == 0 )
    {
      *((_BYTE *)CurrentThread + 1384) |= 8u;
      _InterlockedOr(v37, 0);
      *((_QWORD *)CurrentThread + 148) = (char *)CurrentThread + 1176;
      *((_QWORD *)CurrentThread + 147) = (char *)CurrentThread + 1176;
    }
    v26 = KeGetCurrentThread();
    v27 = (__int64 **)(a2 + 2);
    if ( (a2[7] & 0x10000) != 0 )
    {
      v28 = (__int64 ***)((char *)v26 + 1176);
      v21 = (__int64 *)*((_QWORD *)v26 + 147);
      if ( (__int64 ***)v21[1] == v28 )
      {
        *v27 = v21;
        a2[3] = v28;
        v21[1] = (__int64)v27;
        *v28 = v27;
        goto LABEL_25;
      }
    }
    else
    {
      v21 = (__int64 *)((char *)v26 + 1176);
      v30 = (__int64 **)v21[1];
      if ( *v30 == v21 )
      {
        *v27 = v21;
        a2[3] = v30;
        *v30 = (__int64 *)v27;
        v21[1] = (__int64)v27;
LABEL_25:
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v21 = (__int64 *)(-1LL << (CurrentIrql + 1));
              v33 = *((_QWORD *)CurrentPrcb + 4375);
              v34 = ~(unsigned __int16)v21;
              v35 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
              v11 = (unsigned int)v34 & *(_DWORD *)(v33 + 20);
              *(_DWORD *)(v33 + 20) = v11;
              if ( v35 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        goto LABEL_16;
      }
    }
LABEL_32:
    __fastfail(3u);
  }
  v20 = (_QWORD *)qword_140D3B690;
  v21 = &qword_140D3B688;
  v22 = a2 + 2;
  if ( *(__int64 **)qword_140D3B690 != &qword_140D3B688 )
    goto LABEL_32;
  *v22 = &qword_140D3B688;
  a2[3] = v20;
  *v20 = v22;
  qword_140D3B690 = (__int64)(a2 + 2);
LABEL_16:
  if ( (DWORD2(xmmword_140D06900[0]) & 0x2000000) != 0 )
  {
    v36 = *((_DWORD *)a2 + 14);
    v39 = v36;
    *(_DWORD *)&v41[1] = 0;
    v38[1] = *(_QWORD *)(a1 + 8);
    v42 = 0;
    v43[0] = v38;
    v38[0] = a2;
    *(_DWORD *)v41 = (v36 & 0x10000) != 0;
    v40 = a4;
    v43[1] = 19LL;
    sub_14035EDE4((__int64)v43, 1u, 0x42000000u, 0x930u, 0x501902u);
  }
  if ( *(int *)(v12 + 48) >= 0 )
    return 259LL;
  sub_14071C288(v12, (__int64)v21, v11, 0x10Cu, 1, 0LL, 0LL);
  return 0LL;
}
