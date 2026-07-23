/*
 * XREFs of sub_140996FDC @ 0x140996FDC
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140B3116C @ 0x140B3116C (sub_140B3116C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14085CF58 @ 0x14085CF58 (sub_14085CF58.c)
 *     sub_1409972C8 @ 0x1409972C8 (sub_1409972C8.c)
 *     sub_1409985E0 @ 0x1409985E0 (sub_1409985E0.c)
 *     sub_1409987A0 @ 0x1409987A0 (sub_1409987A0.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140996FDC(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v4; // rcx
  _DWORD *v5; // r8
  char v6; // al
  __int64 Pool2; // rax
  __int64 v8; // rcx
  __int64 *v9; // rax
  _QWORD *v10; // rax
  void **v11; // rdx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rcx

  v1 = 0;
  if ( !byte_140C5AC3C )
    return v1;
  if ( *(_DWORD *)(a1 + 8) > 4u )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C20788, 0LL);
  v4 = off_140C08FA8;
  v5 = 0LL;
  v6 = 0;
  if ( off_140C08FA8 != (_UNKNOWN *)&off_140C08FA8 )
  {
    while ( 1 )
    {
      v5 = v4;
      if ( *((_QWORD *)v4 + 2) == *(_QWORD *)a1 )
        break;
      v4 = *(_DWORD **)v4;
      if ( v4 == (_DWORD *)&off_140C08FA8 )
        goto LABEL_8;
    }
    v6 = 1;
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v6 )
    {
      ++v5[7];
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, 40LL, 1866683203LL);
      v8 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 16) = *(_QWORD *)a1;
        *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(a1 + 8);
        *(_BYTE *)(Pool2 + 32) = *(_BYTE *)(a1 + 13);
        *(_DWORD *)(Pool2 + 28) = 1;
        v9 = (__int64 *)off_140C08FB0;
        if ( *off_140C08FB0 == (_UNKNOWN *)&off_140C08FA8 )
        {
          *(_QWORD *)v8 = &off_140C08FA8;
          *(_QWORD *)(v8 + 8) = v9;
          *v9 = v8;
          off_140C08FB0 = (_UNKNOWN **)v8;
          goto LABEL_20;
        }
        goto LABEL_28;
      }
      v1 = -1073741801;
    }
  }
  else if ( v6 )
  {
    if ( (int)--v5[7] <= 0 )
    {
      v10 = *(_QWORD **)v4;
      if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) == v4 )
      {
        v11 = (void **)*((_QWORD *)v4 + 1);
        if ( *v11 == v4 )
        {
          *v11 = v10;
          v10[1] = v11;
          ExFreePoolWithTag(v5, 0x6F435343u);
LABEL_20:
          sub_1409972C8();
          sub_140A48330(v12);
          v14 = *(int *)(a1 + 8);
          if ( (((_DWORD)v14 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v14 == 3 )
          {
            v15 = dword_140D048B0;
            if ( dword_140D048B0[v14] == -1 )
            {
              LOBYTE(v15) = *(_BYTE *)(a1 + 12);
              sub_1409987A0(v15);
            }
          }
          else
          {
            if ( *(_BYTE *)(a1 + 13) )
            {
              LOBYTE(v13) = *(_BYTE *)(a1 + 12);
              sub_1409985E0(v13);
            }
            sub_14085CF58();
          }
          sub_140A47CF8(v15, v14);
          goto LABEL_30;
        }
      }
LABEL_28:
      __fastfail(3u);
    }
  }
  else
  {
    v1 = -1073741811;
  }
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C20788, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C20788);
  sub_1402AFC00((ULONG_PTR)&qword_140C20788);
  KeLeaveCriticalRegion();
  return v1;
}
