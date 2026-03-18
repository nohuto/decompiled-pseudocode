/*
 * XREFs of ACPIBusIrpQueryDeviceId @ 0x1C0092A34
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0093F10 (ACPIBusIrpQueryId.c)
 * Callees:
 *     AMLIGetNSObjectType @ 0x1C0001738 (AMLIGetNSObjectType.c)
 *     RtlStringCbPrintfExW @ 0x1C0006798 (RtlStringCbPrintfExW.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     RtlStringCbPrintfW @ 0x1C004CF8C (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C004D1E8 (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1C0091B94 (ACPIValidateStringVendorDeviceIdFormat.c)
 *     ACPIAllocateBuffer @ 0x1C0092FC8 (ACPIAllocateBuffer.c)
 */

__int64 __fastcall ACPIBusIrpQueryDeviceId(wchar_t **a1, size_t *a2, _QWORD *a3)
{
  void *v6; // r13
  int v7; // esi
  wchar_t *v8; // rax
  NTSTRSAFE_PWSTR v9; // r15
  size_t v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  int v14; // eax
  size_t v15; // rdx
  const char *v17; // rax
  __int64 v18; // rdx
  const char *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  void *Pool2; // rax
  size_t v24; // r8
  char *v25; // rdx
  __int64 v26; // rdx
  void *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  void *v30; // rax
  int dwFlags; // [rsp+20h] [rbp-58h]
  int pszFormat; // [rsp+28h] [rbp-50h]
  int v33; // [rsp+30h] [rbp-48h]
  size_t pcbRemaining; // [rsp+60h] [rbp-18h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd[2]; // [rsp+68h] [rbp-10h] BYREF
  size_t Size; // [rsp+C0h] [rbp+48h] BYREF
  PVOID P; // [rsp+C8h] [rbp+50h] BYREF
  void *Src; // [rsp+D0h] [rbp+58h] BYREF
  size_t v39; // [rsp+D8h] [rbp+60h] BYREF

  Src = 0LL;
  v6 = 0LL;
  Size = 0LL;
  v7 = 0;
  P = 0LL;
  v39 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, 660LL);
  *a1 = v8;
  v9 = v8;
  v10 = *a2;
  ppszDestEnd[0] = v8;
  pcbRemaining = v10;
  if ( !v8 )
    goto LABEL_22;
  v11 = a3[95];
  if ( v11 && (unsigned int)AMLIGetNSObjectType(v11) == 12 )
  {
    v7 = ACPIGet((__int64)a3, 1145653343, 268959798, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
    if ( v7 < 0 )
      goto LABEL_23;
    if ( v10 < Size )
      goto LABEL_22;
    memmove(v9, Src, Size);
    v15 = Size;
    if ( v10 >= Size )
    {
LABEL_10:
      v7 = RtlStringCbPrintfExW(&v9[v15 >> 1], v10 - v15, ppszDestEnd, &pcbRemaining, 0, &word_1C006FA08);
      goto LABEL_11;
    }
  }
  else
  {
    v12 = a3[125];
    v13 = -1LL;
    if ( (v12 & 8) == 0 || (v12 & 0x10) == 0 )
      goto LABEL_5;
    v21 = a3[76];
    if ( v21 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_BYTE *)(v21 + v22) );
      v39 = v22;
      Pool2 = (void *)ExAllocatePool2(256LL, v22, 1114661697LL);
      P = Pool2;
      if ( !Pool2 )
        goto LABEL_15;
      v24 = v39;
      v25 = (char *)a3[76];
      if ( v39 >= 5 )
      {
        v24 = v39 - 5;
        v39 -= 5LL;
        v25 += 5;
      }
      memmove(Pool2, v25, v24);
      if ( !ACPIValidateStringVendorDeviceIdFormat((__int64)P, v39) )
        goto LABEL_5;
      v27 = (void *)ExAllocatePool2(256LL, v26, 1114661697LL);
      v6 = v27;
      if ( !v27 )
        goto LABEL_13;
      if ( v39 == 7 )
      {
        v28 = 3LL;
      }
      else
      {
        v28 = 4LL;
        if ( v39 <= 4 )
        {
LABEL_42:
          v33 = (int)P;
          v7 = RtlStringCbPrintfExW(v9, v10, ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S&REV_%04X");
          if ( v7 < 0 )
            goto LABEL_23;
          if ( !ppszDestEnd[0] || pcbRemaining < 2 )
          {
LABEL_52:
            ExFreePoolWithTag(v6, 0x53706341u);
            goto LABEL_13;
          }
          v9 = ppszDestEnd[0] + 1;
          v10 = pcbRemaining - 2;
LABEL_5:
          v14 = ACPIGet((__int64)a3, 1145653343, 268959798, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
          v7 = v14;
          if ( v14 != -1073741661 )
          {
            if ( v14 < 0 )
              goto LABEL_23;
            goto LABEL_7;
          }
          v29 = a3[76];
          if ( v29 )
          {
            do
              ++v13;
            while ( *(_BYTE *)(v29 + v13) );
            Size = 2 * v13 + 2;
            v30 = (void *)ExAllocatePool2(256LL, Size, 1399874369LL);
            Src = v30;
            if ( v30 )
            {
              RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v30, Size, L"%S", a3[76]);
              v7 = 0;
LABEL_7:
              if ( v10 >= Size )
              {
                memmove(v9, Src, Size);
                if ( v9 )
                {
                  v15 = Size;
                  if ( v10 >= Size )
                    goto LABEL_10;
                }
LABEL_11:
                if ( v7 >= 0 )
                  goto LABEL_12;
                goto LABEL_23;
              }
            }
LABEL_22:
            v7 = -1073741670;
          }
LABEL_23:
          v17 = (const char *)&unk_1C006FB8B;
          v18 = 0LL;
          v19 = (const char *)&unk_1C006FB8B;
          if ( a3 )
          {
            v20 = a3[1];
            v18 = (__int64)a3;
            if ( (v20 & 0x200000000000LL) != 0 )
            {
              v17 = (const char *)a3[76];
              if ( (v20 & 0x400000000000LL) != 0 )
                v19 = (const char *)a3[77];
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qdLqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v18,
              (__int64)&WPP_RECORDER_INITIALIZED,
              0x28u,
              dwFlags,
              pszFormat,
              v33,
              v7,
              v18,
              v17,
              v19);
LABEL_12:
          if ( !v6 )
            goto LABEL_13;
          goto LABEL_52;
        }
      }
      memmove(v27, (char *)P + v28, v39 - v28);
      *((_BYTE *)P + v28) = 0;
      goto LABEL_42;
    }
    v7 = ACPIGet((__int64)a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v39);
    if ( v7 < 0 )
      goto LABEL_11;
  }
LABEL_13:
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
LABEL_15:
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v7;
}
