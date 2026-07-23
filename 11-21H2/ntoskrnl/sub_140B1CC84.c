/*
 * XREFs of sub_140B1CC84 @ 0x140B1CC84
 * Callers:
 *     sub_140B1BBE4 @ 0x140B1BBE4 (sub_140B1BBE4.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 *     wcscat_s @ 0x1403E7610 (wcscat_s.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406A5B90 @ 0x1406A5B90 (sub_1406A5B90.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407333B0 @ 0x1407333B0 (sub_1407333B0.c)
 *     sub_1407C1130 @ 0x1407C1130 (sub_1407C1130.c)
 *     sub_1407C9930 @ 0x1407C9930 (sub_1407C9930.c)
 *     sub_1407E5590 @ 0x1407E5590 (sub_1407E5590.c)
 *     sub_140845800 @ 0x140845800 (sub_140845800.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B1D10C @ 0x140B1D10C (sub_140B1D10C.c)
 *     sub_140B1D3C4 @ 0x140B1D3C4 (sub_140B1D3C4.c)
 */

char __fastcall sub_140B1CC84(__int64 a1)
{
  PVOID v1; // rsi
  int v2; // eax
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  NTSTATUS v8; // eax
  char *PoolWithTag; // rax
  int v10; // eax
  size_t v11; // r8
  int v12; // eax
  char v14; // r14
  __int64 v15; // rax
  HANDLE v16; // r12
  int v17; // eax
  unsigned int v18; // r15d
  unsigned int *v19; // rsi
  bool v20; // di
  SIZE_T v21; // r14
  char *v22; // r13
  ULONG_PTR v23; // r8
  unsigned int v24; // edx
  unsigned int i; // r14d
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // eax
  int v29; // eax
  wchar_t *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  PVOID *Objectb; // [rsp+20h] [rbp-E0h]
  PVOID *Objectc; // [rsp+20h] [rbp-E0h]
  PVOID *Objectd; // [rsp+20h] [rbp-E0h]
  PVOID *Objecte; // [rsp+20h] [rbp-E0h]
  PVOID *Objectf; // [rsp+20h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  PVOID v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-70h]
  __int128 v49; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING v52; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v54; // [rsp+E0h] [rbp-20h]
  __int128 v55; // [rsp+F0h] [rbp-10h]
  __int128 v56; // [rsp+100h] [rbp+0h] BYREF
  char v57[12]; // [rsp+110h] [rbp+10h] BYREF
  int v58; // [rsp+11Ch] [rbp+1Ch]

  v45 = 48LL;
  LODWORD(BugCheckParameter2) = 0;
  v48 = 576LL;
  DestinationString = 0LL;
  v1 = 0LL;
  Handle = 0LL;
  v56 = 0LL;
  MEMORY[0xFFFFF78000000268] = 1;
  v42 = 0LL;
  byte_140C0DD11 = 0;
  byte_140C0DD10 = 0;
  sub_140845800(a1);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  v46 = 0LL;
  p_DestinationString = &DestinationString;
  v49 = 0LL;
  v2 = sub_1406A5B90();
  if ( v2 < 0 )
    KeBugCheckEx(0x9Au, 2uLL, (unsigned int)v2, 0LL, 0LL);
  v44 = 0LL;
  v3 = ObReferenceObjectByHandle(qword_140C0DD08, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v44, 0LL);
  v4 = v44;
  if ( v3 < 0 )
    KeBugCheckEx(0x9Au, 0xBuLL, (unsigned int)v3, 0LL, 0LL);
  RtlInitUnicodeString(&v42, L"SetupType");
  LODWORD(Object) = 72;
  v5 = sub_1407C9930(
         qword_140C0DD08,
         (unsigned __int64)&v42,
         2u,
         v57,
         (size_t)Object,
         (unsigned int *)&BugCheckParameter2);
  if ( v5 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v5, 0LL, 0LL);
  if ( v58 == 1 || v58 == 4 )
  {
    byte_140C0DD11 = 1;
    MEMORY[0xFFFFF78000000268] = 0;
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
    v4 = 0LL;
  }
  RtlInitUnicodeString(&v42, L"SystemSetupInProgress");
  LODWORD(Objecta) = 72;
  v6 = sub_1407C9930(
         qword_140C0DD08,
         (unsigned __int64)&v42,
         2u,
         v57,
         (size_t)Objecta,
         (unsigned int *)&BugCheckParameter2);
  if ( v6 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v6, 0LL, 0LL);
  if ( v58 == 1 )
    byte_140C0DD10 = 1;
  sub_140B1D3C4();
  if ( byte_140C4E508 )
  {
    qword_140C15960 = v4;
    return 1;
  }
  qword_140C15930 = (__int64)sub_1406A5770;
  qword_140C15938 = 0LL;
  qword_140C15920 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  LODWORD(v45) = 48;
  p_DestinationString = &DestinationString;
  v46 = 0LL;
  LODWORD(v48) = 576;
  v49 = 0LL;
  v7 = sub_1406A5B90();
  if ( v7 < 0 )
  {
    if ( !byte_140C0DD11 )
      KeBugCheckEx(0x9Au, 6uLL, (unsigned int)v7, 0LL, 0LL);
  }
  else
  {
    if ( !byte_140C0DD11 )
    {
      v44 = 0LL;
      v8 = ObReferenceObjectByHandle(qword_140C15948, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v44, 0LL);
      v1 = v44;
      if ( v8 < 0 )
        KeBugCheckEx(0x9Au, 0xCuLL, (unsigned int)v8, 0LL, 0LL);
    }
    qword_140C15960 = v4;
    qword_140C15968 = v1;
    sub_140B1D10C();
    RtlInitUnicodeString(&v42, L"ProductType");
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x22uLL, 0x2079654Bu);
    qword_140C158F0 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      LODWORD(Objectb) = 34;
      v10 = sub_1407C9930(
              qword_140C15948,
              (unsigned __int64)&v42,
              2u,
              PoolWithTag,
              (size_t)Objectb,
              (unsigned int *)&BugCheckParameter2);
      if ( v10 < 0 )
      {
        if ( !byte_140C0DD11 )
          KeBugCheckEx(0x9Au, 7uLL, (unsigned int)v10, 0LL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&v42, L"ProductSuite");
        LODWORD(Objectc) = 16;
        if ( (unsigned int)sub_1407C9930(
                             qword_140C15948,
                             (unsigned __int64)&v42,
                             2u,
                             (char *)&v56,
                             (size_t)Objectc,
                             (unsigned int *)&BugCheckParameter2) != -2147483643 )
          goto LABEL_18;
        LODWORD(BugCheckParameter2) = BugCheckParameter2 + 16;
        qword_140C5ABE0 = ExAllocatePoolWithTag(PagedPool, (unsigned int)BugCheckParameter2, 0x2079654Bu);
        if ( !qword_140C5ABE0 )
          KeBugCheckEx(0x9Au, 0x14uLL, (unsigned int)BugCheckParameter2, 2uLL, 0LL);
        LODWORD(Objectd) = BugCheckParameter2;
        if ( (int)sub_1407C9930(
                    qword_140C15948,
                    (unsigned __int64)&v42,
                    2u,
                    (char *)qword_140C5ABE0,
                    (size_t)Objectd,
                    (unsigned int *)&BugCheckParameter2) >= 0
          || (ExFreePoolWithTag(qword_140C5ABE0, 0), qword_140C5ABE0 = 0LL, !byte_140C0DD11) )
        {
LABEL_18:
          v11 = -1LL;
          do
            ++v11;
          while ( aLanmannt_0[v11] );
          if ( !wcsncmp(L"LanmanNT", (const wchar_t *)(qword_140C158F0 + 12), v11)
            && (_DWORD)InitSafeBootMode == 3
            && !byte_140C0DD11 )
          {
            MEMORY[0xFFFFF78000000268] = 1;
            MEMORY[0xFFFFF78000000264] = 3;
          }
          v12 = sub_1407E5590(
                  (int)qword_140C15948,
                  0,
                  (__int64)&qword_140C15920,
                  1LL,
                  &unk_140C15900,
                  268435461,
                  0,
                  &unk_140C158F8,
                  4,
                  1);
          if ( v12 >= 0 )
          {
            RtlInitUnicodeString(
              &DestinationString,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
            LODWORD(v45) = 48;
            p_DestinationString = &DestinationString;
            v46 = 0LL;
            LODWORD(v48) = 576;
            v49 = 0LL;
            if ( (int)sub_1406A5B90() >= 0 )
            {
              LODWORD(v43) = 0;
              v53 = 0LL;
              v14 = 0;
              v15 = -1LL;
              v54 = 0LL;
              v55 = 0LL;
              v42 = 0LL;
              v52 = 0LL;
              do
                ++v15;
              while ( aRegistryMachin_195[v15] );
              v42.Length = 2 * (v15 + 64);
              v42.MaximumLength = v42.Length;
              v42.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v42.Length, 0x2079654Bu);
              if ( !v42.Buffer )
                KeBugCheckEx(0x9Au, 0x14uLL, v42.Length, 3uLL, 0LL);
              v16 = Handle;
              v17 = sub_1407333B0(Handle, 2u, (unsigned __int64)&v53, 0x30u, &v43);
              if ( v17 < 0 )
                KeBugCheckEx(0x9Au, 0x13uLL, v17, 1uLL, 0LL);
              v18 = 2 * DWORD2(v54) + 56;
              if ( v18 < DWORD2(v54) || v18 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v54) + 16) )
                v14 = 1;
              v19 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x2079654Bu);
              if ( !v19 || v14 )
                KeBugCheckEx(0x9Au, 0x14uLL, v18, 4uLL, 0LL);
              LODWORD(v44) = DWORD2(v55) + 32;
              v20 = (unsigned int)(DWORD2(v55) + 32) < DWORD2(v55);
              v21 = (unsigned int)(DWORD2(v55) + 32);
              v22 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x2079654Bu);
              if ( !v22 || v20 )
                KeBugCheckEx(0x9Au, 0x14uLL, v21, 5uLL, 0LL);
              dword_140C158EC = DWORD1(v54);
              v23 = 80LL * DWORD1(v54);
              if ( v23 > 0xFFFFFFFF )
                KeBugCheckEx(0x9Au, 0x14uLL, v23, 6uLL, 0LL);
              qword_140C15940 = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v23, 0x2079654Bu);
              if ( !qword_140C15940 )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * (unsigned int)dword_140C158EC, 6uLL, 0LL);
              RtlInitUnicodeString(&v52, L"ConcurrentLimit");
              v24 = 0;
              for ( i = 0; ; v24 = i )
              {
                LODWORD(Objecte) = v18;
                v33 = sub_1407C1130(v16, v24, 0, (unsigned __int64)v19, (size_t)Objecte, &v43);
                if ( v33 == -2147483622 )
                  break;
                if ( v33 < 0 )
                  KeBugCheckEx(0x9Au, 0x1AuLL, v33, 0LL, 0LL);
                *((_WORD *)v19 + ((unsigned __int64)v19[3] >> 1) + 8) = 0;
                wcscpy_s(
                  v42.Buffer,
                  (unsigned __int64)v42.MaximumLength >> 1,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
                wcscat_s(v42.Buffer, (unsigned __int64)v42.MaximumLength >> 1, asc_140B323C0);
                wcscat_s(v42.Buffer, (unsigned __int64)v42.MaximumLength >> 1, (const wchar_t *)v19 + 8);
                v26 = -1LL;
                do
                  ++v26;
                while ( v42.Buffer[v26] );
                v46 = 0LL;
                v42.Length = 2 * v26;
                LODWORD(v45) = 48;
                p_DestinationString = &v42;
                LODWORD(v48) = 576;
                v49 = 0LL;
                v27 = 80LL * i;
                v28 = sub_1406A5B90();
                if ( v28 < 0 )
                  KeBugCheckEx(0x9Au, 0x16uLL, v28, 1uLL, 0LL);
                LODWORD(Objectf) = (_DWORD)v44;
                v29 = sub_1407C9930(
                        *(HANDLE *)(v27 + qword_140C15940),
                        (unsigned __int64)&v52,
                        2u,
                        v22,
                        (size_t)Objectf,
                        (unsigned int *)&v43);
                if ( v29 < 0 )
                  KeBugCheckEx(0x9Au, 0x13uLL, v29, 2uLL, 0LL);
                v30 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v42.Length, 0x2079654Bu);
                *(_QWORD *)(v27 + qword_140C15940 + 16) = v30;
                if ( !v30 )
                  KeBugCheckEx(0x9Au, 0x14uLL, v42.Length, 7uLL, 0LL);
                wcscpy_s(v30, (unsigned __int64)v42.Length >> 1, v42.Buffer);
                v31 = v27 + qword_140C15940;
                *(_DWORD *)(v31 + 8) = *((_DWORD *)v22 + 3);
                *(_QWORD *)(v31 + 48) = v31;
                *(_QWORD *)(v31 + 24) = 0LL;
                *(_QWORD *)(v31 + 40) = sub_1409F8680;
                v32 = sub_1407E5590(
                        *(_QWORD *)v31,
                        0,
                        v31 + 24,
                        1LL,
                        (volatile void *)(v31 + 56),
                        268435461,
                        1,
                        (volatile void *)(v31 + 72),
                        4,
                        1);
                if ( v32 < 0 )
                  KeBugCheckEx(0x9Au, 0x18uLL, v32, 1uLL, 0LL);
                ++i;
              }
              ExFreePoolWithTag(v19, 0);
              ExFreePoolWithTag(v22, 0);
              ExFreePoolWithTag(v42.Buffer, 0);
              NtClose(v16);
            }
            return 1;
          }
          if ( !byte_140C0DD11 )
            KeBugCheckEx(0x9Au, 8uLL, (unsigned int)v12, 0LL, 0LL);
        }
      }
    }
  }
  return 0;
}
