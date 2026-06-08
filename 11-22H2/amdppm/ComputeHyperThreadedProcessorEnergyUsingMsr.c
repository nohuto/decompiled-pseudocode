/*
 * XREFs of ComputeHyperThreadedProcessorEnergyUsingMsr @ 0x1C0001270
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall ComputeHyperThreadedProcessorEnergyUsingMsr(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r14
  __int64 *v6; // rsi
  int v7; // r15d
  unsigned __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  struct _PROCESSOR_NUMBER v11; // r13d
  struct _PROCESSOR_NUMBER v12; // r15d
  unsigned int v13; // r14d
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int8 Number; // [rsp+30h] [rbp-71h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-6Dh] BYREF
  unsigned int v22; // [rsp+38h] [rbp-69h] BYREF
  unsigned int FirstSetLeftGroupAffinity; // [rsp+3Ch] [rbp-65h] BYREF
  int v24; // [rsp+40h] [rbp-61h]
  int v25; // [rsp+48h] [rbp-59h] BYREF
  __int64 v26; // [rsp+50h] [rbp-51h]
  __int64 v27; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int64 *v28; // [rsp+60h] [rbp-41h]
  __int128 v29; // [rsp+68h] [rbp-39h] BYREF
  __int64 v30; // [rsp+78h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-21h] BYREF
  unsigned __int8 *p_Number; // [rsp+90h] [rbp-11h]
  __int64 v33; // [rsp+98h] [rbp-9h]
  int *v34; // [rsp+A0h] [rbp-1h]
  __int64 v35; // [rsp+A8h] [rbp+7h]
  __int64 *v36; // [rsp+B0h] [rbp+Fh]
  __int64 v37; // [rsp+B8h] [rbp+17h]

  v30 = 0LL;
  FirstSetLeftGroupAffinity = 0;
  v5 = 0LL;
  v28 = a5;
  v6 = &qword_1C0012518;
  v24 = a1;
  v29 = 0LL;
  v7 = a1;
LABEL_2:
  v26 = v5;
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
    if ( v6 == &qword_1C0012518 )
      break;
    if ( *((unsigned __int8 *)v6 + 344) == v7 )
    {
      FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity(v6 + 148);
      if ( FirstSetLeftGroupAffinity == *((_DWORD *)v6 + 6) )
      {
        v9 = 0LL;
        v22 = 0;
        v10 = 0LL;
        v11 = 0;
        KeInitializeEnumerationContextFromGroup(&v29, v6 + 148);
        if ( !(unsigned int)KeEnumerateNextProcessor(&FirstSetLeftGroupAffinity, &v29) )
        {
          v12 = 0;
          v13 = 0;
          do
          {
            v14 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + FirstSetLeftGroupAffinity);
            v15 = *(_QWORD *)(v14 + 368);
            v16 = *(_QWORD *)(v15 + 128);
            v17 = *(unsigned int *)(v15 + 32);
            if ( v10 < v16 || v10 == v16 && v13 < (unsigned int)v17 )
            {
              v10 = *(_QWORD *)(v15 + 128);
              v13 = *(_DWORD *)(v15 + 32);
            }
            v18 = *(_QWORD *)(v15 + 120);
            if ( v9 < v18 || v9 == v18 && *(unsigned int *)&v12 < *(_DWORD *)(v15 + 24) )
            {
              v9 = *(_QWORD *)(v15 + 120);
              v12 = *(struct _PROCESSOR_NUMBER *)(v15 + 24);
            }
            *(_QWORD *)(v15 + 120) = v16;
            *(_QWORD *)(v15 + 24) = v17;
            v27 = v17;
            v25 = -1073675622;
            LOWORD(v22) = 0;
            Number = 0;
            ProcNumber = 0;
            if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_ENERGY_COUNTER_UPDATE)
              && KeGetProcessorNumberFromIndex(*(ULONG *)(v14 + 56), &ProcNumber) >= 0 )
            {
              LOWORD(v22) = ProcNumber.Group;
              Number = ProcNumber.Number;
              UserData.Ptr = (unsigned __int64)&v22;
              p_Number = &Number;
              v34 = &v25;
              v36 = &v27;
              *(_QWORD *)&UserData.Size = 2LL;
              v33 = 1LL;
              v35 = 4LL;
              v37 = 8LL;
              EtwWrite(
                (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                &PPM_ETW_ENERGY_COUNTER_UPDATE,
                0LL,
                (ULONG)4,
                &UserData);
            }
          }
          while ( !(unsigned int)KeEnumerateNextProcessor(&FirstSetLeftGroupAffinity, &v29) );
          ProcNumber = v12;
          v7 = v24;
          v11 = ProcNumber;
          v22 = v13;
          v5 = v26;
        }
        v19 = v22 - *(_DWORD *)&v11;
        if ( v22 <= *(_DWORD *)&v11 )
          v19 = 0LL;
        v5 += v19;
        goto LABEL_2;
      }
    }
  }
  result = (unsigned __int64)(1000000 * v5) >> SLOBYTE(WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *v28 = result;
  return result;
}
