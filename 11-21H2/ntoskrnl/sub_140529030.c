/*
 * XREFs of sub_140529030 @ 0x140529030
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140529030(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // ecx
  __int64 v9; // rbx
  unsigned int v10; // edx
  int v11; // r9d
  __int64 v12; // rcx

  v2 = *(_QWORD *)(a2 + 48);
  v3 = 0;
  if ( v2 && *(_QWORD *)(v2 + 16) == a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4A0E0, 0LL);
    v5 = *(_QWORD *)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v6 = *(_QWORD **)(v2 + 8), *v6 != v2) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4A0E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4A0E0);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C4A0E0 - qword_140C50630 >= 0x8000000000LL )
      v8 = -1;
    else
      v8 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    _disable();
    v9 = (__int64)CurrentThread + 1696;
    v10 = 0;
    while ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C4A0E0 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v9 + 18)
         || (*(_DWORD *)v9 & 1) != 0
         || *(_DWORD *)(v9 + 8) != v8 )
    {
      ++v10;
      v9 += 96LL;
      if ( v10 >= 6 )
        goto LABEL_16;
    }
    *(_BYTE *)(v9 + 18) = 0;
    if ( !v9 )
    {
LABEL_16:
      if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C4A0E0, v8, 0LL);
      _enable();
      goto LABEL_24;
    }
    if ( *(__int64 *)v9 < 0 )
    {
      *(_BYTE *)v9 |= 2u;
      _enable();
      sub_14034EE30(v9);
      _disable();
    }
    v11 = *(_DWORD *)(v9 + 88);
    *(_DWORD *)(v9 + 88) = 0;
    *(_BYTE *)(v9 + 17) = 0;
    *(_QWORD *)v9 = 0LL;
    *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v9 + 16);
    _enable();
    if ( v11 )
      sub_14022B568((ULONG_PTR)CurrentThread, (__int64)&qword_140C4A0E0, v11);
LABEL_24:
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x446C6148u);
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    sub_1403B1B5C(v12, v2);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
