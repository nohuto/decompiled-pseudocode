/*
 * XREFs of sub_14090D4E8 @ 0x14090D4E8
 * Callers:
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_1406E36C4 @ 0x1406E36C4 (sub_1406E36C4.c)
 *     sub_140718AE8 @ 0x140718AE8 (sub_140718AE8.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_1407435A8 @ 0x1407435A8 (sub_1407435A8.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14091EE14 @ 0x14091EE14 (sub_14091EE14.c)
 *     sub_140AB4138 @ 0x140AB4138 (sub_140AB4138.c)
 *     sub_140AB4178 @ 0x140AB4178 (sub_140AB4178.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 */

__int64 __fastcall sub_14090D4E8(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  UNICODE_STRING *v5; // rsi
  char v6; // r13
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  unsigned int v13; // edi
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  int v18; // eax
  __int16 v19; // bx
  unsigned __int16 v20; // bx
  unsigned __int16 v21; // cx
  __int16 v22; // cx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  ULONG_PTR v26; // [rsp+28h] [rbp-D8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v31; // [rsp+88h] [rbp-78h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING Source; // [rsp+98h] [rbp-68h] BYREF
  UUID v34[2]; // [rsp+A8h] [rbp-58h] BYREF
  UUID v35; // [rsp+C8h] [rbp-38h] BYREF
  UUID Uuid; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD v37[27]; // [rsp+F0h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v28 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  SourceString = 0LL;
  Source = 0LL;
  v5 = 0LL;
  DestinationString = 0LL;
  Uuid = 0LL;
  v35 = 0LL;
  memset(v34, 0, sizeof(v34));
  memset(v37, 0, sizeof(v37));
  BugCheckParameter3 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  sub_1407C97FC(&v28);
  v31 = 0LL;
  v6 = sub_140AB4138();
  if ( !v6 )
  {
    v7 = -1073741431;
    goto LABEL_41;
  }
  v7 = sub_1407435A8(&Uuid);
  if ( v7 >= 0 )
  {
    v7 = sub_1407435A8(&v35);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(v2 + 32);
      if ( v8 != qword_140D3CA28 )
      {
        v7 = -1073741811;
        goto LABEL_41;
      }
      *(_QWORD *)&v34[0].Data1 = a2;
      memset(v34[0].Data4, 0, 24);
      v7 = sub_14068A7FC(&v31, 2u, 0x8000, 0, 0LL, v34, 0LL, 17367041, 0LL, 0LL, 0LL, (__int64)v37);
      if ( v7 >= 0 )
      {
        v7 = sub_14068A7FC(
               &BugCheckParameter3,
               0,
               1,
               0,
               0LL,
               0LL,
               0LL,
               16908288,
               (__int64)&Uuid,
               (__int64)&v35,
               0LL,
               (__int64)v37);
        if ( v7 >= 0 )
        {
          sub_14071B6EC();
          v7 = sub_140AB43C0(a1, 0LL);
          if ( v7 >= 0 )
          {
            if ( *(_BYTE *)(v8 + 2944) == 1 )
            {
              v7 = -1073741431;
            }
            else
            {
              v7 = sub_1406D3BF0(
                     v31,
                     *(unsigned int *)(*(_QWORD *)(v31 + 64) + 36LL),
                     BugCheckParameter3,
                     0xFFFFFFFF,
                     2,
                     v26,
                     1u,
                     (unsigned int *)&BugCheckParameter4);
              if ( v7 >= 0 )
              {
                v13 = BugCheckParameter4;
                v14 = BugCheckParameter4;
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL) = BugCheckParameter4;
                v7 = sub_14091EE14(v31, *(_DWORD *)(*(_QWORD *)(v31 + 64) + 36LL), BugCheckParameter3, v14, 2, 0);
                if ( v7 >= 0 )
                {
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    v15 = sub_1406BF400(BugCheckParameter3, v13, &v28);
                  else
                    v15 = sub_1407C9820(BugCheckParameter3, v13, (unsigned int *)&v28);
                  v17 = v15;
                  v18 = sub_1407C0690(v2, &SourceString, v16);
                  v5 = (UNICODE_STRING *)SourceString;
                  v7 = v18;
                  if ( v18 >= 0 )
                  {
                    v19 = 2 * *(_WORD *)(v17 + 72);
                    if ( (*(_BYTE *)(v17 + 2) & 0x20) == 0 )
                      v19 = *(_WORD *)(v17 + 72);
                    v20 = SourceString->Length + v19 + 2;
                    DestinationString.Buffer = (wchar_t *)Allocate(PagedPool, v20, 0x20204D43u, v12);
                    if ( DestinationString.Buffer )
                    {
                      DestinationString.MaximumLength = v20;
                      DestinationString.Length = v20;
                      RtlCopyUnicodeString(&DestinationString, v5);
                      RtlAppendUnicodeToString(&DestinationString, asc_140865B20);
                      v21 = *(_WORD *)(v17 + 72);
                      if ( (*(_BYTE *)(v17 + 2) & 0x20) != 0 )
                      {
                        sub_140718AE8(
                          &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
                          DestinationString.MaximumLength - DestinationString.Length,
                          (unsigned __int8 *)(v17 + 76),
                          (unsigned __int16)(2 * v21));
                        v22 = 2 * *(_WORD *)(v17 + 72);
                        if ( (*(_BYTE *)(v17 + 2) & 0x20) == 0 )
                          v22 = *(_WORD *)(v17 + 72);
                        DestinationString.Length += v22;
                      }
                      else
                      {
                        Source.MaximumLength = *(_WORD *)(v17 + 72);
                        Source.Length = v21;
                        Source.Buffer = (wchar_t *)(v17 + 76);
                        RtlAppendUnicodeStringToString(&DestinationString, &Source);
                      }
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        sub_1406BF450(BugCheckParameter3, &v28);
                      else
                        sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v28);
                      v7 = sub_14067C9E8(
                             (__int64)&DestinationString,
                             0LL,
                             BugCheckParameter3,
                             0,
                             0x200u,
                             0,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             1,
                             v37);
                      if ( v7 >= 0 )
                      {
                        sub_1406E36C4(BugCheckParameter3, v9, v11, v12);
                        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C49860, 0LL);
                        v23 = (_QWORD *)qword_140D3CC98;
                        v24 = (_QWORD *)(BugCheckParameter3 + 1608);
                        if ( *(__int64 **)qword_140D3CC98 != &qword_140D3CC90 )
                          __fastfail(3u);
                        *v24 = &qword_140D3CC90;
                        v24[1] = v23;
                        *v23 = v24;
                        qword_140D3CC98 = (__int64)v24;
                        ExReleasePushLockEx((ULONG_PTR)&qword_140C49860, 0LL);
                        if ( !byte_140D3CA02 )
                        {
                          qword_140D3B200 = qword_140D3B068;
                          byte_140D3CA02 = 1;
                        }
                        BugCheckParameter3 = 0LL;
                        v7 = 0;
                      }
                      goto LABEL_40;
                    }
                    v7 = -1073741670;
                  }
                  if ( v17 )
                  {
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      sub_1406BF450(BugCheckParameter3, &v28);
                    else
                      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v28);
                  }
                }
              }
            }
          }
LABEL_40:
          sub_140AB4260(v10, v9, v11, v12);
        }
      }
    }
  }
LABEL_41:
  if ( BugCheckParameter3 )
    sub_14065A7E0(BugCheckParameter3);
  if ( v31 )
    sub_14065A7E0(v31);
  if ( v6 )
    sub_140AB4178();
  if ( DestinationString.Buffer )
    SeFreePrivileges((PPRIVILEGE_SET)DestinationString.Buffer);
  if ( v5 )
    sub_140346D64(v5, 0x624E4D43u);
  return (unsigned int)v7;
}
