/*
 * XREFs of FsRtlAddToTunnelCacheEx @ 0x140694B30
 * Callers:
 *     FsRtlAddToTunnelCache @ 0x14092E130 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_14021D7F0 @ 0x14021D7F0 (sub_14021D7F0.c)
 *     sub_14021D85C @ 0x14021D85C (sub_14021D85C.c)
 *     sub_14021D8B4 @ 0x14021D8B4 (sub_14021D8B4.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140694FD0 @ 0x140694FD0 (sub_140694FD0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlAddToTunnelCacheEx(
        PKGUARDED_MUTEX Mutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        char a5,
        size_t Size,
        void *Src)
{
  __int64 v7; // rbp
  int v9; // r14d
  const UNICODE_STRING *v10; // r15
  const UNICODE_STRING *v11; // r12
  PKGUARDED_MUTEX v12; // rsi
  __int64 result; // rax
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // edi
  PSLIST_ENTRY v17; // rbx
  PKGUARDED_MUTEX v18; // r13
  __int64 v19; // r14
  struct _FAST_MUTEX *v20; // rdi
  LONG v21; // eax
  __int64 v22; // rax
  _SLIST_ENTRY *v23; // rdx
  _SLIST_ENTRY *v24; // rcx
  unsigned __int16 Length; // ax
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // cx
  _SLIST_ENTRY *v28; // rcx
  _SLIST_ENTRY **v29; // rax
  PSLIST_ENTRY *v30; // rcx
  PSLIST_ENTRY *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // r8
  char v35; // [rsp+20h] [rbp-68h]
  char v36; // [rsp+24h] [rbp-64h]
  __int64 *v37[12]; // [rsp+28h] [rbp-60h] BYREF
  int v42; // [rsp+B0h] [rbp+28h]

  v7 = 0LL;
  v35 = 0;
  v9 = a5 & 2;
  v10 = a4;
  v11 = a3;
  v42 = v9;
  v12 = Mutex;
  result = a5 & 1;
  v36 = result;
  if ( !*(_DWORD *)((char *)&NlsMbCodePageTag + 1) )
    return result;
  v14 = Size + a3->Length;
  v15 = a4->Length + 112;
  v37[1] = (__int64 *)v37;
  v16 = v15 + v14;
  v37[0] = (__int64 *)v37;
  if ( v16 > 0xB0 || (v17 = sub_140202234((__int64)&stru_140CF88C0)) == 0LL )
  {
    result = ExAllocatePool2(258LL, v16, 1349416276LL);
    v17 = (PSLIST_ENTRY)result;
    if ( !result )
      return result;
    v35 = 1;
  }
  if ( !v9 )
    v11 = v10;
  ExAcquireFastMutex(v12);
  v18 = v12 + 1;
  v19 = *(_QWORD *)&v12[1].Count;
  v20 = v12 + 1;
  if ( v19 )
  {
    do
    {
      v7 = v19;
      v21 = sub_14021D7F0(v19, a2, v11, v36);
      if ( v21 > 0 )
      {
        v22 = 8LL;
      }
      else
      {
        if ( v21 >= 0 )
          break;
        v22 = 16LL;
      }
      v20 = (struct _FAST_MUTEX *)(v19 + v22);
      v19 = *(_QWORD *)(v19 + v22);
    }
    while ( v19 );
    v12 = Mutex;
    v10 = a4;
    v18 = Mutex + 1;
  }
  v17->Next = v17;
  *((_QWORD *)&v17->Next + 1) = 0LL;
  v17[1].Next = 0LL;
  if ( v7 )
  {
    if ( *(_QWORD *)&v20->Count )
    {
      v17[1].Next = *(_SLIST_ENTRY **)(*(_QWORD *)&v20->Count + 16LL);
      *((_QWORD *)&v17->Next + 1) = *(_QWORD *)(*(_QWORD *)&v20->Count + 8LL);
      v29 = *(_SLIST_ENTRY ***)&v20->Count;
      v30 = *(PSLIST_ENTRY **)(*(_QWORD *)&v20->Count + 16LL);
      if ( v30 )
      {
        *v30 = v17;
        v29 = *(_SLIST_ENTRY ***)&v20->Count;
      }
      v31 = (PSLIST_ENTRY *)v29[1];
      if ( v31 )
      {
        *v31 = v17;
        v29 = *(_SLIST_ENTRY ***)&v20->Count;
      }
      if ( *v29 == (_SLIST_ENTRY *)v29 )
      {
        *(_QWORD *)&v18->Count = v17;
      }
      else
      {
        v17->Next = *v29;
        v32 = **(_QWORD **)&v20->Count;
        if ( *(_QWORD *)(v32 + 8) == *(_QWORD *)&v20->Count )
          *(_QWORD *)(v32 + 8) = v17;
        else
          *(_QWORD *)(v32 + 16) = v17;
      }
      v33 = *(_QWORD *)(v7 + 24);
      if ( *(_QWORD *)(v33 + 8) != v7 + 24 || (v34 = *(_QWORD **)(v7 + 32), *v34 != v7 + 24) )
LABEL_39:
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      sub_14021D8B4(v7, (__int64 *)v37, (__int64)v34);
      --LOWORD(v12[1].Event.Header.Lock);
    }
    else
    {
      v17->Next = (_SLIST_ENTRY *)v7;
      *(_QWORD *)&v20->Count = v17;
    }
  }
  else
  {
    *(_QWORD *)&v18->Count = v17;
  }
  v23 = (PSLIST_ENTRY)((char *)v17 + 24);
  *((_QWORD *)&v17[2].Next + 1) = MEMORY[0xFFFFF78000000014];
  v24 = *(_SLIST_ENTRY **)&v12[1].Contention;
  if ( (PVOID *)v24->Next != &v12[1].Owner )
    goto LABEL_39;
  v23->Next = (_SLIST_ENTRY *)&v12[1].Owner;
  v17[2].Next = v24;
  v24->Next = v23;
  *(_QWORD *)&v12[1].Contention = v23;
  ++LOWORD(v12[1].Event.Header.Lock);
  v17[3].Next = (_SLIST_ENTRY *)a2;
  *((_DWORD *)&v17[3].Next + 2) = v42 != 0 ? 2 : 0;
  *((_QWORD *)&v17[5].Next + 1) = v17 + 7;
  *((_QWORD *)&v17[4].Next + 1) = (char *)v17 + a3->Length + 112;
  Length = a3->Length;
  WORD1(v17[5].Next) = a3->Length;
  LOWORD(v17[5].Next) = Length;
  v26 = v10->Length;
  WORD1(v17[4].Next) = v10->Length;
  LOWORD(v17[4].Next) = v26;
  if ( a3->Length )
    memmove(&v17[7], a3->Buffer, a3->Length);
  v27 = v10->Length;
  if ( v10->Length )
  {
    memmove(*((void **)&v17[4].Next + 1), v10->Buffer, v10->Length);
    v27 = v10->Length;
  }
  v28 = (PSLIST_ENTRY)((char *)v17 + a3->Length + v27 + 112);
  v17[6].Next = v28;
  *((_DWORD *)&v17[6].Next + 2) = Size;
  memmove(v28, Src, (unsigned int)Size);
  if ( v35 )
    *((_DWORD *)&v17[3].Next + 2) |= 1u;
  sub_140694FD0(v12, v37);
  KeReleaseGuardedMutex(v12);
  return (__int64)sub_14021D85C(v37);
}
