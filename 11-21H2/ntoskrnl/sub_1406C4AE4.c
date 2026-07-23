/*
 * XREFs of sub_1406C4AE4 @ 0x1406C4AE4
 * Callers:
 *     sub_1406C4A10 @ 0x1406C4A10 (sub_1406C4A10.c)
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407919CC @ 0x1407919CC (sub_1407919CC.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406C4AE4(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rbp
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v2 = 0;
  v5 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20666E57u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x88uLL);
    *(_DWORD *)v7 = 8915206;
    v7[9] = v7 + 8;
    v7[8] = v7 + 8;
    v7[16] = 0LL;
    v7[12] = v7 + 11;
    v7[11] = v7 + 11;
    v7[1] = a1;
    v7[15] = v7 + 14;
    v7[14] = v7 + 14;
    v8 = sub_140347C10((__int64)&qword_140D3CD70, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140D3CD70, 0LL);
    v10 = v8;
    if ( v9 )
      sub_14029F120(&qword_140D3CD70, v8, (__int64)&qword_140D3CD70);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    v11 = off_140D3B600;
    v12 = v7 + 2;
    if ( *off_140D3B600 != (_UNKNOWN *)&off_140D3B5F8 )
      __fastfail(3u);
    *v12 = &off_140D3B5F8;
    v7[3] = v11;
    *v11 = v12;
    off_140D3B600 = (_UNKNOWN **)(v7 + 2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3CD70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140D3CD70);
    sub_1402AFC00((ULONG_PTR)&qword_140D3CD70);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2152), (signed __int64)v7, 0LL) )
      sub_1407919CC(v7);
  }
  else
  {
    v5 = -1073741670;
  }
  v13 = *(_QWORD *)(a1 + 2152);
  *a2 = v13;
  if ( !v13 )
    return v5;
  return v2;
}
