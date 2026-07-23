/*
 * XREFs of sub_140218310 @ 0x140218310
 * Callers:
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 * Callees:
 *     sub_1402189A0 @ 0x1402189A0 (sub_1402189A0.c)
 *     sub_14026ED30 @ 0x14026ED30 (sub_14026ED30.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140583EE0 @ 0x140583EE0 (sub_140583EE0.c)
 */

__int64 __fastcall sub_140218310(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  char v4; // al
  int *v6; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v11; // r11
  __int64 v12; // r8
  _QWORD *v13; // rdi
  __int64 v14; // rbp
  char *v15; // r14
  int v16; // esi
  int v17; // r15d
  char v18; // cl
  unsigned __int64 v19; // r12
  int v20; // r10d
  int v21; // ebp
  unsigned __int64 *v22; // rbx
  char *v23; // r15
  unsigned __int64 v24; // rsi
  volatile LONG *v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // r12
  unsigned __int64 v28; // rdx
  char v29; // bp
  __int64 v30; // rax
  unsigned __int8 v31; // bp
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // r8
  __int64 *v35; // r8
  __int64 v36; // rdx
  unsigned __int8 v37; // al
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r12
  __int64 *v41; // rbp
  volatile LONG *v42; // rcx
  __int64 v43; // r8
  unsigned __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 **v48; // rax
  __int64 v49; // r12
  __int64 **v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r8
  int v54; // [rsp+20h] [rbp-A8h]
  int v55; // [rsp+24h] [rbp-A4h]
  __int64 v56; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v57; // [rsp+28h] [rbp-A0h]
  __int64 v58; // [rsp+30h] [rbp-98h]
  __int64 v59; // [rsp+38h] [rbp-90h]
  __int64 v60; // [rsp+40h] [rbp-88h]
  __int64 v61; // [rsp+48h] [rbp-80h]
  unsigned __int64 *v62; // [rsp+50h] [rbp-78h]
  __int64 v63; // [rsp+50h] [rbp-78h]
  int *v64; // [rsp+58h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-68h] BYREF
  int v66; // [rsp+D0h] [rbp+8h]
  __int64 v68; // [rsp+D8h] [rbp+10h]
  __int64 v70; // [rsp+E8h] [rbp+20h] BYREF

  v70 = a4;
  v4 = *(_BYTE *)(a1 + 184) & 7;
  v56 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v6 = &dword_140C53D80;
  v66 = 0;
  if ( v4 != 2 )
    v6 = 0LL;
  v64 = v6;
  result = 0LL;
  v61 = 0LL;
  v9 = 0LL;
  v58 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( a4 )
  {
    v62 = (unsigned __int64 *)(a2 + 24);
    v13 = (_QWORD *)(a2 + 24);
    v14 = a4;
    v15 = &a3[-a2];
    v16 = 0;
    v17 = 0;
    do
    {
      v18 = *((_BYTE *)v13 + (_QWORD)v15 - 23);
      if ( (v18 & 1) != 0 )
      {
        v19 = *v13;
        v56 = ++v11;
        if ( *v13 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v20 = 2;
          v66 = 2;
          v61 = ((v19 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        }
        else
        {
          v20 = 1;
          v66 = 1;
        }
        if ( (v18 & 2) != 0 )
        {
          v58 = ++v9;
          if ( v20 == 2 )
            v59 = ++v12;
        }
        if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
        {
          if ( qword_140D068F0
            && (v19 < qword_140D06AD8 && v19 >= (unsigned __int64)qword_140D068F0
             || v19 < qword_140D06AF0 && v19 >= (unsigned __int64)qword_140D06988) )
          {
            ++v16;
          }
          else if ( (unsigned int)sub_14027B080(v19, v9, v12, 0xFFFFF6FB40000000uLL) == 12 )
          {
            v46 = sub_1402189A0(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
            v9 = v58;
            v12 = v59;
            v11 = v56;
            if ( v46 )
              ++v17;
          }
          else
          {
            v9 = v58;
            v12 = v59;
            v11 = v56;
          }
        }
      }
      ++v13;
      --v14;
    }
    while ( v14 );
    v21 = v66;
    v22 = v62;
    v55 = v17;
    v23 = a3;
    v54 = v16;
    v24 = v70;
    if ( v66 )
    {
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        v25 = (volatile LONG *)&unk_140C53D40;
      else
        v25 = (volatile LONG *)(a1 + 256);
      ExAcquireSpinLockSharedAtDpcLevel(v25);
      if ( v58 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), -v58);
        if ( v59 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), -v59);
      }
      if ( v54 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4F4F8, -v54);
      if ( v55 )
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4F4F8 + 1, -v55);
      v57 = -v56;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 144), v57);
      v26 = 0LL;
      v27 = a2 - (_QWORD)a3;
      v68 = a2 - (_QWORD)a3;
      while ( (v23[v27 + 1 + (_QWORD)v15] & 1) == 0 )
      {
LABEL_39:
        ++v26;
        v23 += 8;
        if ( v26 >= v24 )
        {
          if ( v64 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 1, v57);
            if ( v60 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 2, -v60);
          }
          if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
            v42 = (volatile LONG *)&unk_140C53D40;
          else
            v42 = (volatile LONG *)(a1 + 256);
          ExReleaseSpinLockSharedFromDpcLevel(v42);
          do
          {
            if ( (v15[(_QWORD)v22 - 23] & 1) != 0 )
            {
              v44 = *v22;
              if ( v21 == 2 )
              {
                v45 = *(unsigned __int8 *)(((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                if ( (v45 & 1) != 0 )
                {
                  LOBYTE(v43) = 10;
                  sub_14026ED30(v45, *v22, v43);
                }
              }
              if ( (DWORD1(xmmword_140D06900) & 0x8000000) != 0 )
                sub_140583EE0(v44, *(_BYTE *)(a1 + 184) & 7);
            }
            ++v22;
            --v24;
          }
          while ( v24 );
          return v61;
        }
      }
      v28 = *(_QWORD *)&v23[v27 + 24];
      if ( v21 == 1 )
      {
        if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
          goto LABEL_39;
        v29 = *v23;
      }
      else
      {
        _InterlockedDecrement64((volatile signed __int64 *)(a1 + 128));
        v29 = *v23;
        v30 = v60 + 1;
        if ( !v64 )
          v30 = v60;
        v60 = v30;
        if ( (v29 & 0xF) == 8 )
          goto LABEL_38;
        v60 = v30;
      }
      v31 = v29 & 0xF;
      if ( v28 < 0xFFFFF68000000000uLL || v28 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v32 = (v28 >> 18) & 0x3FFFFFF8;
        v33 = *(_QWORD *)(v32 - 0x904C0000000LL);
        v34 = v32 - 0x904C0000000LL;
        if ( (unsigned __int64)(v32 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
          && v34 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v33 & 1) != 0
          && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
        {
          v51 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v51 )
          {
            v52 = *(_QWORD *)(v51 + 8 * ((v34 >> 3) & 0x1FF));
            v53 = v33 | 0x20;
            if ( (v52 & 0x20) == 0 )
              v53 = *(_QWORD *)(v32 - 0x904C0000000LL);
            v33 = v53;
            if ( (v52 & 0x42) != 0 )
              v33 = v53 | 0x42;
          }
        }
        v70 = v33;
        v35 = (__int64 *)(48 * (((unsigned __int64)sub_140317A10(&v70) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        v36 = *v35;
        v37 = ((unsigned __int64)*v35 >> 14) & 7;
        if ( (((unsigned __int64)*v35 >> 4) & 0x3FF) != 0 )
        {
          if ( v31 == v37 )
          {
            *v35 = v36 ^ ((unsigned __int16)v36 ^ (unsigned __int16)(16 * ((((unsigned __int64)*v35 >> 4) & 0x3FF) - 1))) & 0x3FF0;
          }
          else if ( v31 > v37 )
          {
            *v35 = v36 ^ ((unsigned int)v36 ^ (v31 << 14)) & 0x1C000 | 0x3FF0;
          }
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(8LL * v31 + a1 + 40), 0xFFFFFFFFFFFFFFFFuLL);
      if ( v31 == 7 )
      {
        v38 = *(_QWORD *)(a1 + 96);
        v39 = *(unsigned __int16 *)(a1 + 174);
        memset(&LockHandle, 0, sizeof(LockHandle));
        v40 = *(_QWORD *)(qword_140C51F48 + 8 * v39);
        v63 = *(_QWORD *)(v40 + 16600);
        if ( v38 < *(_QWORD *)(v63 + 56) )
        {
          v41 = (__int64 *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 24) )
          {
            if ( *(__int64 **)(v40 + 16616) != v41 )
            {
              LockHandle.LockQueue.Lock = &qword_140C53340;
              LockHandle.LockQueue.Next = 0LL;
              sub_1403119F0(&LockHandle);
              if ( *(_BYTE *)(v63 + 53) || (v47 = *v41) == 0 )
              {
                *(_BYTE *)(v63 + 54) = 1;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              else
              {
                if ( *(__int64 **)(v47 + 8) != v41
                  || (v48 = *(__int64 ***)(a1 + 32), *v48 != v41)
                  || (*v48 = (__int64 *)v47,
                      v49 = v40 + 16608,
                      *(_QWORD *)(v47 + 8) = v48,
                      v50 = *(__int64 ***)(v49 + 8),
                      *v50 != (__int64 *)v49) )
                {
                  __fastfail(3u);
                }
                *v41 = v49;
                *(_QWORD *)(a1 + 32) = v50;
                *v50 = v41;
                *(_QWORD *)(v49 + 8) = v41;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
            }
          }
        }
        v27 = v68;
      }
LABEL_38:
      v21 = v66;
      goto LABEL_39;
    }
    return v61;
  }
  return result;
}
