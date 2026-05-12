/*
 * XREFs of sub_1C000F3C0 @ 0x1C000F3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F470 @ 0x1C000F470 (sub_1C000F470.c)
 *     sub_1C000F724 @ 0x1C000F724 (sub_1C000F724.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C004BC0C @ 0x1C004BC0C (sub_1C004BC0C.c)
 *     sub_1C004BD5C @ 0x1C004BD5C (sub_1C004BD5C.c)
 *     sub_1C005CBE4 @ 0x1C005CBE4 (sub_1C005CBE4.c)
 *     sub_1C005CD80 @ 0x1C005CD80 (sub_1C005CD80.c)
 *     sub_1C0061260 @ 0x1C0061260 (sub_1C0061260.c)
 *     sub_1C00627D8 @ 0x1C00627D8 (sub_1C00627D8.c)
 *     sub_1C00711A4 @ 0x1C00711A4 (sub_1C00711A4.c)
 */

void __fastcall sub_1C000F3C0(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool v6; // bp
  bool v7; // r14
  unsigned int v8; // edi
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF

  v4 = DeferredContext[8];
  v5 = *(_QWORD *)(v4 + 504);
  if ( v5 )
  {
    if ( *(int *)(v4 + 1824) > 0 )
    {
      v6 = 0;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v7 = 0;
      v8 = *(_DWORD *)(v5 + 4);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1840), &LockHandle);
      v9 = *(_DWORD *)(v4 + 1824);
      if ( v9 > 0 )
      {
        v10 = 0;
        if ( v9 >= v8 )
          v10 = v9 - v8;
        *(_DWORD *)(v4 + 1824) = v10;
        v6 = v10 == 0;
      }
      v11 = *(_DWORD *)(v4 + 1828);
      if ( v11 > 0 && !v6 )
      {
        v12 = 0;
        if ( v11 >= v8 )
          v12 = v11 - v8;
        *(_DWORD *)(v4 + 1828) = v12;
        v7 = v12 == 0;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_BYTE *)(v4 + 3280) )
      {
        if ( (*(_BYTE *)(v4 + 450) & 2) == 0 )
        {
          v14 = *(_DWORD *)(v4 + 3288);
          if ( v14 != -1 )
          {
            v15 = *(_DWORD *)(v4 + 1320);
            if ( v15 < 0x1E )
              v15 = 30;
            v13 = 4 * v15 - *(_DWORD *)(v4 + 1824) + 42;
            if ( !v14 || v14 < (unsigned int)v13 )
            {
              v16 = *(_DWORD *)(v4 + 96);
              sub_1C00711A4(v4, v13);
              *(_BYTE *)(v4 + 450) |= 2u;
              if ( (byte_1C0093A04 & 4) != 0 )
                sub_1C005CD80(
                  v4 + 169,
                  (unsigned int)&unk_1C0089600,
                  v4 + 2024,
                  *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4656LL),
                  *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
                  *(_QWORD *)(v4 + 24) + 5000LL,
                  v16,
                  SBYTE1(v16),
                  SBYTE2(v16),
                  v4 + 2024,
                  v4 + 160,
                  v4 + 169,
                  v4 + 186,
                  1);
              if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
                && (HIDWORD(off_1C0093070->Timer) & 8) != 0
                && BYTE1(off_1C0093070->Timer) >= 2u )
              {
                sub_1C003EF0C(off_1C0093070->AttachedDevice, 60LL, &unk_1C0083530, v4);
              }
            }
          }
        }
      }
      if ( v6 )
      {
        if ( (qword_1C0093468 & 0x400) != 0 )
          sub_1C0019E4C(*(_QWORD *)(v4 + 24), 10, v4, 0, 0LL, 0LL, 0LL);
        sub_1C0061260(v4);
      }
      else if ( v7 )
      {
        if ( (byte_1C0093A04 & 2) != 0 )
          sub_1C005CBE4(
            v4 + 169,
            v4 + 160,
            v4 + 2024,
            *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4656LL),
            *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
            *(_QWORD *)(v4 + 24) + 5000LL,
            *(_BYTE *)(v4 + 96),
            v4 + 2024,
            v4 + 160,
            v4 + 169,
            v4 + 186,
            *(_BYTE *)(v4 + 450) & 1,
            3);
        LOBYTE(v13) = *(_BYTE *)(v4 + 96);
        sub_1C0037EE0(*(_QWORD *)(v4 + 24), v13);
      }
    }
    else if ( (int)sub_1C000F470(v4, v5, SystemArgument1, SystemArgument2) < 0 )
    {
      if ( (qword_1C0093468 & 0x400) != 0 )
        sub_1C0019E4C(*(_QWORD *)(v4 + 24), 9, v4, 0, 0LL, 0LL, 0LL);
      sub_1C00627D8(v4);
    }
    else
    {
      if ( (*(char *)(v4 + 449) < 0 || *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4896LL)) && (*(_DWORD *)(v4 + 456) & 4) == 0 )
        sub_1C000F724(v4);
      if ( _InterlockedExchange((volatile __int32 *)(v4 + 1808), 0) )
      {
        sub_1C004BD5C(v4);
      }
      else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1812), 0) )
      {
        sub_1C004BC0C(v4);
      }
    }
  }
}
