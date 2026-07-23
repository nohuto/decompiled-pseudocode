/*
 * XREFs of sub_140395BDC @ 0x140395BDC
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403559E4 @ 0x1403559E4 (sub_1403559E4.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140395E40 @ 0x140395E40 (sub_140395E40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405CCE88 @ 0x1405CCE88 (sub_1405CCE88.c)
 *     sub_1405D2284 @ 0x1405D2284 (sub_1405D2284.c)
 *     sub_140804CD8 @ 0x140804CD8 (sub_140804CD8.c)
 */

char sub_140395BDC()
{
  char result; // al
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // r14
  ULONG_PTR v3; // rbx
  __int64 v4; // r12
  UNICODE_STRING *p_DestinationString; // r15
  unsigned int v6; // esi
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  KIRQL v9; // al
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r8
  __int64 v21; // r10
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  int v25; // eax
  __int64 v26; // r9
  unsigned __int64 v27; // [rsp+30h] [rbp-98h]
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-90h] BYREF
  _OWORD v29[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v30; // [rsp+68h] [rbp-60h]
  _OWORD v31[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v32; // [rsp+90h] [rbp-38h]

  result = dword_140C23CB0;
  DestinationString = 0LL;
  if ( dword_140C23CB0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23B98, 0LL);
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = qword_140C23B80;
    v27 = MEMORY[0xFFFFF78000000008];
    while ( (ULONG_PTR *)v3 != &qword_140C23B80 )
    {
      v4 = *(_QWORD *)(v3 + 48);
      if ( v4 )
      {
        if ( *(_QWORD *)(v3 + 1200) )
        {
          p_DestinationString = (UNICODE_STRING *)(v3 + 1192);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, &word_1404370A0);
          p_DestinationString = &DestinationString;
        }
        if ( dword_140C23CB0 < 0 )
        {
          v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 600));
          if ( (dword_140C23CB0 & 1) != 0 )
          {
            sub_1403559E4(v3 + 600, v2, 0x47868C00uLL);
            sub_1405CCE88();
          }
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 600));
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v16 = *((_QWORD *)CurrentPrcb + 4375);
                v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
                v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
                *(_DWORD *)(v16 + 20) &= v17;
                if ( v18 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v13);
          sub_1405D2284(v4, v3 + 600, p_DestinationString, *(_QWORD *)(v3 + 632));
        }
        v6 = 0;
        if ( *(_DWORD *)(v3 + 828) )
        {
          do
          {
            v7 = *(_QWORD *)(*(_QWORD *)(v3 + 832) + 8LL * v6);
            v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 200));
            if ( (dword_140C23CB0 & 1) != 0 )
            {
              sub_1403559E4(v7 + 200, v27, 0x47868C00uLL);
              sub_1405CCE88();
            }
            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v7 + 200));
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v19 = KeGetCurrentIrql();
                if ( v19 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v19 >= 2u )
                {
                  v20 = KeGetCurrentPrcb();
                  v21 = *((_QWORD *)v20 + 4375);
                  v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                  v18 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
                  *(_DWORD *)(v21 + 20) &= v22;
                  if ( v18 )
                    sub_140418E4C(v20);
                }
              }
            }
            __writecr8(v8);
            sub_140804CD8(v4, *(_DWORD *)(v7 + 16), v7 + 200, (_DWORD)p_DestinationString, *(_QWORD *)(v7 + 232));
            ++v6;
          }
          while ( v6 < *(_DWORD *)(v3 + 828) );
          v2 = v27;
        }
      }
      v3 = *(_QWORD *)v3;
    }
    v9 = KeAcquireSpinLockRaiseToDpc(&qword_140C23D00);
    v10 = qword_140C23D30;
    v11 = qword_140C23D38;
    v31[0] = xmmword_140C23D40;
    v12 = v9;
    v31[1] = xmmword_140C23D50;
    v32 = qword_140C23D60;
    v29[0] = xmmword_140C23D68;
    v29[1] = xmmword_140C23D78;
    v30 = qword_140C23D88;
    KeReleaseSpinLockFromDpcLevel(&qword_140C23D00);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v26 = *((_QWORD *)v24 + 4375);
          v18 = (v25 & *(_DWORD *)(v26 + 20)) == 0;
          *(_DWORD *)(v26 + 20) &= v25;
          if ( v18 )
            sub_140418E4C(v24);
        }
      }
    }
    __writecr8(v12);
    sub_140395E40(v10, v11, v31, v29);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23B98, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C23B98);
    sub_1402AFC00((ULONG_PTR)&qword_140C23B98);
    return sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return result;
}
