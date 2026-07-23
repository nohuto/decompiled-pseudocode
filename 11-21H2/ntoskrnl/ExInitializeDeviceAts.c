/*
 * XREFs of ExInitializeDeviceAts @ 0x14063E8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14063EF78 @ 0x14063EF78 (sub_14063EF78.c)
 *     IoQueryInterface @ 0x140846710 (IoQueryInterface.c)
 */

__int64 __fastcall ExInitializeDeviceAts(ULONG_PTR BugCheckParameter1, char a2)
{
  char v4; // r13
  int Interface; // r14d
  unsigned __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rdi
  unsigned int v10; // eax
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v15; // rax
  __int64 *v16; // rcx
  struct _KTHREAD *v17; // rdi
  __int64 v18; // rbx
  unsigned int v19; // ecx
  int v20; // r9d
  __int64 v21; // rdx
  _OWORD v22[3]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v23[18]; // [rsp+70h] [rbp-39h] BYREF
  __int64 *v24; // [rsp+120h] [rbp+77h] BYREF

  memset(v22, 0, sizeof(v22));
  memset(v23, 0, 0x58uLL);
  v24 = 0LL;
  v4 = 0;
  if ( !BugCheckParameter1 )
    return 3221225485LL;
  Interface = IoQueryInterface(BugCheckParameter1, 0, (int)&qword_14000FEC8, 88, 1, BugCheckParameter1, v23);
  if ( Interface >= 0 )
  {
    Interface = IoQueryInterface(BugCheckParameter1, 0, (int)&qword_14003A3E0, 48, 1, BugCheckParameter1, v22);
    if ( Interface < 0 )
    {
LABEL_43:
      sub_14042A5E0(v23[1], v7);
      if ( v4 )
        sub_14042A5E0(*((_QWORD *)&v22[0] + 1), v21);
      return (unsigned int)Interface;
    }
    v4 = 1;
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    _disable();
    v10 = *((unsigned __int8 *)CurrentThread + 792);
    v11 = -1;
    if ( *((_BYTE *)CurrentThread + 792)
      || (v10 = sub_14029F6A8((__int64)&qword_140C11530, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v13, v10);
      *((_BYTE *)CurrentThread + 792) = v10 & ~(1 << v13);
      _enable();
      v12 = 96 * v13;
      v9 = (__int64)CurrentThread + v12 + 1696;
      if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 >= 0x8000000000LL )
        v14 = -1;
      else
        v14 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      *(_DWORD *)(v9 + 8) = v14;
      *(_QWORD *)v9 = (unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C11530, 0LL) )
      sub_14029F120(&qword_140C11530, v9, (__int64)&qword_140C11530);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    v15 = (__int64 *)qword_140C11540;
    if ( (__int64 *)qword_140C11540 != &qword_140C11540 )
    {
      do
      {
        v12 = (__int64)v15;
        v16 = v15;
        v24 = v15;
        if ( v15[3] == BugCheckParameter1 )
          break;
        v15 = (__int64 *)*v15;
      }
      while ( v15 != &qword_140C11540 );
      if ( v16[3] == BugCheckParameter1 )
      {
        if ( v12 )
        {
          if ( *((_DWORD *)v16 + 9) )
            KeBugCheckEx(0x1E9u, BugCheckParameter1, 0LL, 0LL, 0LL);
          ++*((_DWORD *)v16 + 8);
LABEL_21:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11530, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C11530);
          v17 = KeGetCurrentThread();
          if ( (unsigned __int64)&qword_140C11530 - qword_140C50630 < 0x8000000000LL )
            v11 = sub_140287F30(*((_QWORD *)v17 + 23));
          _disable();
          v18 = (__int64)v17 + 1696;
          v19 = 0;
          v7 = (unsigned __int64)&qword_140C11530 & 0x7FFFFFFFFFFFFFFCLL;
          while ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) != v7
               || !*(_BYTE *)(v18 + 18)
               || (*(_DWORD *)v18 & 1) != 0
               || *(_DWORD *)(v18 + 8) != v11 )
          {
            ++v19;
            v18 += 96LL;
            if ( v19 >= 6 )
              goto LABEL_31;
          }
          *(_BYTE *)(v18 + 18) = 0;
          if ( !v18 )
          {
LABEL_31:
            if ( (*((_DWORD *)v17 + 30) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v17, (ULONG_PTR)&qword_140C11530, v11, 0LL);
            _enable();
            goto LABEL_43;
          }
          if ( *(__int64 *)v18 < 0 )
          {
            *(_BYTE *)v18 |= 2u;
            _enable();
            sub_14034EE30(v18);
            _disable();
          }
          v20 = *(_DWORD *)(v18 + 88);
          *(_DWORD *)(v18 + 88) = 0;
          *(_BYTE *)(v18 + 17) = 0;
          *(_QWORD *)v18 = 0LL;
          *((_BYTE *)v17 + 792) |= 1 << *(_BYTE *)(v18 + 16);
          _enable();
          if ( v20 )
            sub_14022B568((ULONG_PTR)v17, (__int64)&qword_140C11530, v20);
          goto LABEL_43;
        }
      }
      else
      {
        v24 = 0LL;
      }
    }
    LOBYTE(v12) = a2;
    Interface = sub_14063EF78(BugCheckParameter1, v12, (unsigned int)v23, (unsigned int)v22, (__int64)&v24);
    goto LABEL_21;
  }
  return (unsigned int)Interface;
}
