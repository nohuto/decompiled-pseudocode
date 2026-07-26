/*
 * XREFs of ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x1C002FF1C
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0112FCC (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0028EFC (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 */

__int64 __fastcall ndisReadBindPaths(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _RTL_QUERY_REGISTRY_TABLE *a2,
        const WCHAR *a3)
{
  char v5; // r15
  struct _NDIS_MINIPORT_BLOCK *v6; // rsi
  NTSTATUS v7; // eax
  unsigned int v8; // edi
  const WCHAR *v9; // r14
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  unsigned int v12; // r13d
  _NDIS_BIND_PATHS *BindPaths; // rcx
  _NDIS_BIND_PATHS *Pool2; // rax
  ULONG v15; // r8d
  const WCHAR *v16; // r14
  char *v17; // r12
  char *v18; // rbx
  unsigned int v20; // eax
  _UNICODE_STRING v21; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+A8h] [rbp+48h] BYREF
  __int64 Context; // [rsp+B8h] [rbp+58h] BYREF

  SourceString = 0LL;
  v5 = 0;
  v6 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xCu,
      &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
      a1);
  Context = 0LL;
  a2->Name = L"Linkage";
  a2->QueryRoutine = 0LL;
  a2[1].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))ndisReadParameter;
  a2->Flags = 1;
  a2[1].Name = L"RootDevice";
  a2[1].Flags = 20;
  a2[1].EntryContext = &SourceString;
  a2[1].DefaultType = 0;
  a2[2].QueryRoutine = 0LL;
  a2[2].Flags = 0;
  a2[2].Name = 0LL;
  v7 = RtlQueryRegistryValuesEx(0x40000000u, a3, a2, &Context, 0LL);
  v8 = v7;
  if ( v7 == -1073741772 )
  {
    v8 = 0;
  }
  else if ( v7 < 0 || (_DWORD)Context != 7 )
  {
    if ( SourceString )
      v5 = 1;
    if ( v7 >= 0 )
      v8 = -1073741823;
    goto LABEL_20;
  }
  if ( SourceString )
    v5 = 1;
  else
    SourceString = (PCWSTR)v6->BaseName.Buffer;
  v9 = SourceString;
  v10 = 24;
  v11 = 0;
  if ( !*SourceString )
    goto LABEL_32;
  do
  {
    v12 = v11;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v9);
    ++v11;
    v10 += DestinationString.Length + ndisDeviceStr.Length + 18;
    v9 += ((unsigned __int64)DestinationString.Length + 2) >> 1;
  }
  while ( *v9 );
  v6 = a1;
  if ( v11 )
  {
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ExFreePoolWithTag(BindPaths, 0);
    Pool2 = (_NDIS_BIND_PATHS *)ExAllocatePool2(64LL, v10, 1851868238);
    a1->BindPaths = Pool2;
    if ( Pool2 )
    {
      Pool2->Number = v11;
      if ( v11 > 1 )
      {
        a1->PnPFlags |= 0x8000000u;
        a1->InfoFlags |= 0x10000000u;
      }
      v16 = SourceString;
      v17 = (char *)&a1->BindPaths[1] + 16 * v11;
      if ( *SourceString )
      {
        while ( 1 )
        {
          v21 = 0LL;
          DestinationString = 0LL;
          RtlInitUnicodeString(&v21, v16);
          if ( v21.Length > 0x1000u )
            break;
          v18 = (char *)a1->BindPaths + 16 * v12;
          v16 += ((unsigned __int64)v21.Length + 2) >> 1;
          *((_WORD *)v18 + 4) = 0;
          *((_QWORD *)v18 + 2) = v17;
          *((_WORD *)v18 + 5) = v21.Length + ndisDeviceStr.Length + 2;
          DestinationString.Length = 0;
          DestinationString.Buffer = (wchar_t *)&v17[ndisDeviceStr.Length];
          DestinationString.MaximumLength = v21.Length + 2;
          RtlCopyUnicodeString((PUNICODE_STRING)(v18 + 8), &ndisDeviceStr);
          RtlUpcaseUnicodeString(&DestinationString, &v21, 0);
          --v12;
          *((_WORD *)v18 + 4) += DestinationString.Length;
          v17 += 2 * ((unsigned __int64)*((unsigned __int16 *)v18 + 5) >> 1);
          if ( !*v16 )
            goto LABEL_19;
        }
        v8 = -1073741670;
      }
LABEL_19:
      if ( (a1->Flags & 0x80u) != 0 )
      {
        v20 = RtlUnicodeStringCopy(a1->BindPaths->Paths, &a1->MiniportName, v15);
        v8 = v20;
        if ( v20 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0xDu,
              &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
              (char)a1,
              v20);
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
  else
  {
LABEL_32:
    v8 = -1073741811;
  }
LABEL_20:
  if ( v5 )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xEu,
      &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
      v6);
  return v8;
}
