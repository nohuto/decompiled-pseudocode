/*
 * XREFs of sub_1406A5770 @ 0x1406A5770
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_14022EA4C @ 0x14022EA4C (sub_14022EA4C.c)
 *     ExSizeOfAutoExpandPushLock @ 0x14022EA70 (ExSizeOfAutoExpandPushLock.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_1406A5B90 @ 0x1406A5B90 (sub_1406A5B90.c)
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1407C9930 @ 0x1407C9930 (sub_1407C9930.c)
 *     sub_1407E5590 @ 0x1407E5590 (sub_1407E5590.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

NTSTATUS sub_1406A5770()
{
  char v0; // di
  char v1; // bl
  HANDLE v2; // r14
  LARGE_INTEGER *p_Interval; // rsi
  char v4; // r15
  int v5; // eax
  int v6; // eax
  const wchar_t *v7; // rax
  int v8; // r8d
  int v9; // ecx
  const wchar_t *v10; // rax
  int v11; // r8d
  int v12; // ecx
  char v13; // r10
  const wchar_t *v14; // rax
  char *v15; // rdx
  int v16; // r8d
  int v17; // ecx
  char *v18; // rcx
  unsigned __int16 v19; // ax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR v23; // r8
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  void *v27; // rsp
  int v28; // eax
  _DWORD *v29; // rbx
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  ULONG_PTR v36; // rbx
  NTSTATUS result; // eax
  __int64 v38; // rcx
  size_t BugCheckParameter4; // [rsp+20h] [rbp-30h]
  size_t BugCheckParameter4a; // [rsp+20h] [rbp-30h]
  size_t Size; // [rsp+28h] [rbp-28h]
  size_t Sizea; // [rsp+28h] [rbp-28h]
  size_t Sizeb; // [rsp+28h] [rbp-28h]
  int v44; // [rsp+30h] [rbp-20h]
  int v45; // [rsp+48h] [rbp-8h]
  LARGE_INTEGER Interval; // [rsp+50h] [rbp+0h] BYREF
  __int64 v47; // [rsp+58h] [rbp+8h] BYREF
  UNICODE_STRING v48; // [rsp+60h] [rbp+10h] BYREF
  void *v49; // [rsp+70h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+30h] BYREF
  _QWORD v52[4]; // [rsp+90h] [rbp+40h] BYREF
  __int128 v53; // [rsp+B0h] [rbp+60h]
  _OWORD v54[2]; // [rsp+C0h] [rbp+70h] BYREF
  __int16 v55; // [rsp+E0h] [rbp+90h]

  v52[0] = 48LL;
  Handle = 0LL;
  LODWORD(v47) = 0;
  DestinationString = 0LL;
  v0 = 0;
  v1 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v2 = 0LL;
  p_Interval = 0LL;
  v52[3] = 576LL;
  v4 = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v52[1] = 0LL;
  v52[2] = &DestinationString;
  v53 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C15958, 0LL);
  if ( qword_140C15948 )
  {
    while ( 1 )
    {
      v5 = sub_1406A5B90(&v49, 131103LL, v52);
      if ( v5 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v5, 0LL, 0LL);
    v2 = qword_140C15948;
    qword_140C15948 = v49;
    if ( !byte_140C0DD11 )
    {
      RtlInitUnicodeString(&v48, L"ProductType");
      LODWORD(BugCheckParameter4) = 34;
      v6 = sub_1407C9930(qword_140C15948, BugCheckParameter4, (__int64)&v47);
      if ( v6 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(BugCheckParameter4a) = 34;
          v6 = sub_1407C9930(qword_140C15948, BugCheckParameter4a, (__int64)&v47);
        }
        while ( v6 == -1073741670 );
      }
      if ( v6 >= 0 )
      {
        v7 = L"LanmanNT";
        do
        {
          v8 = *(const wchar_t *)((char *)v7 + (char *)v54 + 12 - (char *)L"LanmanNT");
          v9 = *v7 - v8;
          if ( v9 )
            break;
          ++v7;
        }
        while ( v8 );
        if ( !v9 )
          goto LABEL_52;
        v10 = L"ServerNT";
        do
        {
          v11 = *(const wchar_t *)((char *)v10 + (char *)v54 + 12 - (char *)L"ServerNT");
          v12 = *v10 - v11;
          if ( v12 )
            break;
          ++v10;
        }
        while ( v11 );
        v13 = 0;
        if ( !v12 )
LABEL_52:
          v13 = 1;
        v14 = L"WinNT";
        v15 = (char *)(qword_140C158F0 + 12);
        do
        {
          v16 = *(const wchar_t *)((char *)v14 + qword_140C158F0 + 12 - (_QWORD)L"WinNT");
          v17 = *v14 - v16;
          if ( v17 )
            break;
          ++v14;
        }
        while ( v16 );
        if ( v17 && v13 )
        {
          v38 = qword_140C158F0;
          v4 = 0;
          *(_OWORD *)qword_140C158F0 = v54[0];
          *(_OWORD *)(v38 + 16) = v54[1];
          *(_WORD *)(v38 + 32) = v55;
        }
        v18 = (char *)((char *)v54 + 12 - v15);
        while ( 1 )
        {
          v19 = *(_WORD *)v15;
          if ( *(_WORD *)v15 != *(_WORD *)&v18[(_QWORD)v15] )
            break;
          v15 += 2;
          if ( !v19 )
          {
            v20 = 0;
            goto LABEL_23;
          }
        }
        v20 = v19 < *(_WORD *)&v18[(_QWORD)v15] ? -1 : 1;
LABEL_23:
        v4 = v20 != 0 ? v4 : 0;
      }
      v22 = *((_QWORD *)sub_140347DB0() + 113);
      if ( !qword_140D3B4A8 || (v24 = sub_14042A5E0(v22, v21), v23 = (unsigned int)v24, v24 < 0) )
        KeBugCheckEx(0x9Au, 0x11uLL, v23, 1uLL, 0LL);
      v25 = (unsigned int)ExSizeOfAutoExpandPushLock();
      v26 = v25 + 15;
      if ( v25 + 15 <= v25 )
        v26 = 0xFFFFFFFFFFFFFF0LL;
      v27 = alloca(v26 & 0xFFFFFFFFFFFFFFF0uLL);
      p_Interval = &Interval;
      sub_14022EA4C();
      sub_140689388(1);
      v0 = 1;
      LODWORD(Size) = *(_DWORD *)(qword_140C158F0 + 8);
      v28 = sub_14071FAA0(
              (int)qword_140C15948,
              (int)&v48,
              0,
              *(_DWORD *)(qword_140C158F0 + 4),
              qword_140C158F0 + 12,
              Size);
      if ( v28 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(Sizea) = *(_DWORD *)(qword_140C158F0 + 8);
          v28 = sub_14071FAA0(
                  (int)qword_140C15948,
                  (int)&v48,
                  0,
                  *(_DWORD *)(qword_140C158F0 + 4),
                  qword_140C158F0 + 12,
                  Sizea);
        }
        while ( v28 == -1073741670 );
      }
      if ( v28 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v28, 1uLL, 0LL);
      v29 = qword_140C5ABE0;
      RtlInitUnicodeString(&v48, L"ProductSuite");
      if ( v29 )
      {
        LODWORD(Sizea) = v29[2];
        v30 = sub_14071FAA0((int)qword_140C15948, (int)&v48, 0, v29[1], (__int64)(v29 + 3), Sizea);
        if ( v30 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(Sizeb) = *((_DWORD *)qword_140C5ABE0 + 2);
            v30 = sub_14071FAA0(
                    (int)qword_140C15948,
                    (int)&v48,
                    0,
                    *((_DWORD *)qword_140C5ABE0 + 1),
                    (__int64)qword_140C5ABE0 + 12,
                    Sizeb);
          }
          while ( v30 == -1073741670 );
        }
        if ( v30 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v30, 2uLL, 0LL);
      }
      else
      {
        sub_140714980(qword_140C15948, &v48);
      }
    }
    while ( 1 )
    {
      LOBYTE(v45) = 1;
      LOBYTE(v44) = 0;
      v31 = sub_1407E5590(
              qword_140C15948,
              0LL,
              &qword_140C15920,
              1LL,
              &unk_140C15900,
              268435461,
              v44,
              &unk_140C158F8,
              4,
              v45);
      v36 = v31;
      if ( v31 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v0 )
      sub_140AB4260(v33, v32, v34, v35);
    if ( p_Interval )
      sub_14022EA30((__int64 *)p_Interval);
    if ( (v36 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v36, 4uLL, 0LL);
    v1 = v0;
    if ( !byte_140C0DD11
      && v4
      && (int)PsCreateSystemThreadEx((unsigned int)&Handle, 0LL, (__int64)sub_1409F7CD0, 3221226090LL, 0LL, 0LL) >= 0 )
    {
      ZwClose(Handle);
    }
  }
  result = ExReleasePushLockEx((ULONG_PTR)&qword_140C15958, 0LL);
  if ( v2 )
  {
    if ( v1 )
      sub_1406A5C00(v2);
    return ObCloseHandle(v2, 0);
  }
  return result;
}
