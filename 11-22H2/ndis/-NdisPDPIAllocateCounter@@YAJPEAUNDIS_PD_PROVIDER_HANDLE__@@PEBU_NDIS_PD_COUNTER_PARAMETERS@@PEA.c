/*
 * XREFs of ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C0131DF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C00170C4 (WPP_RECORDER_SF_qqd_ea_1C00170C4.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisGetNextPDCounterId@@YAKXZ @ 0x1C007B738 (-ndisGetNextPDCounterId@@YAKXZ.c)
 *     WPP_RECORDER_SF_qdSS @ 0x1C007D3DC (WPP_RECORDER_SF_qdSS.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C0130504 (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C0135064 (-ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYP.c)
 */

__int64 __fastcall NdisPDPIAllocateCounter(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_COUNTER_PARAMETERS *a2,
        struct NDIS_PD_COUNTER_HANDLE__ **a3,
        __int64 a4)
{
  const wchar_t *v7; // r8
  int v8; // esi
  struct NDIS_PD_COUNTER_HANDLE__ *PoolWithTag; // rax
  struct NDIS_PD_COUNTER_HANDLE__ *v10; // rbx
  _QWORD *v11; // rax
  const wchar_t *CounterName; // rdx
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  struct NDIS_PD_COUNTER_HANDLE__ *v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v7 = L" ";
    WPP_RECORDER_SF_qdSS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)v7,
      a4,
      v14,
      (char)a1,
      a2->Type,
      a2->CounterName,
      v7);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_COUNTER_PARAMETERS *, struct NDIS_PD_COUNTER_HANDLE__ **))(*((_QWORD *)a1 + 10) + 40LL))(
           *((_QWORD *)a1 + 9),
           a2,
           a3);
    if ( v8 >= 0 )
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
      v10 = PoolWithTag;
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
        v11 = PoolWithTag + 18;
        v11[1] = v11;
        *v11 = v11;
        *((_OWORD *)v10 + 6) = 0LL;
        *((_WORD *)v10 + 49) = 0;
        *((_QWORD *)v10 + 13) = 0LL;
        *((_OWORD *)v10 + 7) = 0LL;
        *((_WORD *)v10 + 57) = 0;
        *((_QWORD *)v10 + 15) = 0LL;
        *((_DWORD *)v10 + 17) = ndisGetNextPDCounterId();
        CounterName = a2->CounterName;
        if ( !CounterName
          || RtlCreateUnicodeString((PUNICODE_STRING)v10 + 6, (PCWSTR)CounterName)
          && RtlCreateUnicodeString((PUNICODE_STRING)v10 + 7, (PCWSTR)a2->CounterName) )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_COUNTER_PARAMETERS *, struct NDIS_PD_COUNTER_HANDLE__ **))(*((_QWORD *)a1 + 10) + 40LL))(
                 *((_QWORD *)a1 + 9),
                 a2,
                 &v16);
          if ( v8 >= 0 )
          {
            ndisSetupPDCounter((struct NDIS_PD_COUNTER *)v10, v16, a2->Type, (struct NDIS_PD_ASSOCIATION *)a1, 0);
            *a3 = v10;
            goto LABEL_23;
          }
        }
        else
        {
          v8 = -1073741670;
        }
        NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)v10);
        goto LABEL_23;
      }
      v8 = -1073741670;
    }
    else
    {
      v8 = -1073741811;
    }
  }
LABEL_23:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = v8;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x2Bu,
      (struct _GUID *)&WPP_8a0939a2660a33c5680df34f1733eef3_Traceguids,
      (char)a1,
      (char)*a3,
      v15);
  }
  return (unsigned int)v8;
}
