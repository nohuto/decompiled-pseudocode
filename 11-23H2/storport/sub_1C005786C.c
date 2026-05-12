/*
 * XREFs of sub_1C005786C @ 0x1C005786C
 * Callers:
 *     sub_1C005EAF4 @ 0x1C005EAF4 (sub_1C005EAF4.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0057DC8 @ 0x1C0057DC8 (sub_1C0057DC8.c)
 *     sub_1C005C004 @ 0x1C005C004 (sub_1C005C004.c)
 *     sub_1C005C2FC @ 0x1C005C2FC (sub_1C005C2FC.c)
 */

__int64 __fastcall sub_1C005786C(__int64 a1, struct _UNICODE_STRING *a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int16 v7; // bx
  __int16 v8; // bx
  char *v9; // r14
  void *v10; // r15
  int v11; // eax
  char *v12; // rcx
  char *v13; // rcx
  NTSTATUS v14; // eax
  PVOID v16[2]; // [rsp+58h] [rbp-39h] BYREF
  PVOID v17[2]; // [rsp+68h] [rbp-29h] BYREF
  PVOID P[2]; // [rsp+78h] [rbp-19h] BYREF
  struct _STRING DestinationString; // [rsp+88h] [rbp-9h] BYREF
  struct _STRING v20; // [rsp+98h] [rbp+7h] BYREF
  struct _STRING v21; // [rsp+A8h] [rbp+17h] BYREF
  struct _STRING SourceString; // [rsp+B8h] [rbp+27h] BYREF

  v20 = 0LL;
  *(_OWORD *)v16 = 0LL;
  v21 = 0LL;
  *(_OWORD *)P = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)v17 = 0LL;
  RtlInitAnsiString(&DestinationString, (PCSZ)(a1 + 160));
  v4 = sub_1C0057DC8(1229218130LL, &DestinationString, v17);
  if ( v4 >= 0 )
  {
    RtlInitAnsiString(&v20, (PCSZ)(a1 + 169));
    v4 = sub_1C0057DC8(1229218130LL, &v20, v16);
    if ( v4 >= 0 )
    {
      if ( !v17[1] && !v16[1] )
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
        v7 = v6 + LOWORD(v16[0]) + 4;
      }
      else
      {
        RtlInitAnsiString(&v21, (PCSZ)(a1 + 186));
        v4 = sub_1C0057DC8(1229218130LL, &v21, P);
        if ( v4 < 0 )
          goto LABEL_43;
        if ( LOWORD(P[0]) )
          v8 = LOWORD(P[0]) + LOWORD(v17[0]) + 5;
        else
          v8 = LOWORD(v17[0]) + 32;
        v7 = LOWORD(v16[0]) + v8;
      }
      v9 = (char *)sub_1C0007CF4(64LL, v7, 1229218130LL, *(_QWORD *)(a1 + 8));
      if ( v9 )
      {
        v10 = (void *)sub_1C0007CF4(64LL, 2LL * v7, 1229218130LL, *(_QWORD *)(a1 + 8));
        if ( v10 )
        {
          if ( *(_DWORD *)(a1 + 3344) == 17 )
          {
            v11 = sub_1C005C004((_DWORD)v9, v7, 0, 0, 0, "%s : ", (const char *)v16[1]);
          }
          else if ( LOWORD(P[0]) )
          {
            if ( LOWORD(v17[0]) )
            {
              v13 = byte_1C0082FE6;
              if ( v16[1] )
                v13 = (char *)v16[1];
              v11 = sub_1C005C004((_DWORD)v9, v7, 0, 0, 0, "%s %s : %s", v17[1], v13, P[1]);
            }
            else
            {
              v11 = sub_1C005C004((_DWORD)v9, v7, 0, 0, 0, "%s : %s", v16[1], P[1]);
            }
          }
          else if ( LOWORD(v17[0]) )
          {
            v12 = byte_1C0082FE6;
            if ( v16[1] )
              v12 = (char *)v16[1];
            v11 = sub_1C005C004((_DWORD)v9, v7, 0, 0, 0, "%s %s : LUN %d", v17[1], v12, *(unsigned __int8 *)(a1 + 98));
          }
          else
          {
            v11 = sub_1C005C004((_DWORD)v9, v7, 0, 0, 0, "%s : LUN %d", v16[1], *(unsigned __int8 *)(a1 + 98));
          }
          v4 = v11;
          if ( v11 < 0 )
          {
            ExFreePoolWithTag(v10, 0x49446152u);
          }
          else
          {
            a2->Buffer = (PWSTR)v10;
            a2->MaximumLength = 2 * v7;
            a2->Length = 0;
            RtlInitAnsiString(&SourceString, v9);
            v14 = RtlAnsiStringToUnicodeString(a2, &SourceString, 0);
            v4 = v14;
            if ( *(_DWORD *)(a1 + 3344) == 17 && v14 >= 0 && *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5016LL) )
              sub_1C005C2FC(a2);
          }
        }
        else
        {
          v4 = -1073741801;
        }
        ExFreePoolWithTag(v9, 0x49446152u);
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
  if ( v16[1] )
    ExFreePoolWithTag(v16[1], 0x49446152u);
  if ( v17[1] )
    ExFreePoolWithTag(v17[1], 0x49446152u);
  return (unsigned int)v4;
}
