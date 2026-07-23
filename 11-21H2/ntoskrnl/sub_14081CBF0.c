/*
 * XREFs of sub_14081CBF0 @ 0x14081CBF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224DF0 @ 0x140224DF0 (sub_140224DF0.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140395A18 @ 0x140395A18 (sub_140395A18.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405D07C8 @ 0x1405D07C8 (sub_1405D07C8.c)
 *     sub_1405D18CC @ 0x1405D18CC (sub_1405D18CC.c)
 *     sub_1405DEB88 @ 0x1405DEB88 (sub_1405DEB88.c)
 *     sub_1406DFE10 @ 0x1406DFE10 (sub_1406DFE10.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     sub_1407EFFBC @ 0x1407EFFBC (sub_1407EFFBC.c)
 *     sub_14081B500 @ 0x14081B500 (sub_14081B500.c)
 *     sub_1409898D8 @ 0x1409898D8 (sub_1409898D8.c)
 *     sub_14098BADC @ 0x14098BADC (sub_14098BADC.c)
 *     sub_140991E18 @ 0x140991E18 (sub_140991E18.c)
 *     sub_1409922E8 @ 0x1409922E8 (sub_1409922E8.c)
 *     sub_140992B80 @ 0x140992B80 (sub_140992B80.c)
 *     sub_140993038 @ 0x140993038 (sub_140993038.c)
 *     sub_140993308 @ 0x140993308 (sub_140993308.c)
 *     sub_140994114 @ 0x140994114 (sub_140994114.c)
 *     sub_1409F7C6C @ 0x1409F7C6C (sub_1409F7C6C.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14081CBF0(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        int *CallbackContext)
{
  PVOID *i; // rbx
  PVOID *v8; // rbx
  __int64 v9; // rsi
  _DWORD *v10; // rax
  int v11; // ecx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // rsi
  unsigned int v16; // r15d
  char *v17; // r14
  unsigned int v18; // r12d
  char *v19; // r13
  ULONG v20; // ebx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // [rsp+30h] [rbp-30h] BYREF
  BOOL v25; // [rsp+34h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-20h] BYREF

  if ( (_DWORD)ControlCode == 2 )
  {
    v24 = 0;
    if ( CallbackContext == &dword_140C03A00 )
    {
      if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
        sub_14081B500(5, 1);
      if ( qword_140C1C948 )
        sub_1405DEB88((unsigned __int16 *)qword_140C1C948);
    }
    else
    {
      sub_1409F7C6C(SourceId, ControlCode, Level, MatchAnyKeyword);
      sub_140224DF0(1, dword_140C0B8AC);
      sub_140753094(0);
      for ( i = (PVOID *)qword_140C242A0; i != &qword_140C242A0; i = (PVOID *)*i )
        sub_1407EFFBC(1, (__int64)i);
      sub_1402935D0((ULONG_PTR)&qword_140C24280);
      UserData.Size = 4;
      UserData.Reserved = 0;
      v25 = dword_140C232CC == 0;
      UserData.Ptr = (ULONGLONG)&v25;
      EtwWrite(RegHandle, &stru_140038080, 0LL, 1u, &UserData);
      ExAcquireFastMutex(&stru_140C237C0);
      v8 = (PVOID *)qword_140C22420;
      if ( qword_140C22420 != &qword_140C22420 )
      {
        v9 = dword_140C232CC;
        do
        {
          v10 = v8[v9 + 8];
          if ( v10 )
            sub_1406DFE10(1, (ULONGLONG)(v8 + 4), v10[1], (__int64)(v10 + 3));
          v8 = (PVOID *)*v8;
        }
        while ( v8 != &qword_140C22420 );
      }
      KeReleaseGuardedMutex(&stru_140C237C0);
      sub_1405D07C8();
      P = 0LL;
      sub_140A48330(v11);
      v12 = sub_1409898D8(&P, &v24);
      sub_140A47CF8(v14, v13);
      v15 = P;
      if ( v12 >= 0 )
      {
        v16 = *(_DWORD *)P;
        v17 = (char *)P + 4;
        v18 = 0;
        if ( *(_DWORD *)P )
        {
          v19 = (char *)P + v24;
          do
          {
            if ( v17 >= v19 )
              break;
            v20 = *((_DWORD *)v17 + 3);
            UserData.Reserved = 0;
            v20 += 16;
            UserData.Size = v20;
            UserData.Ptr = (ULONGLONG)v17;
            EtwWrite(RegHandle, &stru_1400391B8, 0LL, 1u, &UserData);
            ++v18;
            v17 += v20;
          }
          while ( v18 < v16 );
        }
      }
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( !_InterlockedCompareExchange(&dword_140C22040, 1, 0) )
        ExQueueWorkItem(&stru_140C22020, DelayedWorkQueue);
      if ( CallbackContext == (int *)&RegHandle )
        sub_140395A18(0LL);
      sub_140992B80();
      sub_14098BADC();
      sub_140A48330(v21);
      sub_140994114();
      sub_140991E18();
      sub_140A47CF8(v23, v22);
      sub_1409922E8();
      sub_1405D18CC();
      sub_1402D66A8((ULONG_PTR)&qword_140C1FF50);
      sub_140993038();
      sub_1402935D0((ULONG_PTR)&qword_140C1FF50);
      sub_1402D66A8((ULONG_PTR)&qword_140C1FC30);
      sub_140993308();
      sub_1402935D0((ULONG_PTR)&qword_140C1FC30);
    }
  }
}
