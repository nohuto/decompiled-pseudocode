/*
 * XREFs of sub_140256998 @ 0x140256998
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140256C68 @ 0x140256C68 (sub_140256C68.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405D8F48 @ 0x1405D8F48 (sub_1405D8F48.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char *__fastcall sub_140256998(char *P, unsigned int *a2, char a3)
{
  char *v5; // rbx
  unsigned __int64 v6; // r15
  unsigned int v7; // r13d
  KIRQL v8; // di
  __int64 v9; // rax
  char *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  PVOID *v16; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  __int64 v24; // r9
  int v25; // eax
  char v26; // [rsp+60h] [rbp+8h]

  v26 = 0;
  v5 = P;
  v6 = 0LL;
  v7 = 0;
  if ( P )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F590);
  }
  else
  {
    result = (char *)ExAllocatePool2(64LL, 312LL, 1146572624LL);
    v5 = result;
    if ( !result )
      return result;
    *((_DWORD *)result + 4) = 1146572624;
    *((_WORD *)result + 12) = 0;
    result[26] = 6;
    *((_DWORD *)result + 7) = 1;
    v13 = result + 32;
    v13[1] = v13;
    *v13 = v13;
    *((_QWORD *)v5 + 8) = v5 + 56;
    *((_QWORD *)v5 + 7) = v5 + 56;
    *((_QWORD *)v5 + 6) = 0LL;
    v5[48] = 8;
    *((_QWORD *)v5 + 9) = 0LL;
    *((_DWORD *)v5 + 27) = 0;
    *((_WORD *)v5 + 52) = 0;
    *((_QWORD *)v5 + 17) = sub_1403A1210;
    *((_DWORD *)v5 + 28) = 275;
    *((_QWORD *)v5 + 18) = v5;
    *((_QWORD *)v5 + 21) = 0LL;
    *((_QWORD *)v5 + 16) = 0LL;
    *((_QWORD *)v5 + 24) = sub_1403A0B60;
    *((_QWORD *)v5 + 25) = v5;
    *((_QWORD *)v5 + 22) = 0LL;
    v8 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F590);
    v14 = qword_140C1F5A0;
    if ( *(__int64 **)(qword_140C1F5A0 + 8) != &qword_140C1F5A0 )
      goto LABEL_23;
    *(_QWORD *)v5 = qword_140C1F5A0;
    *((_QWORD *)v5 + 1) = &qword_140C1F5A0;
    *(_QWORD *)(v14 + 8) = v5;
    qword_140C1F5A0 = (__int64)v5;
  }
  if ( *((_DWORD *)v5 + 4) != 1146572624 )
    __fastfail(5u);
  v9 = *a2;
  if ( (_DWORD)v9 && !a3 )
  {
    v11 = 10000 * v9;
    *((_OWORD *)v5 + 14) = *(_OWORD *)a2;
    *((_OWORD *)v5 + 15) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v5 + 16) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v5 + 17) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v5 + 36) = *((_QWORD *)a2 + 8);
    v12 = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v5 + 37) = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v5 + 26) = v11 + v12;
    *((_QWORD *)v5 + 38) = KeGetCurrentThread();
    v5[216] = 1;
    if ( !(unsigned __int8)sub_1402E2D20((int)v5 + 48, -(int)v11, 0, 0, (__int64)(v5 + 112)) )
    {
      v5[20] = 1;
      sub_140256C68(v5);
    }
    goto LABEL_10;
  }
  if ( *((_DWORD *)v5 + 58) == 412 && *((_QWORD *)v5 + 30) > 0x20uLL )
  {
    v7 = *((_DWORD *)v5 + 60);
    v26 = 1;
    v6 = (MEMORY[0xFFFFF78000000008] - *((_QWORD *)v5 + 37)) / 0xAuLL;
  }
  v5[216] = 0;
  if ( KeCancelTimer((PKTIMER)(v5 + 48)) )
  {
    v5[20] = 0;
    sub_140256C68(v5);
  }
  if ( !*((_DWORD *)v5 + 7) )
  {
    KeReleaseSpinLockFromDpcLevel(&qword_140C1F590);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = *((_QWORD *)CurrentPrcb + 4375);
          v20 = ~(unsigned __int16)(-1LL << (v8 + 1));
          v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v21 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    KeWaitForSingleObject(v5 + 24, Executive, 0, 0, 0LL);
    v8 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F590);
  }
  if ( !a3 )
    goto LABEL_10;
  v15 = *(_QWORD **)v5;
  v16 = (PVOID *)*((_QWORD *)v5 + 1);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v16 != v5 )
LABEL_23:
    __fastfail(3u);
  *v16 = v15;
  v15[1] = v16;
  *((_DWORD *)v5 + 4) = 1330532174;
  ExFreePoolWithTag(v5, 0x44574F50u);
  v5 = 0LL;
LABEL_10:
  KeReleaseSpinLockFromDpcLevel(&qword_140C1F590);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && v8 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = *((_QWORD *)v23 + 4375);
        v25 = ~(unsigned __int16)(-1LL << (v8 + 1));
        v21 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v21 )
          sub_140418E4C(v23);
      }
    }
  }
  __writecr8(v8);
  if ( v26 )
    sub_1405D8F48(v7, v6);
  return v5;
}
