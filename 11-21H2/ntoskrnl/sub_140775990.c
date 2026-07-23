/*
 * XREFs of sub_140775990 @ 0x140775990
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IoClearActivityIdThread @ 0x1402DE990 (IoClearActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x1402DE9B0 (IoSetActivityIdThread.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140560E60 @ 0x140560E60 (sub_140560E60.c)
 *     sub_1406E5854 @ 0x1406E5854 (sub_1406E5854.c)
 *     sub_140775854 @ 0x140775854 (sub_140775854.c)
 *     sub_140775D50 @ 0x140775D50 (sub_140775D50.c)
 *     sub_140776274 @ 0x140776274 (sub_140776274.c)
 *     sub_140776E5C @ 0x140776E5C (sub_140776E5C.c)
 *     sub_140779B80 @ 0x140779B80 (sub_140779B80.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140775990(PERESOURCE Resource)
{
  struct _FAST_MUTEX *v1; // rdi
  PERESOURCE v2; // rsi
  char v3; // r14
  PERESOURCE v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v6; // r13
  __int64 v7; // r12
  char v8; // cl
  __int64 Pool2; // rax
  __int64 v10; // rdx
  volatile signed __int32 *Address; // rcx
  PVOID v12; // r15
  __int64 v13; // rax
  __int64 *v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rax
  PVOID *v22; // rbx
  __int64 v23; // rdi
  int OwnerTable_high; // eax
  char result; // al
  __int64 i; // rdi
  struct _KTHREAD *v27; // rax
  char v28; // [rsp+20h] [rbp-60h]
  char v29; // [rsp+21h] [rbp-5Fh]
  PVOID P[2]; // [rsp+28h] [rbp-58h] BYREF
  int v31; // [rsp+38h] [rbp-48h]
  __int64 v32; // [rsp+40h] [rbp-40h]
  PVOID *v33; // [rsp+48h] [rbp-38h]
  PERESOURCE v34; // [rsp+58h] [rbp-28h]
  __int128 v35; // [rsp+60h] [rbp-20h] BYREF

  v32 = 0LL;
  v1 = (struct _FAST_MUTEX *)&Resource[1];
  v34 = Resource;
  *(_OWORD *)P = 0LL;
  v2 = Resource;
  v29 = 1;
  v35 = 0LL;
  v3 = 1;
  v4 = Resource + 2;
  do
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    LODWORD(v7) = 0;
    v33 = 0LL;
    v31 = 0;
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(v2, 1u);
    ExAcquireFastMutex(v1);
    if ( (PERESOURCE)v4->SystemResourcesList.Flink == v4 )
    {
      P[1] = P;
      P[0] = P;
    }
    else
    {
      *(LIST_ENTRY *)P = v4->SystemResourcesList;
      *((_QWORD *)P[0] + 1) = P;
      *(_QWORD *)P[1] = P;
      v4->SystemResourcesList.Blink = &v4->SystemResourcesList;
      v4->SystemResourcesList.Flink = &v4->SystemResourcesList;
    }
    v8 = 0;
    if ( (HIDWORD(v2[2].OwnerTable) & 2) == 0 )
      v8 = v3;
    v3 = v8;
    if ( v8 )
    {
      LODWORD(v7) = v2[2].OwnerTable;
      v31 = v7;
      if ( (_DWORD)v7 )
      {
        Pool2 = ExAllocatePool2(256LL, 8LL * (unsigned int)v7, 1483763280LL);
        v33 = (PVOID *)Pool2;
        v6 = (PVOID *)Pool2;
        if ( !Pool2 )
        {
          v3 = 0;
LABEL_51:
          for ( i = (__int64)v2[1].Address; (PVOID *)i != &v2[1].Address; i = *(_QWORD *)i )
          {
            v27 = KeGetCurrentThread();
            --*((_WORD *)v27 + 242);
            ExAcquirePushLockExclusiveEx(i + 64, 0LL);
            *(_DWORD *)(i + 216) |= 1u;
            sub_140776E5C(i);
            sub_1406E5854(i);
            ExReleasePushLockEx(i + 64, 0LL);
            sub_1402F9540((__int64)KeGetCurrentThread());
          }
          HIDWORD(v2[2].OwnerTable) &= ~2u;
          v1 = (struct _FAST_MUTEX *)&v2[1];
          goto LABEL_12;
        }
        v10 = 0LL;
        Address = (volatile signed __int32 *)v2[1].Address;
        if ( Address != (volatile signed __int32 *)&v2[1].Address )
        {
          while ( (unsigned int)v10 < (unsigned int)v7 )
          {
            *(_QWORD *)(Pool2 + 8 * v10) = Address;
            v10 = (unsigned int)(v10 + 1);
            _InterlockedIncrement(Address + 53);
            Address = *(volatile signed __int32 **)Address;
            if ( Address == (volatile signed __int32 *)&v2[1].Address )
              goto LABEL_12;
          }
          v3 = 0;
        }
      }
    }
    if ( !v3 )
      goto LABEL_51;
LABEL_12:
    KeReleaseGuardedMutex(v1);
    while ( 1 )
    {
      v12 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v13 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      if ( v3 && (_DWORD)v7 )
      {
        v14 = (__int64 *)v6;
        v15 = v32;
        v7 = (unsigned int)v7;
        do
        {
          v16 = *v14;
          if ( *(_QWORD *)(*v14 + 224) <= *((_QWORD *)v12 + 3) )
          {
            v28 = 0;
            if ( !(unsigned __int8)sub_140776274(*(void **)(v16 + 24)) )
            {
              v35 = *(_OWORD *)*(_QWORD *)(v16 + 24);
              v15 = IoSetActivityIdThread((__int64)&v35);
              v28 = 1;
            }
            if ( byte_140C0DD4A < 0 )
              sub_140560E60(v17, (const EVENT_DESCRIPTOR *)qword_14003B160, *(const GUID **)(v16 + 24), v16);
            v18 = KeGetCurrentThread();
            --*((_WORD *)v18 + 242);
            ExAcquirePushLockExclusiveEx(v16 + 64, 0LL);
            v19 = *(_DWORD *)(v16 + 216);
            ExReleasePushLockEx(v16 + 64, 0LL);
            sub_1402F9540((__int64)KeGetCurrentThread());
            if ( (v19 & 9) == 0 )
            {
              sub_140775D50(v16, *((_QWORD *)v12 + 2));
              v21 = KeGetCurrentThread();
              --*((_WORD *)v21 + 242);
              ExAcquirePushLockExclusiveEx(v16 + 64, 0LL);
              if ( (*(_DWORD *)(v16 + 216) & 1) != 0 || *(_QWORD *)(v16 + 192) != v16 + 192 )
                sub_1406E5854(v16);
              ExReleasePushLockEx(v16 + 64, 0LL);
              sub_1402F9540((__int64)KeGetCurrentThread());
            }
            if ( byte_140C0DD4A < 0 )
              sub_140560E60(v20, (const EVENT_DESCRIPTOR *)qword_14003B410, *(const GUID **)(v16 + 24), v16);
            if ( v28 )
              IoClearActivityIdThread(v15);
          }
          ++v14;
          --v7;
        }
        while ( v7 );
        v2 = v34;
        LODWORD(v7) = v31;
        v32 = v15;
        v6 = v33;
      }
      sub_140779B80(*((PVOID *)v12 + 2));
      ExFreePoolWithTag(v12, 0x58706E50u);
    }
    if ( v6 )
    {
      if ( (_DWORD)v7 )
      {
        v22 = v6;
        v23 = (unsigned int)v7;
        do
        {
          sub_140775854(*v22++);
          --v23;
        }
        while ( v23 );
      }
      ExFreePoolWithTag(v6, 0x58706E50u);
    }
    v1 = (struct _FAST_MUTEX *)&v2[1];
    ExAcquireFastMutex((PFAST_MUTEX)&v2[1]);
    v4 = v2 + 2;
    if ( (PERESOURCE)v4->SystemResourcesList.Flink == v4 )
    {
      OwnerTable_high = HIDWORD(v2[2].OwnerTable);
      if ( (OwnerTable_high & 2) == 0 )
      {
        v29 = 0;
        HIDWORD(v2[2].OwnerTable) = OwnerTable_high & 0xFFFFFFFE;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&v2[1]);
    ExReleaseResourceLite(v2);
    result = sub_1402F9540((__int64)KeGetCurrentThread());
  }
  while ( v29 );
  return result;
}
