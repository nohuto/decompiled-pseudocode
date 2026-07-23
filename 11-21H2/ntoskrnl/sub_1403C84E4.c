/*
 * XREFs of sub_1403C84E4 @ 0x1403C84E4
 * Callers:
 *     sub_14083D398 @ 0x14083D398 (sub_14083D398.c)
 *     sub_140B190F0 @ 0x140B190F0 (sub_140B190F0.c)
 * Callees:
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall sub_1403C84E4(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  volatile LONG *v9; // rbx
  KIRQL v10; // al
  unsigned __int8 v11; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  volatile LONG *v16; // rbx
  KIRQL v17; // al
  unsigned __int8 v18; // si
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  bool v26; // zf
  signed __int32 v27; // eax
  __int64 v28; // rdi
  __int64 result; // rax
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rbp
  __int16 v33; // ax
  PVOID *v34; // r8
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  volatile LONG *v39; // rbx
  KIRQL v40; // al
  char *v41; // [rsp+38h] [rbp-90h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-90h]
  _OWORD v43[3]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v44; // [rsp+70h] [rbp-58h]
  unsigned __int64 v45; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v46; // [rsp+D8h] [rbp+10h]
  int v47; // [rsp+E0h] [rbp+18h]
  int v48; // [rsp+E8h] [rbp+20h] BYREF

  v47 = a3;
  v46 = a2;
  v45 = a1;
  v3 = a1;
  v4 = a2;
  memset(v43, 0, sizeof(v43));
  v44 = 0LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v5;
  v7 = (((a1 + 8 * a2 - 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = sub_14026DFC0(1);
  v8 = (__int64)v41;
  v9 = (volatile LONG *)sub_140282AD0((__int64)v41);
  v10 = ExAcquireSpinLockExclusive(v9);
  *((_DWORD *)v9 + 1) = 0;
  v11 = v10;
  if ( v5 <= v7 )
  {
    do
    {
      v13 = 48 * (((unsigned __int64)sub_140317A10(v6) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v48 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v48, v12, v14, v15);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      *(_QWORD *)(v13 + 24) ^= ((*(_QWORD *)(v13 + 24) + 1LL) ^ *(_QWORD *)(v13 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 += 8LL;
    }
    while ( v6 <= v7 );
    v4 = v46;
    v3 = v45;
    v8 = (__int64)v41;
  }
  sub_14030FA80(v8, v11);
  sub_14027E810(v8, 0LL, v3, v4, 1, v43);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v16 = (volatile LONG *)sub_140282AD0(v8);
  v17 = ExAcquireSpinLockExclusive(v16);
  *((_DWORD *)v16 + 1) = 0;
  v18 = v17;
  LOBYTE(v47) = v17;
  if ( v5 <= v7 )
  {
    do
    {
      v20 = 48 * (((unsigned __int64)sub_140317A10(v5) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      LODWORD(v45) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v45, v19, v21, v22);
        while ( *(__int64 *)(v20 + 24) < 0 );
      }
      *(_QWORD *)(v20 + 24) ^= ((*(_QWORD *)(v20 + 24) - 1LL) ^ *(_QWORD *)(v20 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v30 = (__int64)(v5 << 25) >> 16;
        v31 = v30;
        v32 = v30 + 4096;
        if ( v30 >= v30 + 4096 )
        {
LABEL_21:
          if ( v31 == v32 )
          {
            v34 = (PVOID *)PsLoadedModuleList;
            v35 = (__int64)(v30 << 25) >> 16;
            while ( 1 )
            {
              v36 = (unsigned __int64)v34[6];
              v37 = (((unsigned int)dword_140C4F478 + 4095LL) & 0xFFFFFFFFFFFFF000uLL)
                  + v36
                  + (unsigned int)(*((_DWORD *)v34 + 16) - 1);
              if ( (PVOID)v36 != qword_140D068F0 && (PVOID)v36 != qword_140D06988 )
                v37 += (unsigned __int64)(unsigned int)dword_140C4F404 << 12;
              v38 = ((v37 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
              if ( v5 >= ((v36 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL && v5 <= v38 )
                break;
              v34 = (PVOID *)*v34;
              if ( v34 == &PsLoadedModuleList )
              {
                if ( !v34 )
                  break;
                sub_14030FA80(v8, v47);
                sub_14026DAB0(v35, v35 + 0x200000, 12);
                v39 = (volatile LONG *)sub_140282AD0(v8);
                v40 = ExAcquireSpinLockExclusive(v39);
                *((_DWORD *)v39 + 1) = 0;
                v18 = v40;
                LOBYTE(v47) = v40;
                goto LABEL_10;
              }
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v33 = sub_140317A10(v31);
            if ( (v33 & 0xC01) != 0 )
              break;
            if ( (v33 & 0x3E0) == 0 || (v33 & 0x3E0) == 0x300LL )
            {
              v31 += 8LL;
              if ( v31 < v32 )
                continue;
            }
            goto LABEL_21;
          }
        }
        v18 = v47;
      }
LABEL_10:
      v5 += 8LL;
    }
    while ( v5 <= v7 );
    v4 = v46;
  }
  sub_14030FA80(v8, v18);
  ExReleaseResourceLite(&PsLoadedModuleResource);
  sub_1402AC800((__int64)CurrentThread);
  CurrentPrcb = KeGetCurrentPrcb();
  v24 = v4;
  v25 = *((int *)CurrentPrcb + 8615);
  if ( (_DWORD)v25 != -1 )
  {
    if ( v4 + v25 <= 0x100 )
    {
      do
      {
        if ( v4 >= 0x80000 )
          break;
        v27 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v4 + v25, v25);
        v26 = (_DWORD)v25 == v27;
        LODWORD(v25) = v27;
        if ( v26 )
          goto LABEL_16;
      }
      while ( v27 != -1 && v4 + v27 <= 0x100 );
    }
    if ( (int)v25 > 192
      && (_DWORD)v25 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v25) )
    {
      v24 = v4 + (int)v25 - 192;
    }
  }
  if ( v24 )
    _InterlockedExchangeAdd64(&qword_140C591C0, v24);
LABEL_16:
  v28 = v4 - *((_QWORD *)&v43[0] + 1);
  sub_14028CE10((__int64)&StartContext, v28);
  result = qword_140C53528 - v28;
  qword_140C53528 -= v28;
  return result;
}
