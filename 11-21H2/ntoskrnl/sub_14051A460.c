/*
 * XREFs of sub_14051A460 @ 0x14051A460
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14051A77C @ 0x14051A77C (sub_14051A77C.c)
 *     sub_14051B4F4 @ 0x14051B4F4 (sub_14051B4F4.c)
 *     sub_14051B7E4 @ 0x14051B7E4 (sub_14051B7E4.c)
 *     sub_140908DD4 @ 0x140908DD4 (sub_140908DD4.c)
 */

__int64 __fastcall sub_14051A460(__int128 **a1)
{
  __int64 result; // rax
  char v2; // si
  __int128 *v4; // rbx
  int v5; // eax
  __int128 *v6; // rdx
  __int64 v7; // rcx
  int v8; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v10; // ecx
  __int64 v11; // rbx
  unsigned int v12; // edx
  int v13; // r9d
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0LL;
  result = 0LL;
  v2 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( !a1 )
    return result;
  v4 = *a1;
  if ( *(_DWORD *)*a1 == 2 )
  {
    v5 = sub_14051B7E4(*a1, &v14);
    v6 = &v14;
    if ( v5 < 0 )
      v6 = v4;
    v4 = v6;
  }
  if ( *(_DWORD *)v4 != 1 )
    goto LABEL_10;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4BE20, 0LL);
  v2 = 1;
  v8 = sub_14051A77C(v4, &v16);
  if ( v8 < 0 )
    goto LABEL_10;
  if ( *(__int64 *)(v16 + 24) <= 0 )
  {
    sub_1403B1B5C(v7, *(_QWORD *)(v16 + 16));
LABEL_10:
    v8 = sub_14051B4F4(a1, qword_140C4BC80);
  }
  sub_140908DD4(a1);
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4BE20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4BE20);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C4BE20 - qword_140C50630 >= 0x8000000000LL )
      v10 = -1;
    else
      v10 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    _disable();
    v11 = (__int64)CurrentThread + 1696;
    v12 = 0;
    while ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C4BE20 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v11 + 18)
         || (*(_DWORD *)v11 & 1) != 0
         || *(_DWORD *)(v11 + 8) != v10 )
    {
      ++v12;
      v11 += 96LL;
      if ( v12 >= 6 )
        goto LABEL_23;
    }
    *(_BYTE *)(v11 + 18) = 0;
    if ( !v11 )
    {
LABEL_23:
      if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C4BE20, v10, 0LL);
      _enable();
      return (unsigned int)v8;
    }
    if ( *(__int64 *)v11 < 0 )
    {
      *(_BYTE *)v11 |= 2u;
      _enable();
      sub_14034EE30(v11);
      _disable();
    }
    v13 = *(_DWORD *)(v11 + 88);
    *(_DWORD *)(v11 + 88) = 0;
    *(_BYTE *)(v11 + 17) = 0;
    *(_QWORD *)v11 = 0LL;
    *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v11 + 16);
    _enable();
    if ( v13 )
      sub_14022B568((ULONG_PTR)CurrentThread, (__int64)&qword_140C4BE20, v13);
  }
  return (unsigned int)v8;
}
