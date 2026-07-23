/*
 * XREFs of sub_1406D7D74 @ 0x1406D7D74
 * Callers:
 *     sub_1406D7CC4 @ 0x1406D7CC4 (sub_1406D7CC4.c)
 *     sub_1406D7D20 @ 0x1406D7D20 (sub_1406D7D20.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 */

__int64 sub_1406D7D74()
{
  _QWORD *v0; // r13
  volatile signed __int64 *v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _EX_RUNDOWN_REF *v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // r14
  struct _EX_RUNDOWN_REF v6; // rcx
  struct _EX_RUNDOWN_REF **Count; // rax
  volatile signed __int64 *v8; // r12
  unsigned int Ptr_high; // r15d
  __int64 v10; // rsi
  ULONG_PTR v11; // rsi
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v19; // [rsp+20h] [rbp-68h]
  ULONG_PTR v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+48h] [rbp-40h] BYREF

  v21 = 0LL;
  v0 = (_QWORD *)*((_QWORD *)PsInitialSystemProcess + 269);
  v1 = v0 + 13;
  v2 = sub_140347C10((__int64)(v0 + 13), 0LL);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v0 + 26, 0LL) )
    sub_14029F120(v0 + 13, v2, (__int64)(v0 + 13));
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  while ( 1 )
  {
    v4 = (struct _EX_RUNDOWN_REF *)v0[14];
    if ( v4 == (struct _EX_RUNDOWN_REF *)(v0 + 14) )
      break;
    v5 = v4 - 13;
    sub_140347810(v4 - 12);
    LODWORD(v4[2].Count) = 2;
    v6.Count = v4->Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v4->Count + 8) != v4
      || (Count = (struct _EX_RUNDOWN_REF **)v4[1].Count, *Count != v4) )
    {
      __fastfail(3u);
    }
    *Count = (struct _EX_RUNDOWN_REF *)v6.Count;
    v8 = v0 + 10;
    *(_QWORD *)(v6.Count + 8) = Count;
    Ptr_high = HIDWORD(v5[15].Ptr);
    do
    {
      HIDWORD(v5[15].Ptr) = 0;
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v0 + 13);
      sub_1402AFC00((ULONG_PTR)(v0 + 13));
      v10 = sub_140347C10((__int64)(v0 + 10), 0LL);
      if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
        sub_14029F350(v0 + 10, 0, v10, (__int64)(v0 + 10));
      if ( v10 )
        *(_BYTE *)(v10 + 18) = 1;
      v11 = v5[6].Count;
      if ( v11 )
        v11 &= -(__int64)(sub_140347810((struct _EX_RUNDOWN_REF *)(v11 + 8)) != 0);
      v12 = Ptr_high & 0xFFFFFFFE;
      if ( v11 )
        v12 = Ptr_high;
      if ( (v12 & 1) != 0 )
      {
        v13 = *(_DWORD *)(v11 + 96);
        if ( v13 <= LODWORD(v5[12].Count) )
          v12 &= ~1u;
        else
          LODWORD(v5[12].Count) = v13;
      }
      if ( v12 )
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v0 + 10);
        sub_1402AFC00((ULONG_PTR)(v0 + 10));
        v21 = v5[7].Count ^ 0x41C64E6DA3BC0074LL;
        if ( v11 )
        {
          v14 = *(_QWORD *)(v11 + 64);
          v15 = v12 & 1;
        }
        else
        {
          v15 = v12 & 1;
          v14 = 0LL;
        }
        v20 = v5[11].Count;
        v19 = v14;
        sub_14042A5E0(v5, &v21);
        if ( v15 && !_InterlockedDecrement((volatile signed __int32 *)(v11 + 164)) )
          sub_1407938B0(v11, 8LL, 0LL, 0LL, v19, v20);
      }
      else
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v0 + 10);
        sub_1402AFC00((ULONG_PTR)(v0 + 10));
      }
      if ( v11 )
        sub_1402AD030((struct _EX_RUNDOWN_REF *)(v11 + 8));
      v16 = sub_140347C10((__int64)(v0 + 13), 0LL);
      v17 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        sub_14029F120(v0 + 13, v16, (__int64)(v0 + 13));
      if ( v17 )
        *(_BYTE *)(v17 + 18) = 1;
      Ptr_high = HIDWORD(v5[15].Ptr);
    }
    while ( Ptr_high );
    LODWORD(v5[15].Count) = 0;
    sub_1402AD030(v5 + 1);
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v0 + 13);
  return sub_1402AFC00((ULONG_PTR)(v0 + 13));
}
