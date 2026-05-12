/*
 * XREFs of sub_1C0018F00 @ 0x1C0018F00
 * Callers:
 *     sub_1C0016374 @ 0x1C0016374 (sub_1C0016374.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0019194 @ 0x1C0019194 (sub_1C0019194.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C003EF50 @ 0x1C003EF50 (sub_1C003EF50.c)
 */

__int64 __fastcall sub_1C0018F00(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r13
  unsigned int v4; // ebp
  __int64 v5; // rdx
  _DWORD *v6; // r12
  unsigned int v7; // r15d
  _QWORD *i; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  PDEVICE_OBJECT v12; // rcx
  _QWORD *v13; // rsi
  void *v14; // rcx
  void *v15; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rdi
  _QWORD *v19; // rcx
  PDEVICE_OBJECT v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  __int64 Size; // [rsp+A0h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v23, 0, sizeof(v23));
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x4000) != 0
    && BYTE1(off_1C0093070->Timer) >= 5u )
  {
    sub_1C003EF0C(off_1C0093070->AttachedDevice, 40LL, &unk_1C0083210, a1);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 216), &v23);
  v3 = (unsigned int)(*(_DWORD *)(a1 + 160) + *(_DWORD *)(a1 + 240));
  Size = 8 * v3 + 16;
  v4 = 0;
  v6 = (_DWORD *)sub_1C0007CF4(64LL, Size, 1380213074LL, *(_QWORD *)(a1 + 8));
  if ( !v6 )
  {
    KeReleaseInStackQueuedSpinLock(&v23);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v4 = -1073741801;
    goto LABEL_21;
  }
  v7 = 0;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x4000) != 0
    && BYTE1(off_1C0093070->Timer) >= 5u )
  {
    sub_1C003EDF0(off_1C0093070->AttachedDevice, 41LL, &unk_1C0083210);
  }
  for ( i = *(_QWORD **)(a1 + 144); i != (_QWORD *)(a1 + 144); i = (_QWORD *)*i )
  {
    v9 = i - 7;
    v10 = i - 7;
    if ( (i[49] & 4) != 0 )
    {
      LOBYTE(v5) = 1;
      sub_1C0019194(v10, v5);
      ObfReferenceObject((PVOID)v9[1]);
      if ( v7 > (unsigned int)v3 )
      {
        if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070 )
          goto LABEL_15;
        if ( (HIDWORD(off_1C0093070->Timer) & 0x4000) != 0 && BYTE1(off_1C0093070->Timer) >= 5u )
          sub_1C003EE60(off_1C0093070->AttachedDevice, 43LL, &unk_1C0083210, v7, v3);
        break;
      }
      v11 = v7++;
      *(_QWORD *)&v6[2 * v11 + 2] = v9[1];
      v12 = off_1C0093070;
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x4000) != 0
        && BYTE1(off_1C0093070->Timer) >= 5u )
      {
        v17 = 44LL;
        goto LABEL_36;
      }
    }
    else
    {
      sub_1C0019194(v10, 0LL);
      v12 = off_1C0093070;
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x4000) != 0
        && BYTE1(off_1C0093070->Timer) >= 5u )
      {
        v17 = 42LL;
LABEL_36:
        sub_1C003EF0C(v12->AttachedDevice, v17, &unk_1C0083210, i - 7);
        continue;
      }
    }
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x4000) != 0
    && BYTE1(off_1C0093070->Timer) >= 5u )
  {
    sub_1C003EDF0(off_1C0093070->AttachedDevice, 45LL, &unk_1C0083210);
  }
LABEL_15:
  v13 = *(_QWORD **)(a1 + 224);
  while ( 2 )
  {
    if ( v13 != (_QWORD *)(a1 + 224) )
    {
      v18 = v13 - 7;
      v19 = v13 - 7;
      if ( (v13[49] & 4) != 0 )
      {
        LOBYTE(v5) = 1;
        sub_1C0019194(v19, v5);
        ObfReferenceObject((PVOID)v18[1]);
        if ( v7 > (unsigned int)v3 )
        {
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
            && (HIDWORD(off_1C0093070->Timer) & 0x4000) != 0
            && BYTE1(off_1C0093070->Timer) >= 5u )
          {
            sub_1C003EE60(off_1C0093070->AttachedDevice, 47LL, &unk_1C0083210, v7, v3);
          }
          break;
        }
        v22 = v7++;
        *(_QWORD *)&v6[2 * v22 + 2] = v18[1];
        v20 = off_1C0093070;
        if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
          || (HIDWORD(off_1C0093070->Timer) & 0x4000) == 0
          || BYTE1(off_1C0093070->Timer) < 5u )
        {
          goto LABEL_54;
        }
        v21 = 48LL;
      }
      else
      {
        sub_1C0019194(v19, 0LL);
        v20 = off_1C0093070;
        if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
          || (HIDWORD(off_1C0093070->Timer) & 0x4000) == 0
          || BYTE1(off_1C0093070->Timer) < 5u )
        {
          goto LABEL_54;
        }
        v21 = 46LL;
      }
      sub_1C003EF0C(v20->AttachedDevice, v21, &unk_1C0083210, v13 - 7);
LABEL_54:
      v13 = (_QWORD *)*v13;
      continue;
    }
    break;
  }
  KeReleaseInStackQueuedSpinLock(&v23);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *v6 = v7;
  v14 = *(void **)(a1 + 4312);
  *a2 = v6;
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x52446152u);
    *(_QWORD *)(a1 + 4312) = 0LL;
  }
  v15 = (void *)sub_1C0007CF4(64LL, Size, 1380213074LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 4312) = v15;
  if ( v15 )
  {
    memmove(v15, v6, Size);
  }
  else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
         && (HIDWORD(off_1C0093070->Timer) & 0x4000) != 0
         && BYTE1(off_1C0093070->Timer) >= 3u )
  {
    sub_1C003EF0C(off_1C0093070->AttachedDevice, 49LL, &unk_1C0083210, a1);
  }
LABEL_21:
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x4000) != 0
    && BYTE1(off_1C0093070->Timer) >= 5u )
  {
    sub_1C003EF50(off_1C0093070->AttachedDevice, 50LL, &unk_1C0083210, a1, v4);
  }
  return v4;
}
