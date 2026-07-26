/*
 * XREFs of ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C0126210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0016E68 (WPP_RECORDER_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisGetNextPDCounterId@@YAKXZ @ 0x1C0076278 (-ndisGetNextPDCounterId@@YAKXZ.c)
 *     WPP_RECORDER_SF_qdSS @ 0x1C0077F18 (WPP_RECORDER_SF_qdSS.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C0124944 (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C01293C4 (-ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYP.c)
 */

__int64 __fastcall NdisPDPIAllocateCounter(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_COUNTER_PARAMETERS *a2,
        struct NDIS_PD_COUNTER_HANDLE__ **a3)
{
  const wchar_t *v6; // r9
  int v7; // esi
  struct NDIS_PD_COUNTER_HANDLE__ *PoolWithTag; // rax
  struct NDIS_PD_COUNTER_HANDLE__ *v9; // rbx
  _QWORD *v10; // rax
  const wchar_t *CounterName; // rdx
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  struct NDIS_PD_COUNTER_HANDLE__ *v15; // [rsp+80h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v6 = L" ";
    WPP_RECORDER_SF_qdSS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      (__int64)v6,
      v13,
      (char)a1,
      a2->Type,
      a2->CounterName,
      v6);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_COUNTER_PARAMETERS *, struct NDIS_PD_COUNTER_HANDLE__ **))(*((_QWORD *)a1 + 10) + 40LL))(
           *((_QWORD *)a1 + 9),
           a2,
           a3);
    if ( v7 >= 0 )
      *((_QWORD *)*a3 + 5) = a1;
  }
  else
  {
    *a3 = 0LL;
    if ( a2->Header.Type == 0x80
      && a2->Header.Revision == 1
      && a2->Header.Size >= 0x14u
      && !a2->Flags
      && (unsigned int)(a2->Type - 1) <= 2 )
    {
      PoolWithTag = (struct NDIS_PD_COUNTER_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6E41444Eu);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        *((_QWORD *)PoolWithTag + 4) = 0LL;
        *((_QWORD *)PoolWithTag + 5) = 0LL;
        *((_QWORD *)PoolWithTag + 6) = 0LL;
        *((_DWORD *)PoolWithTag + 14) = 0;
        *((_BYTE *)PoolWithTag + 60) = 0;
        *((_QWORD *)PoolWithTag + 8) = 0LL;
        *((_DWORD *)PoolWithTag + 22) = 0;
        *((_QWORD *)PoolWithTag + 1) = 0LL;
        *(_QWORD *)PoolWithTag = 0LL;
        *((_QWORD *)PoolWithTag + 3) = 0LL;
        *((_QWORD *)PoolWithTag + 2) = 0LL;
        v10 = PoolWithTag + 18;
        v10[1] = v10;
        *v10 = v10;
        *((_OWORD *)v9 + 6) = 0LL;
        *((_WORD *)v9 + 49) = 0;
        *((_QWORD *)v9 + 13) = 0LL;
        *((_OWORD *)v9 + 7) = 0LL;
        *((_WORD *)v9 + 57) = 0;
        *((_QWORD *)v9 + 15) = 0LL;
        *((_DWORD *)v9 + 17) = ndisGetNextPDCounterId();
        CounterName = a2->CounterName;
        if ( !CounterName
          || RtlCreateUnicodeString((PUNICODE_STRING)v9 + 6, (PCWSTR)CounterName)
          && RtlCreateUnicodeString((PUNICODE_STRING)v9 + 7, (PCWSTR)a2->CounterName) )
        {
          v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_COUNTER_PARAMETERS *, struct NDIS_PD_COUNTER_HANDLE__ **))(*((_QWORD *)a1 + 10) + 40LL))(
                 *((_QWORD *)a1 + 9),
                 a2,
                 &v15);
          if ( v7 >= 0 )
          {
            ndisSetupPDCounter((struct NDIS_PD_COUNTER *)v9, v15, a2->Type, (struct NDIS_PD_ASSOCIATION *)a1, 0);
            *a3 = v9;
            goto LABEL_23;
          }
        }
        else
        {
          v7 = -1073741670;
        }
        NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)v9);
        goto LABEL_23;
      }
      v7 = -1073741670;
    }
    else
    {
      v7 = -1073741811;
    }
  }
LABEL_23:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v7;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x2Bu,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      (char)*a3,
      v14);
  }
  return (unsigned int)v7;
}
