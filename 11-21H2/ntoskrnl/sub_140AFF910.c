/*
 * XREFs of sub_140AFF910 @ 0x140AFF910
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403C08BC @ 0x1403C08BC (sub_1403C08BC.c)
 *     sub_1403DAA2C @ 0x1403DAA2C (sub_1403DAA2C.c)
 *     sub_1403DE210 @ 0x1403DE210 (sub_1403DE210.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 *     sub_14084E760 @ 0x14084E760 (sub_14084E760.c)
 *     sub_140863FD4 @ 0x140863FD4 (sub_140863FD4.c)
 *     sub_140AFF7C8 @ 0x140AFF7C8 (sub_140AFF7C8.c)
 *     sub_140AFFE48 @ 0x140AFFE48 (sub_140AFFE48.c)
 *     sub_140B24410 @ 0x140B24410 (sub_140B24410.c)
 *     sub_140B2A640 @ 0x140B2A640 (sub_140B2A640.c)
 *     sub_140B2F394 @ 0x140B2F394 (sub_140B2F394.c)
 */

__int64 __fastcall sub_140AFF910(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // r14
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  int *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  int v12; // eax
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  int v20; // eax
  unsigned int i; // ebx
  __int64 v22; // rax
  __int64 j; // rbx
  __int64 v24; // rbx
  int v25; // r12d
  bool v26; // zf
  int v27; // eax
  struct _KTHREAD *v28; // r14
  unsigned int v29; // ebx
  __int64 v30; // rdi
  unsigned int v31; // ecx
  int v32; // r8d
  int v33; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-30h]
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-30h]
  __int64 v46; // [rsp+30h] [rbp-20h] BYREF
  __int128 v47; // [rsp+38h] [rbp-18h]
  unsigned int v48; // [rsp+98h] [rbp+48h] BYREF
  int v49; // [rsp+A0h] [rbp+50h]
  PVOID Address; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a2;
  Address = 0LL;
  v46 = 0LL;
  v48 = 0;
  if ( a2 )
  {
    qword_140C10BD8 = (__int64)&qword_140C10BD0;
    qword_140C10BD0 = (__int64)&qword_140C10BD0;
    v12 = PshedInitialize(a1, &v46);
    if ( v12 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v12, 0LL, 0LL);
    sub_1403DE210();
    sub_140863FD4();
    v13 = sub_140AFFE48(&v48, &Address);
    if ( v13 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v13, v2, 0LL);
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    v49 = 0;
    _disable();
    v16 = *((unsigned __int8 *)CurrentThread + 792);
    if ( *((_BYTE *)CurrentThread + 792)
      || (v16 = sub_14029F6A8((__int64)&qword_140C10BC0, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v17, v16);
      v49 = v17;
      *((_BYTE *)CurrentThread + 792) = v16 & ~(1 << v17);
      _enable();
      v15 = (__int64)CurrentThread + 96 * v17 + 1696;
      if ( (unsigned __int64)&qword_140C10BC0 - qword_140C50630 >= 0x8000000000LL )
        v18 = -1;
      else
        v18 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      *(_DWORD *)(v15 + 8) = v18;
      *(_QWORD *)v15 = (unsigned __int64)&qword_140C10BC0 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C10BC0, 0LL) )
      sub_14029F120(&qword_140C10BC0, v15, (__int64)&qword_140C10BC0);
    if ( v15 )
      *(_BYTE *)(v15 + 18) = 1;
    v20 = sub_140AFF7C8(v48, (unsigned int *)Address);
    if ( v20 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v20, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0; i < (unsigned int)dword_140D06884; *(_QWORD *)(*(_QWORD *)(v22 + 34464) + 8LL) = &unk_140CE1A98 )
    {
      v22 = sub_140348800(i++);
      **(_DWORD **)(v22 + 34464) = v48;
      *(_QWORD *)(*(_QWORD *)(v22 + 34464) + 16LL) = &qword_140C10BE0;
    }
    for ( j = qword_140CE1AA8; (__int64 *)j != &qword_140CE1AA8; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 104) == 7 )
      {
        *(_DWORD *)(j + 108) = 2;
        v33 = sub_1403C08BC(j, v2);
        if ( v33 < 0 )
        {
          BugCheckParameter4 = *(int *)(j + 104);
          *(_DWORD *)(j + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v33, v2, BugCheckParameter4);
        }
      }
    }
    v47 = 0LL;
    if ( *((_BYTE *)KeGetCurrentPrcb() + 141) == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      *(_QWORD *)&v47 = __PAIR64__(_RBX, _RAX);
      *((_QWORD *)&v47 + 1) = __PAIR64__(_RDX, _RCX);
      if ( (unsigned int)_RAX >= 0x80000008 )
      {
        _RAX = 2147483656LL;
        __asm { cpuid }
        *(_QWORD *)&v47 = __PAIR64__(_RBX, _RAX);
        *((_QWORD *)&v47 + 1) = __PAIR64__(_RDX, _RCX);
        if ( (_RBX & 1) != 0 )
          byte_140D04C68 = 1;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      sub_1403DAA2C();
    v24 = qword_140CE1AA8;
    v25 = 1;
    while ( (__int64 *)v24 != &qword_140CE1AA8 )
    {
      v26 = *(_DWORD *)(v24 + 104) == 7;
      *(_DWORD *)(v24 + 124) = v25;
      if ( !v26 && !*(_BYTE *)(v24 + 88) && *(_DWORD *)(v24 + 108) == 1 )
      {
        *(_DWORD *)(v24 + 108) = 2;
        v27 = sub_1403C08BC(v24, v2);
        if ( v27 < 0 )
        {
          BugCheckParameter4a = *(int *)(v24 + 104);
          *(_DWORD *)(v24 + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v27, v2, BugCheckParameter4a);
        }
      }
      v24 = *(_QWORD *)v24;
      ++v25;
    }
    sub_14084E760();
    *(_QWORD *)&stru_140C0E9A8.Type = sub_1403DBBB0;
    IoWMIRegistrationControl(&stru_140C0E9A8, 0x80000001);
    byte_140CE1A88 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C10BC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C10BC0);
    v28 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C10BC0 - qword_140C50630 >= 0x8000000000LL )
      v29 = -1;
    else
      v29 = sub_140287F30(*((_QWORD *)v28 + 23));
    _disable();
    v30 = (__int64)v28 + 1696;
    v31 = 0;
    while ( (*(_QWORD *)v30 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C10BC0 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v30 + 18)
         || (*(_DWORD *)v30 & 1) != 0
         || *(_DWORD *)(v30 + 8) != v29 )
    {
      ++v31;
      v30 += 96LL;
      if ( v31 >= 6 )
        goto LABEL_52;
    }
    *(_BYTE *)(v30 + 18) = 0;
    if ( !v30 )
    {
LABEL_52:
      if ( (*((_DWORD *)v28 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, (ULONG_PTR)&qword_140C10BC0, v29, 0LL);
      _enable();
      return 0LL;
    }
    if ( *(__int64 *)v30 < 0 )
    {
      *(_BYTE *)v30 |= 2u;
      _enable();
      sub_14034EE30(v30);
      _disable();
    }
    v32 = *(_DWORD *)(v30 + 88);
    *(_DWORD *)(v30 + 88) = 0;
    *(_BYTE *)(v30 + 17) = 0;
    *(_QWORD *)v30 = 0LL;
    *((_BYTE *)v28 + 792) |= 1 << *(_BYTE *)(v30 + 16);
    _enable();
    if ( v32 )
      sub_14022B568((ULONG_PTR)v28, (__int64)&qword_140C10BC0, v32);
  }
  else
  {
    qword_140C10C70 = 0LL;
    dword_140C10C78 = 0;
    qword_140CE1A90 = MEMORY[0xFFFFF78000000014];
    sub_140B2A640();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) == 0 )
      byte_140D04C69 = 1;
    v4 = PshedInitialize(a1, &v46);
    if ( v4 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v4, 0LL, 0LL);
    v5 = sub_140B2F394();
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 4uLL, v5, 0LL, 0LL);
    v6 = sub_140AFFE48(&v48, &Address);
    if ( v6 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v6, 0LL, 0LL);
    unk_140CE1A98 = 1279410516LL;
    stru_140CE1AB8.Header.WaitListHead.Blink = &stru_140CE1AB8.Header.WaitListHead;
    qword_140CE1AB0 = (__int64)&qword_140CE1AA8;
    qword_140CE1AA8 = (__int64)&qword_140CE1AA8;
    stru_140CE1AB8.Header.WaitListHead.Flink = &stru_140CE1AB8.Header.WaitListHead;
    dword_140CE1AA0 = 1;
    LOWORD(stru_140CE1AB8.Header.Lock) = 1;
    stru_140CE1AB8.Header.Size = 6;
    stru_140CE1AB8.Header.SignalState = 1;
    sub_140B24410();
    v7 = 0;
    v8 = (int *)Address;
    if ( v48 )
    {
      do
      {
        v9 = sub_14042A5E0(0LL, v8);
        if ( v9 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v9, 0LL, v8[2]);
        v10 = (unsigned int)*v8;
        ++v7;
        v8[3] = 2;
        v8 = (int *)((char *)v8 + v10);
      }
      while ( v7 < v48 );
      v8 = (int *)Address;
    }
    PshedFreeMemory(v8);
  }
  return 0LL;
}
