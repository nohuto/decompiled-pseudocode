/*
 * XREFs of sub_14080E438 @ 0x14080E438
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14080E438(__int64 a1, __int64 a2, wchar_t **a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  wchar_t **v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *v8; // r15
  wchar_t *v9; // rdi
  _DWORD *v10; // rsi
  int v11; // ebx
  unsigned int v12; // r13d
  wchar_t *v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  wchar_t *v16; // rax
  NTSTATUS v18; // eax
  int v19; // edx
  wchar_t *i; // rcx
  int v21; // ebx
  unsigned int v22; // eax
  unsigned int v23; // r13d
  wchar_t *Pool2; // rax
  ULONG Length[2]; // [rsp+20h] [rbp-79h]
  PULONG ResultLength; // [rsp+28h] [rbp-71h]
  __int64 v27; // [rsp+30h] [rbp-69h]
  __int64 v28; // [rsp+38h] [rbp-61h]
  ULONG v29; // [rsp+50h] [rbp-49h] BYREF
  wchar_t **v30; // [rsp+58h] [rbp-41h]
  int Data; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-31h] BYREF
  HANDLE v33; // [rsp+78h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-19h] BYREF
  int v35; // [rsp+88h] [rbp-11h]
  unsigned __int64 v36; // [rsp+90h] [rbp-9h]
  __int64 v37; // [rsp+98h] [rbp-1h]
  _BYTE KeyValueInformation[4]; // [rsp+A0h] [rbp+7h] BYREF
  int v39; // [rsp+A4h] [rbp+Bh]
  int v40; // [rsp+A8h] [rbp+Fh]
  unsigned int v41; // [rsp+ACh] [rbp+13h]

  v3 = 0LL;
  v30 = a3;
  Data = 0;
  KeyHandle = 0LL;
  v4 = -1LL;
  v29 = 0;
  v5 = a3;
  ValueName = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37 = a2;
  v8 = 0LL;
  v33 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  v11 = sub_14077F2EC(*(__int64 *)&qword_140D00AC0, *(_QWORD *)(v3 + 48), 16, 0, 131103, 0, (__int64)&KeyHandle, 0LL);
  if ( v11 >= 0 )
  {
    ValueName.Buffer = L"UniqueParentID";
    *(_DWORD *)&ValueName.Length = 1966108;
    v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &v29);
    if ( v11 >= 0 )
    {
      if ( v39 != 4 || v40 != 4 )
      {
        v11 = -1073741811;
        goto LABEL_18;
      }
      v23 = v41;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, 18LL, 1852141648LL);
      v9 = Pool2;
      if ( !Pool2 )
        goto LABEL_46;
      sub_1402E1280(Pool2, 0x12uLL, L"%x", v23);
    }
    else
    {
      *(_DWORD *)&ValueName.Length = 1966108;
      ValueName.Buffer = (wchar_t *)L"ParentIdPrefix";
      v29 = 66;
      v10 = (_DWORD *)ExAllocatePool2(256LL, 66LL, 1852141648LL);
      if ( !v10 )
        goto LABEL_46;
      v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v10, v29, &v29);
      if ( v11 >= 0 )
      {
        if ( v10[1] == 1 )
        {
          v12 = v10[2];
          v13 = (wchar_t *)ExAllocatePool2(256LL, v12, 1852141648LL);
          v9 = v13;
          if ( v13 )
          {
            sub_1402E0978(v13, v12, (__int64)(v10 + 3));
            goto LABEL_10;
          }
LABEL_46:
          v11 = -1073741670;
          goto LABEL_17;
        }
        v11 = -1073741811;
LABEL_17:
        v5 = v30;
LABEL_18:
        ZwClose(KeyHandle);
        goto LABEL_19;
      }
      v29 = 31;
      v18 = RtlUpcaseUnicodeString(&ValueName, (PCUNICODE_STRING)(v3 + 40), 1u);
      v19 = 0;
      v11 = v18;
      if ( v18 < 0 )
        goto LABEL_17;
      for ( i = ValueName.Buffer; i < &ValueName.Buffer[(unsigned __int64)ValueName.Length >> 1]; ++i )
        v19 = *i + 37 * v19;
      v21 = (int)abs32(314159269 * v19) % 1000000007;
      v35 = v21;
      RtlFreeUnicodeString(&ValueName);
      v36 = 2 * v29;
      v9 = (wchar_t *)ExAllocatePool2(256LL, v36, 1852141648LL);
      if ( !v9 )
        goto LABEL_46;
      LODWORD(ResultLength) = *(_DWORD *)(v3 + 152);
      Length[0] = v21;
      sub_1402E1280(v9, v36, L"%s.%x.%x", L"NextParentID", *(_QWORD *)Length, ResultLength);
      v11 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 5, (__int64)&v33);
      if ( v11 < 0 )
        goto LABEL_17;
      RtlInitUnicodeString(&ValueName, v9);
      if ( ZwQueryValueKey(v33, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &v29) < 0
        || v39 != 4
        || (v22 = v41, v40 != 4) )
      {
        v22 = 0;
      }
      Data = v22 + 1;
      v11 = ZwSetValueKey(v33, &ValueName, 0, 4u, &Data, 4u);
      if ( v11 < 0 )
        goto LABEL_17;
      ValueName.Buffer = (wchar_t *)L"ParentIdPrefix";
      --Data;
      LODWORD(v28) = v35;
      *(_DWORD *)&ValueName.Length = 1966108;
      LODWORD(v27) = *(_DWORD *)(v3 + 152);
      v33 = v9;
      sub_1402DFBC4(v9, v36 >> 1, &v33, 0LL, 0, L"%x&%x&%x", v27, v28, Data);
      v29 = (((_BYTE *)v33 - (_BYTE *)v9) >> 1) + 1;
      v11 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v9, 2 * v29);
      if ( v11 < 0 )
        goto LABEL_17;
    }
LABEL_10:
    v14 = v37;
    if ( v37 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v37 + 2 * v15) );
    }
    else
    {
      LODWORD(v15) = 0;
    }
    do
      ++v4;
    while ( v9[v4] );
    v29 = v4 + v15 + 2;
    v16 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v29, 1852141648LL);
    v8 = v16;
    if ( v16 )
    {
      if ( v14 )
        sub_1402E0198(v16, v29, L"%s&%s", v9, v14);
      else
        sub_1402E0200(v16, v29, (__int64)v9);
      goto LABEL_17;
    }
    goto LABEL_46;
  }
LABEL_19:
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *v5 = v8;
  return (unsigned int)v11;
}
