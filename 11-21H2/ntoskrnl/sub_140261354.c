/*
 * XREFs of sub_140261354 @ 0x140261354
 * Callers:
 *     sub_1406ED528 @ 0x1406ED528 (sub_1406ED528.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_1402376C4 @ 0x1402376C4 (sub_1402376C4.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403B1A00 @ 0x1403B1A00 (sub_1403B1A00.c)
 *     sub_1403D7250 @ 0x1403D7250 (sub_1403D7250.c)
 *     sub_1403D72C8 @ 0x1403D72C8 (sub_1403D72C8.c)
 *     sub_1403D735C @ 0x1403D735C (sub_1403D735C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F71B0 @ 0x1405F71B0 (sub_1405F71B0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_14084A7D0 @ 0x14084A7D0 (sub_14084A7D0.c)
 *     sub_14084BD8C @ 0x14084BD8C (sub_14084BD8C.c)
 *     sub_140851D88 @ 0x140851D88 (sub_140851D88.c)
 *     sub_140861560 @ 0x140861560 (sub_140861560.c)
 */

__int64 __fastcall sub_140261354(int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  NTSTATUS v8; // edi
  struct _KTHREAD *v9; // rsi
  unsigned int v10; // ecx
  char *v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  int v14; // r9d
  unsigned int v16; // esi
  HANDLE Handle; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v18; // [rsp+58h] [rbp-70h]
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-60h] BYREF
  int v21; // [rsp+98h] [rbp-30h]
  int v22; // [rsp+9Ch] [rbp-2Ch]
  int v23; // [rsp+A0h] [rbp-28h]

  v23 = 1048596;
  memset(&ApcState, 0, sizeof(ApcState));
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D321A0, 0LL);
  if ( dword_140D32188 )
  {
    if ( dword_140D32188 != a2 )
    {
      v8 = -1073741217;
      goto LABEL_12;
    }
  }
  else
  {
    dword_140D32188 = a2;
  }
  if ( (dword_140D32180 & 8) == 0 )
  {
    v8 = sub_140861560(&qword_140D32430);
    if ( v8 < 0 )
      goto LABEL_12;
    dword_140D32180 |= 8u;
  }
  v5 = ::Handle;
  if ( !::Handle )
  {
    if ( !(unsigned int)sub_14084BD8C() )
    {
      v8 = -1073741637;
      goto LABEL_12;
    }
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    v8 = sub_140831810(PsInitialSystemProcess, 0LL, 0, 0, 0LL, 0LL, (__int64)&Handle);
    KeUnstackDetachProcess(&ApcState);
    if ( v8 < 0 )
      goto LABEL_12;
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 0, 0LL, 0, &Object, 0LL);
    if ( v8 < 0 )
    {
      ZwClose(Handle);
      goto LABEL_12;
    }
    v5 = Handle;
    ::Handle = Handle;
    qword_140D32198 = Object;
  }
  v6 = (unsigned int)dword_140D32180;
  if ( (dword_140D32180 & 2) == 0 )
  {
    v16 = dword_140D32188;
    qword_140D32140 = (__int64)v5;
    v8 = sub_1403D72C8(&unk_140D31A00);
    if ( v8 < 0 || (dword_140D32130 & 0x20) != 0 && (v8 = sub_1403D7250(&unk_140D31EF0, &unk_140D31A00, v16), v8 < 0) )
    {
      sub_1405F71B0(&unk_140D31A00);
      ObfDereferenceObject(qword_140D32198);
      ZwClose(::Handle);
      qword_140D32198 = 0LL;
      ::Handle = 0LL;
      goto LABEL_12;
    }
    v6 = dword_140D32180 | 2u;
    dword_140D32180 |= 2u;
  }
  if ( (v6 & 0x10) != 0
    || (v6 = ((unsigned __int8)dword_140D32180 ^ (unsigned __int8)(16 * sub_1403B1A00(1LL))) & 0x10 ^ (unsigned int)dword_140D32180,
        dword_140D32180 = v6,
        (v6 & 0x10) != 0) )
  {
    if ( dword_140D32184 )
    {
      if ( a1 != dword_140D32184 )
      {
        v8 = -1073741800;
        goto LABEL_12;
      }
    }
    else
    {
      v18 = (a1 & 0xFFFF000 | 0x10000300u) >> 8;
      v22 = v18 & 0xFFFF0 | 0x100002;
      v21 = v18 & 0xFFFF0 | 0x100005;
      v8 = sub_1403D735C(&dword_140D32450);
      if ( v8 < 0 )
        goto LABEL_12;
      v8 = sub_1403D735C(&dword_140D324C0);
      if ( v8 < 0 )
      {
        sub_1402376C4((__int64)&dword_140D32450);
        memset(&dword_140D32450, 0, 0x70uLL);
        word_140D32458 = 1;
        qword_140D32468 = (__int64)&qword_140D32460;
        qword_140D32460 = (__int64)&qword_140D32460;
        byte_140D3245A = 6;
        dword_140D3245C = 0;
        goto LABEL_12;
      }
      dword_140D32184 = a1;
    }
    v7 = dword_140D32180;
    if ( (dword_140D32180 & 0x20) == 0 )
    {
      v8 = sub_140851D88(&qword_140D321B0);
      if ( v8 < 0 )
        goto LABEL_12;
      v7 = dword_140D32180 | 0x20;
      dword_140D32180 |= 0x20u;
    }
    if ( (v7 & 1) == 0 )
    {
      v8 = sub_14084A7D0(v6, v5, qword_140D32198, ((unsigned int)dword_140D321C0 >> 7) & 1);
      if ( v8 < 0 )
        goto LABEL_12;
      dword_140D32180 |= 1u;
    }
    v8 = 0;
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D321A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D321A0);
  v9 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140D321A0 - qword_140C50630 < 0x8000000000LL )
    v10 = sub_140287F30(*((_QWORD *)v9 + 23));
  else
    v10 = -1;
  _disable();
  v11 = (char *)v9 + 1696;
  v12 = 0LL;
  v13 = (unsigned __int64)&qword_140D321A0 & 0x7FFFFFFFFFFFFFFCLL;
  while ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) != v13
       || !v11[18]
       || (*(_DWORD *)v11 & 1) != 0
       || *((_DWORD *)v11 + 2) != v10 )
  {
    v12 = (unsigned int)(v12 + 1);
    v11 += 96;
    if ( (unsigned int)v12 >= 6 )
      goto LABEL_28;
  }
  v11[18] = 0;
  if ( v11 )
  {
    if ( *(__int64 *)v11 < 0 )
    {
      *v11 |= 2u;
      _enable();
      sub_14034EE30(v11, v12, v13);
      _disable();
    }
    v14 = *((_DWORD *)v11 + 22);
    *((_DWORD *)v11 + 22) = 0;
    v11[17] = 0;
    *(_QWORD *)v11 = 0LL;
    *((_BYTE *)v9 + 792) |= 1 << v11[16];
    _enable();
    if ( v14 )
      sub_14022B568((ULONG_PTR)v9, (__int64)&qword_140D321A0, v14);
    goto LABEL_26;
  }
LABEL_28:
  if ( (*((_DWORD *)v9 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&qword_140D321A0, v10, 0LL);
  _enable();
LABEL_26:
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
