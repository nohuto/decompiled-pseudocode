/*
 * XREFs of sub_140AA9C94 @ 0x140AA9C94
 * Callers:
 *     sub_140AA8D9C @ 0x140AA8D9C (sub_140AA8D9C.c)
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sprintf_s @ 0x1403E7020 (sprintf_s.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 *     sub_140AAA09C @ 0x140AAA09C (sub_140AAA09C.c)
 *     sub_140AAA178 @ 0x140AAA178 (sub_140AAA178.c)
 */

__int64 __fastcall sub_140AA9C94(char a1)
{
  int v1; // eax
  KIRQL v2; // bl
  PKSPIN_LOCK v3; // rcx
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned __int8 v6; // al
  unsigned int v7; // r13d
  unsigned int v8; // r12d
  LARGE_INTEGER *v9; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  LARGE_INTEGER v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  __int64 v18; // r9
  int v19; // eax
  __int64 *v20; // rcx
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-30h] BYREF
  _STRING v27; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  char v30; // [rsp+A8h] [rbp+38h] BYREF

  *(_DWORD *)(&v27.MaximumLength + 1) = 0;
  v30 = 0;
  TimeFields = 0LL;
  v1 = *((_DWORD *)qword_140D01468 + 12);
  DestinationString = 0LL;
  if ( (v1 & 2) != 0 )
    v2 = -1;
  else
    v2 = KeAcquireSpinLockRaiseToDpc(qword_140D01468);
  v3 = qword_140D01468;
  result = 0xFFFFLL;
  v5 = *((unsigned __int16 *)qword_140D01468 + 49);
  if ( (_WORD)v5 != 0xFFFF )
  {
    *((_DWORD *)qword_140D01468 + 12) &= ~4u;
    v7 = v5;
    v27.Buffer = (char *)v3[3];
    v8 = 0;
    *(_DWORD *)&v27.Length = 5242880;
    while ( 1 )
    {
      v9 = (LARGE_INTEGER *)(v3[2] + 56LL * v7);
      if ( v2 != 0xFF )
      {
        KeReleaseSpinLockFromDpcLevel(v3);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v12 = *((_QWORD *)CurrentPrcb + 4375);
              v13 = ~(unsigned __int16)(-1LL << (v2 + 1));
              v21 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
              *(_DWORD *)(v12 + 20) &= v13;
              if ( v21 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v2);
      }
      RtlTimeToTimeFields(v9 + 1, &TimeFields);
      sprintf_s(
        (char *)qword_140D01468[3],
        0x50uLL,
        "%02d:%02d:%02d.%03d : ",
        TimeFields.Hour,
        TimeFields.Minute,
        TimeFields.Second,
        TimeFields.Milliseconds);
      sub_140AAA178(qword_140D01468[3]);
      v14 = v9[6];
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v14.QuadPart + 2 * v15) );
      if ( v15 >= 0x4F )
      {
        *(_WORD *)(v14.QuadPart + 158) = 0;
        v14 = v9[6];
      }
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v14.QuadPart);
      RtlUnicodeStringToAnsiString(&v27, &DestinationString, 0);
      v2 = (qword_140D01468[6] & 2) != 0 ? -1 : KeAcquireSpinLockRaiseToDpc(qword_140D01468);
      if ( (qword_140D01468[6] & 4) != 0 )
        break;
      sub_140AAA178(qword_140D01468[3]);
      sub_140AAA178(qword_140AA80D0);
      v3 = qword_140D01468;
      ++v8;
      result = *((unsigned __int16 *)qword_140D01468 + 48);
      if ( v7 == (_DWORD)result )
      {
        if ( v2 == 0xFF )
          return result;
        goto LABEL_57;
      }
      if ( a1 && v8 > 0x14 )
      {
        if ( v2 != 0xFF )
        {
          KeReleaseSpinLockFromDpcLevel(qword_140D01468);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v16 = KeGetCurrentIrql();
              if ( v16 <= 0xFu && v2 <= 0xFu && v16 >= 2u )
              {
                v17 = KeGetCurrentPrcb();
                v18 = *((_QWORD *)v17 + 4375);
                v19 = ~(unsigned __int16)(-1LL << (v2 + 1));
                v21 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
                *(_DWORD *)(v18 + 20) &= v19;
                if ( v21 )
                  sub_140418E4C((__int64)v17);
              }
            }
          }
          __writecr8(v2);
        }
        sub_140AAA09C(&v30);
        if ( (qword_140D01468[6] & 2) != 0 )
          v2 = -1;
        else
          v2 = KeAcquireSpinLockRaiseToDpc(qword_140D01468);
        if ( v30 )
        {
          v20 = qword_140AA80D0;
          goto LABEL_50;
        }
        v3 = qword_140D01468;
        if ( (qword_140D01468[6] & 4) != 0 )
        {
          v20 = (__int64 *)"New log entries have been added while waiting, command aborted.\r\n";
LABEL_50:
          result = sub_140AAA178(v20);
          v21 = v2 == 0xFFu;
          goto LABEL_55;
        }
        v8 = 0;
      }
      v7 = (unsigned __int8)(v7 + 1);
    }
    result = sub_140AAA178("New log entries have been added during dump, command aborted.\r\n");
    v21 = v2 == 0xFF;
LABEL_55:
    if ( v21 )
      return result;
    v3 = qword_140D01468;
LABEL_57:
    KeReleaseSpinLockFromDpcLevel(v3);
    if ( !dword_140D06B08 )
      goto LABEL_64;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_64;
    v22 = KeGetCurrentIrql();
    if ( v22 > 0xFu || v2 > 0xFu || v22 < 2u )
      goto LABEL_64;
    goto LABEL_62;
  }
  if ( v2 == 0xFF )
    return result;
  KeReleaseSpinLockFromDpcLevel(qword_140D01468);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && v2 <= 0xFu && v6 >= 2u )
      {
LABEL_62:
        v23 = KeGetCurrentPrcb();
        v24 = *((_QWORD *)v23 + 4375);
        v25 = ~(unsigned __int16)(-1LL << (v2 + 1));
        v21 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v21 )
          sub_140418E4C((__int64)v23);
      }
    }
  }
LABEL_64:
  result = v2;
  __writecr8(v2);
  return result;
}
