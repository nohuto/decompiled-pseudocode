/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x14080B5F0
 * Callers:
 *     sub_140368ED4 @ 0x140368ED4 (sub_140368ED4.c)
 *     sub_1403A0800 @ 0x1403A0800 (sub_1403A0800.c)
 *     sub_1405CC2CC @ 0x1405CC2CC (sub_1405CC2CC.c)
 *     sub_1405D89F0 @ 0x1405D89F0 (sub_1405D89F0.c)
 *     sub_1406053C0 @ 0x1406053C0 (sub_1406053C0.c)
 *     sub_140641EE0 @ 0x140641EE0 (sub_140641EE0.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140967E00 @ 0x140967E00 (sub_140967E00.c)
 *     sub_1409964E4 @ 0x1409964E4 (sub_1409964E4.c)
 *     sub_14099CE40 @ 0x14099CE40 (sub_14099CE40.c)
 *     sub_1409A07D0 @ 0x1409A07D0 (sub_1409A07D0.c)
 *     sub_1409A0958 @ 0x1409A0958 (sub_1409A0958.c)
 *     sub_1409A24C0 @ 0x1409A24C0 (sub_1409A24C0.c)
 *     sub_140A01E10 @ 0x140A01E10 (sub_140A01E10.c)
 *     sub_140A9D738 @ 0x140A9D738 (sub_140A9D738.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14080B79C @ 0x14080B79C (sub_14080B79C.c)
 *     sub_14080B840 @ 0x14080B840 (sub_14080B840.c)
 *     sub_14092C10C @ 0x14092C10C (sub_14092C10C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump(
        _WORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rbx
  int v16; // esi
  __int64 v17; // r11
  int v19; // ecx
  int v20; // eax
  char v21[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+24h] [rbp-34h] BYREF
  __int64 v23[6]; // [rsp+28h] [rbp-30h] BYREF

  v21[0] = 1;
  v22 = 0;
  v23[0] = 0LL;
  if ( KeGetCurrentIrql() )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump: called at IRQL > PASSIVE_LEVEL\n");
    return 3221225800LL;
  }
  else if ( byte_140C54CE8 )
  {
    if ( !(unsigned __int8)sub_14080B840() )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      if ( _InterlockedExchange(&dword_140C48CA0, 1) == 1 )
      {
        v16 = -1073741267;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x57676244u);
        v15 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0xB8uLL);
          v16 = sub_1402E0AC4(a1, 0x10uLL, 0LL);
          if ( v16 >= 0 )
          {
            v16 = sub_1402E0200(v15, v17, (__int64)a1);
            if ( v16 >= 0 )
            {
              v19 = dword_140C48C9C;
              if ( (a9 & 2) != 0 )
                v19 = 1;
              v22 = v19;
              v15[7] = a5;
              v15[8] = a6;
              v15[9] = a7;
              v15[10] = a8;
              *((_DWORD *)v15 + 8) = a2;
              v15[5] = a3;
              v15[6] = a4;
              *((_DWORD *)v15 + 22) = a9;
              if ( (a9 & 8) != 0 )
                *((_DWORD *)v15 + 28) &= ~2u;
              else
                *((_DWORD *)v15 + 28) |= 2u;
              v20 = WerLiveKernelCreateReport(v15, &v22, v23);
              v16 = v20;
              if ( v20 >= 0 )
              {
                v16 = sub_14092C10C(v15, v22, v23[0], v21);
                if ( !v21[0] )
                  goto LABEL_9;
              }
              else
              {
                DbgPrintEx(
                  5u,
                  0,
                  "DBGK: DbgkWerCaptureLiveKernelDump: WerLiveKernelCreateReport failed, status 0x%x.\n\n",
                  v20);
              }
            }
          }
          sub_14080B79C(v15);
          ExFreePoolWithTag(v15, 0x57676244u);
        }
        else
        {
          v16 = -1073741670;
        }
        _InterlockedExchange(&dword_140C48CA0, 0);
      }
LABEL_9:
      KeLeaveCriticalRegion();
      return (unsigned int)v16;
    }
    DbgPrintEx(5u, 1u, "DBGK: Full Live Kernel Dumps are disabled. Failing request.\n");
    return 3221227524LL;
  }
  else
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump: called before initialization.\n");
    return 3221225635LL;
  }
}
