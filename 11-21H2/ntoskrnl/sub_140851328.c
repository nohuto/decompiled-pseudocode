/*
 * XREFs of sub_140851328 @ 0x140851328
 * Callers:
 *     sub_140851114 @ 0x140851114 (sub_140851114.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     sub_140817CD8 @ 0x140817CD8 (sub_140817CD8.c)
 *     sub_140818900 @ 0x140818900 (sub_140818900.c)
 *     sub_1408515A8 @ 0x1408515A8 (sub_1408515A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

PVOID __fastcall sub_140851328(__int64 a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  _QWORD *v17; // rdi
  _QWORD *i; // rbx
  void *Pool2; // rdi
  void *v20; // rbx
  _WORD *v22; // rdx
  __int64 v23; // rax
  BOOLEAN NewElement[4]; // [rsp+48h] [rbp-C0h] BYREF
  ULONG BufferLengthOut[3]; // [rsp+4Ch] [rbp-BCh] BYREF
  _RTL_AVL_TABLE Table; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR SourceString[16]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD Path[8]; // [rsp+E8h] [rbp-20h] BYREF
  int v29; // [rsp+168h] [rbp+60h]
  _OWORD v30[8]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v31; // [rsp+1F8h] [rbp+F0h]

  v2 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  Path[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  v3 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  Path[1] = v2;
  v4 = *(_OWORD *)L"\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  Path[2] = v3;
  v5 = *(_OWORD *)L"ControlSet\\Control\\WMI\\AutoLogger";
  Path[3] = v4;
  v6 = *(_OWORD *)L"et\\Control\\WMI\\AutoLogger";
  Path[4] = v5;
  v7 = *(_OWORD *)L"ol\\WMI\\AutoLogger";
  Path[5] = v6;
  Path[6] = v7;
  v8 = *(_DWORD *)L"r";
  Path[7] = *(_OWORD *)L"utoLogger";
  v29 = v8;
  v9 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v30[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v10 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v30[1] = v9;
  v11 = *(_OWORD *)L"\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v30[2] = v10;
  v12 = *(_OWORD *)L"ControlSet\\Control\\WMI\\GlobalLogger";
  v30[3] = v11;
  v13 = *(_OWORD *)L"et\\Control\\WMI\\GlobalLogger";
  v30[4] = v12;
  v14 = *(_OWORD *)L"ol\\WMI\\GlobalLogger";
  v30[5] = v13;
  v15 = *(_OWORD *)L"lobalLogger";
  v16 = *(_QWORD *)L"ger";
  v30[6] = v14;
  v30[7] = v15;
  v31 = v16;
  wcscpy(SourceString, L"GlobalLogger");
  memset(&Table, 0, sizeof(Table));
  RtlInitializeGenericTableAvl(
    &Table,
    (PRTL_AVL_COMPARE_ROUTINE)sub_1403CB110,
    (PRTL_AVL_ALLOCATE_ROUTINE)sub_1403D3350,
    (PRTL_AVL_FREE_ROUTINE)sub_1403D3330,
    0LL);
  if ( a1 )
  {
    v17 = (_QWORD *)(a1 + 8);
    for ( i = (_QWORD *)*v17; i != v17; i = (_QWORD *)*i )
    {
      v22 = (_WORD *)i[2];
      v23 = -1LL;
      do
        ++v23;
      while ( v22[v23] );
      RtlInsertElementGenericTableAvl(&Table, v22, 2 * v23 + 2, NewElement);
    }
  }
  Pool2 = (void *)ExAllocatePool2(256LL, 520LL, 1953985605LL);
  if ( Pool2 )
  {
    if ( RtlGetPersistedStateLocation(
           L"ETWAutoLoggerPath",
           0LL,
           0LL,
           LocationTypeRegistry,
           (PWCHAR)Pool2,
           0x208u,
           BufferLengthOut) )
    {
      ExFreePoolWithTag(Pool2, 0x74777445u);
      Pool2 = 0LL;
    }
    v20 = (void *)ExAllocatePool2(256LL, 520LL, 1953985605LL);
    if ( v20 )
    {
      if ( RtlGetPersistedStateLocation(
             L"ETWGlobalLoggerPath",
             0LL,
             0LL,
             LocationTypeRegistry,
             (PWCHAR)v20,
             0x208u,
             BufferLengthOut) )
      {
        ExFreePoolWithTag(v20, 0x74777445u);
        v20 = 0LL;
      }
      sub_140817CD8(SourceString, (__int64)v30, (WCHAR *)v20);
      sub_1408515A8((PCWSTR)Path);
      if ( !Pool2 )
        goto LABEL_11;
      sub_1408515A8((PCWSTR)Pool2);
    }
    else if ( !Pool2 )
    {
      return sub_140818900(&Table);
    }
    ExFreePoolWithTag(Pool2, 0x74777445u);
LABEL_11:
    if ( v20 )
      ExFreePoolWithTag(v20, 0x74777445u);
  }
  return sub_140818900(&Table);
}
