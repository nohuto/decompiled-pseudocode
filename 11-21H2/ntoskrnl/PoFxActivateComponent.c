/*
 * XREFs of PoFxActivateComponent @ 0x140357D10
 * Callers:
 *     sub_1402D2864 @ 0x1402D2864 (sub_1402D2864.c)
 *     sub_1403B97E8 @ 0x1403B97E8 (sub_1403B97E8.c)
 *     sub_1403B9904 @ 0x1403B9904 (sub_1403B9904.c)
 *     PoFxStartDevicePowerManagement @ 0x1403B9A30 (PoFxStartDevicePowerManagement.c)
 *     sub_1403CE36C @ 0x1403CE36C (sub_1403CE36C.c)
 *     sub_140618F80 @ 0x140618F80 (sub_140618F80.c)
 *     sub_14082310C @ 0x14082310C (sub_14082310C.c)
 *     sub_140AF86C4 @ 0x140AF86C4 (sub_140AF86C4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140355144 @ 0x140355144 (sub_140355144.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

char __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  int v3; // esi
  __int64 v4; // rbp
  _QWORD *v5; // rax
  char v6; // di
  int *v7; // r9
  struct _KTHREAD *v8; // rcx
  bool v9; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // r14
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  _OWORD v15[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+68h] [rbp-20h]

  v3 = a3 & 1;
  if ( (a3 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    sub_1405CAE6C(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  if ( (a3 & 3) == 3 )
    sub_1405CAE6C(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    sub_1405CAE6C(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  v5 = *(_QWORD **)(BugCheckParameter2 + 832);
  memset(v15, 0, sizeof(v15));
  v4 = v5[(unsigned int)BugCheckParameter3];
  v16 = 0LL;
  v17 = 0;
  LODWORD(v5) = *(_DWORD *)(BugCheckParameter2 + 824);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    if ( (a3 & 6) == 4 )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = 1;
      --*((_WORD *)CurrentThread + 243);
    }
    else
    {
      v6 = 0;
    }
    v7 = (int *)v15;
    if ( (a3 & 2) != 0 )
      v7 = 0LL;
    LODWORD(v5) = _InterlockedIncrement((volatile signed __int32 *)(v4 + 88));
    if ( (_DWORD)v5 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 88));
      LOBYTE(v5) = sub_140355144(BugCheckParameter2, v4, 0, v7);
    }
    else
    {
      if ( (int)v5 < 0 )
      {
LABEL_12:
        if ( v6 )
        {
          v8 = KeGetCurrentThread();
          v9 = (*((_WORD *)v8 + 243))++ == 0xFFFF;
          if ( v9 )
          {
            v5 = (_QWORD *)((char *)v8 + 152);
            if ( (_QWORD *)*v5 != v5 )
              LOBYTE(v5) = KiCheckForKernelApcDelivery();
          }
        }
        return (char)v5;
      }
      if ( ((unsigned int)v5 & 0x40000000) != 0 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 128));
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 128));
        LOBYTE(v5) = dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            LOBYTE(v5) = KeGetCurrentIrql();
            if ( (unsigned __int8)v5 <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)v5 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v13 = *((_QWORD *)CurrentPrcb + 4375);
              LODWORD(v5) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v9 = ((unsigned int)v5 & *(_DWORD *)(v13 + 20)) == 0;
              *(_DWORD *)(v13 + 20) &= (unsigned int)v5;
              if ( v9 )
                LOBYTE(v5) = sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
      }
    }
    if ( v3 )
      LOBYTE(v5) = KeWaitForSingleObject((PVOID)(v4 + 104), Executive, 0, 0, 0LL);
    goto LABEL_12;
  }
  return (char)v5;
}
