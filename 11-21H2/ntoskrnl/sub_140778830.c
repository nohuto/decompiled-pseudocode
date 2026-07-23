/*
 * XREFs of sub_140778830 @ 0x140778830
 * Callers:
 *     sub_14076DD0C @ 0x14076DD0C (sub_14076DD0C.c)
 *     sub_140778800 @ 0x140778800 (sub_140778800.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402DF3F0 (RtlLookupElementGenericTableAvl.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406C7E48 @ 0x1406C7E48 (sub_1406C7E48.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_14076A0A8 @ 0x14076A0A8 (sub_14076A0A8.c)
 *     sub_1407783C4 @ 0x1407783C4 (sub_1407783C4.c)
 *     sub_140779A08 @ 0x140779A08 (sub_140779A08.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077A750 @ 0x14077A750 (sub_14077A750.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_14094A630 @ 0x14094A630 (sub_14094A630.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140778830(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned int a5)
{
  char *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v11; // esi
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rbx
  struct _KTHREAD *v15; // rax
  _DWORD *v16; // rcx
  __int128 *v17; // rax
  const wchar_t *v18; // r14
  unsigned int v19; // r8d
  __int128 v20; // xmm0
  int v21; // eax
  char *v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  const wchar_t *v27; // rdx
  _DWORD *Pool2; // rax
  _DWORD *v29; // rbx
  int v30; // eax
  ULONG_PTR v31; // rcx
  struct _KTHREAD *v32; // rax
  __int64 v33; // rdx
  int v34; // ebx
  struct _KTHREAD *v35; // rax
  struct _KTHREAD *v36; // rax
  __int64 v37; // rdi
  char *v38; // rsi
  __int64 *v39; // rax
  __int64 v40; // rbx
  _QWORD *v41; // rbx
  _QWORD *v42; // rdx
  PVOID *v43; // r8
  _QWORD *v44; // rax
  struct _KTHREAD *v45; // rax
  PVOID *v46; // rdx
  _QWORD *v47; // rax
  struct _ERESOURCE *v48; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v50[4]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v51; // [rsp+3Ch] [rbp-34h]
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int128 v53; // [rsp+48h] [rbp-28h]
  __int128 v54; // [rsp+58h] [rbp-18h] BYREF

  v5 = 0LL;
  Src = 0LL;
  *((_QWORD *)&v54 + 1) = 0LL;
  P = 0LL;
  v50[0] = 0;
  if ( (int)a2 < 7 )
  {
    if ( a3 == 1 )
      goto LABEL_58;
    if ( (int)sub_140779DC4(&P) < 0 )
    {
      v5 = (char *)P;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceSharedLite(&stru_140C45620, 1u);
      v5 = (char *)P;
      v11 = sub_14077A750(a1, a2, P, &Src);
      ExReleaseResourceLite(&stru_140C45620);
      KeLeaveCriticalRegion();
      if ( v11 >= 0 )
      {
        if ( !Src )
          goto LABEL_19;
        v12 = a3 - 2;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = (unsigned int)(v13 - 1);
            if ( (_DWORD)v14 )
            {
              if ( (_DWORD)v14 == 1 )
                *((_DWORD *)Src + 1) |= 8u;
              goto LABEL_19;
            }
            sub_1407783C4(a2, a1, *((_QWORD *)Src + 1), *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16), v50);
            if ( !v50[0] )
            {
              v15 = KeGetCurrentThread();
              --*((_WORD *)v15 + 242);
              ExAcquireResourceSharedLite(&stru_140C45620, 1u);
              v16 = Src;
              v5 = (char *)P;
              if ( *((_QWORD *)Src + 7) )
                goto LABEL_18;
              v17 = *(__int128 **)(a4 + 16);
              v18 = *(const wchar_t **)(a4 + 8);
              v20 = *v17;
              v51 = *((_DWORD *)v17 + 4);
              v19 = v51;
              *(_QWORD *)&v54 = __PAIR64__(a5, v51);
              v53 = v20;
              *((_QWORD *)&v54 + 1) = v18;
              if ( *((_DWORD *)Src + 19) )
              {
                do
                {
                  if ( v19 == v16[8 * v14 + 24] )
                  {
                    v25 = 8LL * (unsigned int)v14;
                    v26 = v53 - *(_QWORD *)&v16[v25 + 20];
                    if ( (_QWORD)v53 == *(_QWORD *)&v16[v25 + 20] )
                      v26 = *((_QWORD *)&v53 + 1) - *(_QWORD *)&v16[v25 + 22];
                    if ( !v26 && a5 == v16[v25 + 25] )
                    {
                      v27 = *(const wchar_t **)&v16[v25 + 26];
                      if ( v18 == v27 )
                        goto LABEL_18;
                      if ( v18 && v27 )
                      {
                        if ( !wcsicmp(v18, v27) )
                          goto LABEL_18;
                        v16 = Src;
                      }
                    }
                    v19 = v51;
                  }
                  v14 = (unsigned int)(v14 + 1);
                }
                while ( (unsigned int)v14 < v16[19] );
              }
              if ( a5 == 1 )
              {
                v30 = v16[1];
                if ( (v30 & 4) == 0 )
                {
                  v16[1] = v30 | 4;
                  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
                  v16 = Src;
                }
              }
              v21 = v16[18];
              if ( v16[19] == v21 )
              {
                Pool2 = (_DWORD *)ExAllocatePool2(256LL, 32LL * (unsigned int)(2 * v21) + 80, 1097887312LL);
                v29 = Pool2;
                if ( !Pool2 )
                {
                  v11 = -1073741670;
                  goto LABEL_18;
                }
                memmove(Pool2, Src, 32LL * *((unsigned int *)Src + 19) + 80);
                v29[18] *= 2;
                *(_QWORD *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src) = v29;
                ExFreePoolWithTag(Src, 0x41706E50u);
                Src = v29;
              }
              v11 = sub_14077DE70(*(_QWORD *)(a4 + 8), 0x7FFFFFFFLL, 1097887312LL, (char *)&v54 + 8);
              if ( v11 >= 0 )
              {
                v22 = (char *)Src;
                v23 = v54;
                v24 = 32LL * *((unsigned int *)Src + 19);
                *(_OWORD *)((char *)Src + v24 + 80) = v53;
                *(_OWORD *)&v22[v24 + 96] = v23;
                ++*((_DWORD *)Src + 19);
              }
LABEL_18:
              ExReleaseResourceLite(&stru_140C45620);
              KeLeaveCriticalRegion();
              if ( v11 >= 0 )
                goto LABEL_19;
              goto LABEL_53;
            }
          }
          else
          {
            *((_DWORD *)Src + 1) |= 2u;
            v31 = *((_QWORD *)Src + 1);
            v32 = KeGetCurrentThread();
            --*((_WORD *)v32 + 242);
            ExAcquirePushLockExclusiveEx(v31, 0LL);
            v33 = *((_QWORD *)Src + 1);
            v34 = *(_DWORD *)(v33 + 32);
            *(_DWORD *)(v33 + 32) = v34 & 0xFFFFFFFE;
            ExReleasePushLockEx(*((_QWORD *)Src + 1), 0LL);
            KeLeaveCriticalRegion();
            if ( (v34 & 1) != 0 )
              sub_14076A0A8(a2, a1);
            v35 = KeGetCurrentThread();
            --*((_WORD *)v35 + 242);
            ExAcquireResourceExclusiveLite(&stru_140C45620, 1u);
            v36 = KeGetCurrentThread();
            --*((_WORD *)v36 + 242);
            ExAcquireResourceSharedLite(&stru_140C456A0, 1u);
            v37 = qword_140C45690;
            v38 = (char *)P;
            while ( (__int64 *)v37 != &qword_140C45690 )
            {
              if ( (char *)v37 != v38 )
              {
                v39 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v37 + 24), &Src);
                if ( v39 )
                {
                  v40 = *v39;
                  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v37 + 24), v39);
                  v41 = (_QWORD *)(v40 + 56);
                  v42 = *(_QWORD **)(v37 + 136);
                  if ( *v42 != v37 + 128 )
                    goto LABEL_60;
                  *v41 = v37 + 128;
                  v41[1] = v42;
                  *v42 = v41;
                  *(_QWORD *)(v37 + 136) = v41;
                }
              }
              v37 = *(_QWORD *)v37;
            }
            ExReleaseResourceLite(&stru_140C456A0);
            KeLeaveCriticalRegion();
            sub_140779A08(Src);
            RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v38 + 24), &Src);
            v43 = (PVOID *)*((_QWORD *)v38 + 17);
            v44 = (char *)Src + 56;
            if ( *v43 != v38 + 128 )
              goto LABEL_60;
            *v44 = v38 + 128;
            v44[1] = v43;
            *v43 = v44;
            *((_QWORD *)v38 + 17) = v44;
            ExReleaseResourceLite(&stru_140C45620);
            sub_1402F9540((__int64)KeGetCurrentThread());
            Src = 0LL;
            v5 = (char *)P;
          }
        }
        else
        {
          *((_DWORD *)Src + 1) |= 1u;
        }
LABEL_19:
        if ( v5 )
          sub_140779A50(v5);
        return;
      }
    }
LABEL_53:
    if ( !Src )
      goto LABEL_58;
    v45 = KeGetCurrentThread();
    --*((_WORD *)v45 + 242);
    ExAcquireResourceSharedLite(&stru_140C45620, 1u);
    v5 = (char *)P;
    if ( *((_QWORD *)Src + 7) )
    {
LABEL_57:
      ExReleaseResourceLite(&stru_140C45620);
      KeLeaveCriticalRegion();
LABEL_58:
      v48 = sub_1406C7E48(a2);
      if ( v48 )
        sub_14094A630(v48);
      goto LABEL_19;
    }
    RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
    v46 = (PVOID *)*((_QWORD *)v5 + 17);
    v47 = (char *)Src + 56;
    if ( *v46 == v5 + 128 )
    {
      *v47 = v5 + 128;
      v47[1] = v46;
      *v46 = v47;
      *((_QWORD *)v5 + 17) = v47;
      goto LABEL_57;
    }
LABEL_60:
    __fastfail(3u);
  }
}
