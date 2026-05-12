/*
 * XREFs of RaGetUnitPerfCounterIdString @ 0x1C00571FC
 * Callers:
 *     RaUnitSendInstanceCounters @ 0x1C005E484 (RaUnitSendInstanceCounters.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaTrimString @ 0x1C0057758 (RaTrimString.c)
 *     RtlStringCbPrintfExA @ 0x1C005B994 (RtlStringCbPrintfExA.c)
 *     RtlUnicodeStringCatString @ 0x1C005BC8C (RtlUnicodeStringCatString.c)
 */

__int64 __fastcall RaGetUnitPerfCounterIdString(__int64 a1, struct _UNICODE_STRING *a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int16 v7; // bx
  __int16 v8; // bx
  char *Pool; // r14
  void *v10; // r15
  NTSTATUS v11; // eax
  char *v12; // rcx
  char *v13; // rcx
  NTSTATUS v14; // eax
  const wchar_t *v15; // rdx
  PVOID v17[2]; // [rsp+58h] [rbp-39h] BYREF
  PVOID v18[2]; // [rsp+68h] [rbp-29h] BYREF
  PVOID P[2]; // [rsp+78h] [rbp-19h] BYREF
  struct _STRING DestinationString; // [rsp+88h] [rbp-9h] BYREF
  struct _STRING v21; // [rsp+98h] [rbp+7h] BYREF
  struct _STRING v22; // [rsp+A8h] [rbp+17h] BYREF
  struct _STRING SourceString; // [rsp+B8h] [rbp+27h] BYREF

  v21 = 0LL;
  *(_OWORD *)v17 = 0LL;
  v22 = 0LL;
  *(_OWORD *)P = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)v18 = 0LL;
  RtlInitAnsiString(&DestinationString, (PCSZ)(a1 + 160));
  v4 = RaTrimString(1229218130LL, &DestinationString, v18);
  if ( v4 >= 0 )
  {
    RtlInitAnsiString(&v21, (PCSZ)(a1 + 169));
    v4 = RaTrimString(1229218130LL, &v21, v17);
    if ( v4 >= 0 )
    {
      if ( !v18[1] && !v17[1] )
      {
        v4 = -1073741811;
        goto LABEL_43;
      }
      if ( *(_DWORD *)(a1 + 3344) == 17 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5016LL);
        if ( v5 )
        {
          v6 = -1LL;
          do
            ++v6;
          while ( *(_WORD *)(v5 + 2 * v6) );
        }
        else
        {
          LOWORD(v6) = 0;
        }
        v7 = v6 + LOWORD(v17[0]) + 4;
      }
      else
      {
        RtlInitAnsiString(&v22, (PCSZ)(a1 + 186));
        v4 = RaTrimString(1229218130LL, &v22, P);
        if ( v4 < 0 )
          goto LABEL_43;
        if ( LOWORD(P[0]) )
          v8 = LOWORD(P[0]) + LOWORD(v18[0]) + 5;
        else
          v8 = LOWORD(v18[0]) + 32;
        v7 = LOWORD(v17[0]) + v8;
      }
      Pool = (char *)RaidAllocatePool(64LL, v7, 1229218130LL, *(_QWORD *)(a1 + 8));
      if ( Pool )
      {
        v10 = (void *)RaidAllocatePool(64LL, 2LL * v7, 1229218130LL, *(_QWORD *)(a1 + 8));
        if ( v10 )
        {
          if ( *(_DWORD *)(a1 + 3344) == 17 )
          {
            v11 = RtlStringCbPrintfExA(Pool, v7, 0LL, 0LL, 0, "%s : ", (const char *)v17[1]);
          }
          else if ( LOWORD(P[0]) )
          {
            if ( LOWORD(v18[0]) )
            {
              v13 = byte_1C0081FE6;
              if ( v17[1] )
                v13 = (char *)v17[1];
              v11 = RtlStringCbPrintfExA(Pool, v7, 0LL, 0LL, 0, "%s %s : %s", v18[1], v13, P[1]);
            }
            else
            {
              v11 = RtlStringCbPrintfExA(Pool, v7, 0LL, 0LL, 0, "%s : %s", v17[1], P[1]);
            }
          }
          else if ( LOWORD(v18[0]) )
          {
            v12 = byte_1C0081FE6;
            if ( v17[1] )
              v12 = (char *)v17[1];
            v11 = RtlStringCbPrintfExA(
                    Pool,
                    v7,
                    0LL,
                    0LL,
                    0,
                    "%s %s : LUN %d",
                    v18[1],
                    v12,
                    *(unsigned __int8 *)(a1 + 98));
          }
          else
          {
            v11 = RtlStringCbPrintfExA(Pool, v7, 0LL, 0LL, 0, "%s : LUN %d", v17[1], *(unsigned __int8 *)(a1 + 98));
          }
          v4 = v11;
          if ( v11 < 0 )
          {
            ExFreePoolWithTag(v10, 0x49446152u);
          }
          else
          {
            a2->Buffer = (wchar_t *)v10;
            a2->MaximumLength = 2 * v7;
            a2->Length = 0;
            RtlInitAnsiString(&SourceString, Pool);
            v14 = RtlAnsiStringToUnicodeString(a2, &SourceString, 0);
            v4 = v14;
            if ( *(_DWORD *)(a1 + 3344) == 17 && v14 >= 0 )
            {
              v15 = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 5016LL);
              if ( v15 )
                RtlUnicodeStringCatString(a2, v15);
            }
          }
        }
        else
        {
          v4 = -1073741801;
        }
        ExFreePoolWithTag(Pool, 0x49446152u);
      }
      else
      {
        v4 = -1073741801;
      }
    }
  }
LABEL_43:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x49446152u);
  if ( v17[1] )
    ExFreePoolWithTag(v17[1], 0x49446152u);
  if ( v18[1] )
    ExFreePoolWithTag(v18[1], 0x49446152u);
  return (unsigned int)v4;
}
