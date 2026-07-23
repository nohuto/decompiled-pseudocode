/*
 * XREFs of sub_1406666B4 @ 0x1406666B4
 * Callers:
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140662CD4 @ 0x140662CD4 (sub_140662CD4.c)
 *     sub_140666BAC @ 0x140666BAC (sub_140666BAC.c)
 *     sub_1407A49B4 @ 0x1407A49B4 (sub_1407A49B4.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7B98 @ 0x1407A7B98 (sub_1407A7B98.c)
 *     sub_1407A7C84 @ 0x1407A7C84 (sub_1407A7C84.c)
 *     sub_1407A7E70 @ 0x1407A7E70 (sub_1407A7E70.c)
 *     sub_1407A7FBC @ 0x1407A7FBC (sub_1407A7FBC.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 *     sub_1407AB750 @ 0x1407AB750 (sub_1407AB750.c)
 *     sub_140966950 @ 0x140966950 (sub_140966950.c)
 *     sub_140967BBC @ 0x140967BBC (sub_140967BBC.c)
 *     sub_140967D90 @ 0x140967D90 (sub_140967D90.c)
 */

__int64 __fastcall sub_1406666B4(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 result; // rax
  int v8; // ecx
  _DWORD *v9; // r14
  int v10; // edi
  signed __int32 v11; // eax
  _DWORD *v12; // rcx
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // rax
  size_t v15; // rdx
  int v16; // r14d
  signed __int64 *v17; // r14
  __int64 v18; // r13
  _QWORD *v19; // rax
  signed __int64 *v20; // r14
  __int64 v21; // rax
  struct _KTHREAD *v22; // rcx
  ULONG_PTR v23; // rdi
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  unsigned __int64 v30; // rax
  size_t v31; // rdx
  __int64 v32; // rcx
  int v33; // [rsp+20h] [rbp-98h]
  _DWORD *v34; // [rsp+28h] [rbp-90h] BYREF
  _QWORD *v35; // [rsp+30h] [rbp-88h]
  _DWORD *v36; // [rsp+38h] [rbp-80h]
  _QWORD *v37; // [rsp+40h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-70h]
  __int128 v39; // [rsp+50h] [rbp-68h] BYREF
  __int128 v40; // [rsp+60h] [rbp-58h]
  __int64 v41; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  char v43; // [rsp+D8h] [rbp+20h]

  v43 = a4;
  v5 = a2;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v34 = 0LL;
  if ( (_BYTE)a4 )
  {
    sub_140666BAC(a3, &v39, 0LL);
  }
  else
  {
    v39 = *a3;
    v40 = a3[1];
    v41 = *((_QWORD *)a3 + 4);
  }
  if ( DWORD2(v40) )
    return sub_1407A9ED0(v5, a3, 0LL, a4);
  v8 = *(_DWORD *)(a1 + 416);
  if ( (v8 & 0x2000) == 0 || (v8 & 6) != 4 || (v8 & 0x38) != 0 || WORD3(v39) )
    return sub_1407A9ED0(v5, a3, 0LL, a4);
  if ( (unsigned __int64)WORD1(v39) > *(_QWORD *)(a1 + 272) )
    return 3221225519LL;
  LOBYTE(a2) = 1;
  result = sub_1407A7E70(&v39, a2);
  if ( (int)result >= 0 )
  {
    v9 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
    v34 = v9;
    if ( v9 )
    {
      sub_1407A6A34((ULONG_PTR)v9);
      --*((_WORD *)v9 - 15);
      v10 = v9[66] & 0x7FFFFFFF;
      memset(v9, 0, 0x118uLL);
      v9[66] = v10;
      do
        v11 = _InterlockedIncrement(&dword_140D31300);
      while ( !v11 );
      v12 = v34;
      v34[68] = v11;
      if ( dword_140C2A158 )
        sub_140966950(v12);
LABEL_17:
      CurrentThread = KeGetCurrentThread();
      v13 = (ULONG_PTR)v34;
      *(_OWORD *)(v34 + 62) = *(_OWORD *)((char *)CurrentThread + 1224);
      *(_DWORD *)(v13 + 240) = v39;
      *(_WORD *)(v13 + 244) = 8193;
      if ( v43 )
      {
        v14 = sub_1407A7C84(v13, (__int16)v39);
        if ( v15 > v14 )
        {
          v16 = sub_1407A7B98(v13, v15, (char *)a3 + 40);
          v33 = v16;
        }
        else
        {
          memmove((void *)(v13 + 280), (char *)a3 + 40, v15);
          v16 = 0;
          v33 = 0;
        }
      }
      else
      {
        v30 = sub_1407A7C84(v13, (__int16)v39);
        if ( v31 <= v30 )
        {
          memmove((void *)(v13 + 280), (char *)a3 + 40, v31);
          v33 = 0;
          goto LABEL_22;
        }
        v16 = sub_1407A7B98(v32, v31, (char *)a3 + 40);
        v33 = v16;
      }
      if ( v16 < 0 )
      {
LABEL_61:
        if ( v13 )
          sub_1407A7628(v13);
        return (unsigned int)v16;
      }
LABEL_22:
      v37 = *(_QWORD **)(a1 + 16);
      v17 = v37 - 2;
      BugCheckParameter2 = (ULONG_PTR)(v37 - 2);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v37 - 2), 0LL);
      v18 = *(_QWORD *)(a1 + 424);
      v19 = *(_QWORD **)(a1 + 432);
      v35 = v19;
      if ( v18 && v19 )
      {
        v20 = v19 + 44;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v19 + 44), 0LL);
        if ( (v35[52] & 0x20) != 0 )
          goto LABEL_56;
        *(_QWORD *)(v13 + 120) = v35[7];
        if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v20);
        sub_1402AFC00((ULONG_PTR)v20);
        v20 = (signed __int64 *)(v18 + 352);
        ExAcquirePushLockSharedEx(v18 + 352, 0LL);
        if ( (*(_DWORD *)(v18 + 416) & 0x20) != 0 )
        {
LABEL_56:
          v33 = -1073741769;
        }
        else
        {
          v21 = (__int64)v34;
          v36 = v34 - 12;
          *((_WORD *)v36 + 9) += 3;
          v22 = CurrentThread;
          _InterlockedExchange64((volatile __int64 *)CurrentThread + 175, v21);
          v23 = (ULONG_PTR)v34;
          *((_QWORD *)v34 + 4) = v22;
          sub_1407AB750(v23, a1);
          v24 = v37;
          *(_QWORD *)(v23 + 184) = v37;
          *(_QWORD *)(v23 + 192) = *v24;
          *(_QWORD *)(v5 + 8) = v23;
          if ( byte_140D01161 )
          {
            sub_140967BBC(v23);
            if ( byte_140D01161 )
              sub_140967D90(v23);
          }
          v25 = 0LL;
          v35 = 0LL;
          if ( *(_QWORD *)(v18 + 232) != v18 + 232 )
          {
            ExAcquirePushLockExclusiveEx(v18 + 224, 0LL);
            v26 = *(_QWORD **)(v18 + 232);
            v37 = v26;
            if ( v26 != (_QWORD *)(v18 + 232) )
            {
              v35 = v26 - 177;
              sub_1407A7FBC(v18, v23);
              ++*((_WORD *)v36 + 9);
              *(_DWORD *)(v23 + 40) |= 0x2000u;
              v35[176] = v23;
              v27 = v37;
              v28 = *v37;
              v29 = (_QWORD *)v37[1];
              if ( *(_QWORD **)(*v37 + 8LL) != v37 || (_QWORD *)*v29 != v37 )
                __fastfail(3u);
              *v29 = v28;
              *(_QWORD *)(v28 + 8) = v29;
              *v27 = 0LL;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v18 + 224);
            sub_1402AFC00(v18 + 224);
            v23 = (ULONG_PTR)v34;
            v25 = v35;
          }
          *(_QWORD *)(v5 + 32) = 0LL;
          *(_QWORD *)(v5 + 24) = 0LL;
          *(_QWORD *)(v5 + 40) = 0LL;
          if ( v25 )
          {
            *(_QWORD *)(v5 + 24) = v25;
          }
          else
          {
            sub_140662CD4(v18, v23);
            if ( (*(_DWORD *)(v18 + 416) & 0x200) != 0 )
            {
              ObfReferenceObject((PVOID)v18);
              *(_QWORD *)(v5 + 32) = v18;
              *(_BYTE *)(v5 + 58) = 0;
            }
          }
          sub_1407A7628(v23);
        }
        if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v20);
        sub_1402AFC00((ULONG_PTR)v20);
        v17 = (signed __int64 *)BugCheckParameter2;
      }
      else
      {
        v33 = -1073741769;
      }
      if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v17);
      sub_1402AFC00((ULONG_PTR)v17);
      v13 = (ULONG_PTR)v34;
      v16 = v33;
      if ( v33 >= 0 )
        return (unsigned int)v16;
      goto LABEL_61;
    }
    result = sub_1407A49B4(&v34, 0LL, 0LL);
    if ( (int)result >= 0 )
      goto LABEL_17;
  }
  return result;
}
