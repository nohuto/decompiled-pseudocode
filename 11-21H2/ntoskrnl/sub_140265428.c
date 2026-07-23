/*
 * XREFs of sub_140265428 @ 0x140265428
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocatePagesForMdl @ 0x1403D8690 (MmAllocatePagesForMdl.c)
 *     sub_1406E6E88 @ 0x1406E6E88 (sub_1406E6E88.c)
 *     MmAllocateNonCachedMemory @ 0x14096A490 (MmAllocateNonCachedMemory.c)
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 * Callees:
 *     sub_140265078 @ 0x140265078 (sub_140265078.c)
 *     sub_1402651B8 @ 0x1402651B8 (sub_1402651B8.c)
 *     sub_1402652C4 @ 0x1402652C4 (sub_1402652C4.c)
 *     sub_1402655A0 @ 0x1402655A0 (sub_1402655A0.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140589DDC @ 0x140589DDC (sub_140589DDC.c)
 *     sub_140589FC0 @ 0x140589FC0 (sub_140589FC0.c)
 *     sub_14062EDA8 @ 0x14062EDA8 (sub_14062EDA8.c)
 *     sub_14096AF9C @ 0x14096AF9C (sub_14096AF9C.c)
 */

__int64 __fastcall sub_140265428(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        int a7,
        int a8,
        __int64 a9)
{
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v14; // r13
  unsigned int v15; // r12d
  unsigned int v16; // eax
  ULONGLONG Ptr; // rdx
  unsigned __int64 v18; // rcx
  unsigned int *v19; // r13
  int v20; // r12d
  __int64 v21; // r13
  int v23; // [rsp+50h] [rbp-A9h]
  __int64 v24[10]; // [rsp+60h] [rbp-99h] BYREF
  _QWORD v25[6]; // [rsp+B0h] [rbp-49h] BYREF
  int v26; // [rsp+E0h] [rbp-19h]
  int v27; // [rsp+E4h] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E8h] [rbp-11h] BYREF

  memset(v24, 0, sizeof(v24));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (int)sub_140265078((__int64)v24, a1, a2, a3, a4, a5, a6, a7, a8, a9) >= 0 && (int)sub_1402651B8(v24) >= 0 )
  {
    v14 = v24[8];
    v15 = 0;
    v23 = 0;
    UserData.Ptr = v24[5];
    *(_DWORD *)(v24[8] + 40) = 0;
    sub_1402652C4((__int64)v24);
    v16 = *(_DWORD *)(v14 + 40);
    Ptr = UserData.Ptr;
    v18 = (unsigned __int64)v16 >> 12;
    if ( v18 != UserData.Ptr )
    {
      while ( SLOBYTE(v24[1]) < 0 )
      {
        if ( v23 == v16 )
        {
          if ( v15 > 3 || KeGetCurrentIrql() >= 2u || (v24[1] & 8) != 0 )
          {
LABEL_22:
            if ( v18 == Ptr )
              goto LABEL_4;
            break;
          }
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Interval);
          ++v15;
        }
        else
        {
          v15 = 0;
        }
        LODWORD(v24[1]) &= ~0x10000u;
        v23 = *(_DWORD *)(v14 + 40);
        sub_1402652C4((__int64)v24);
        v16 = *(_DWORD *)(v14 + 40);
        Ptr = UserData.Ptr;
        v18 = (unsigned __int64)v16 >> 12;
        if ( v18 == UserData.Ptr )
          goto LABEL_22;
      }
      sub_140589FC0(v24);
    }
LABEL_4:
    v19 = (unsigned int *)v24[8];
    if ( v24[8] )
    {
      if ( (a8 & 0x40) == 0 )
        sub_1402655A0(v24);
      if ( (BYTE4(xmmword_140D06900) & 1) != 0 )
        sub_140589DDC(v19 + 12, 632LL, (unsigned __int64)v19[10] >> 12);
      if ( (v24[1] & 0x100) != 0 )
        v24[8] = sub_14096AF9C(v19);
    }
  }
  v20 = v24[1];
  v21 = v24[8];
  if ( EtwEventEnabled(qword_140C15FB0, &stru_14000EF40) )
  {
    v25[0] = ((__int64 (__fastcall *)(_QWORD))sub_14062EDA8)((LARGE_INTEGER)PerformanceCounter.QuadPart);
    v25[1] = a5;
    v25[5] = v21;
    UserData.Ptr = (ULONGLONG)v25;
    v25[2] = a2;
    v25[3] = a3;
    v25[4] = a4;
    v26 = a7;
    v27 = v20;
    *(_QWORD *)&UserData.Size = 56LL;
    EtwWriteEx(qword_140C15FB0, &stru_14000EF40, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return v24[8];
}
