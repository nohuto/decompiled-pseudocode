/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A0444
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03993EC (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004ED14 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0067B00 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0068D8C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0069240 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     MonitorSerializeMonitor @ 0x1C03B0C40 (MonitorSerializeMonitor.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // r9
  unsigned __int8 v27; // dl
  _BYTE *v28; // r14
  unsigned __int8 v29; // di
  _BYTE *v30; // rcx
  char *v31; // rsi
  __int64 v32; // rbx
  _QWORD *v33; // rax
  _QWORD v34[2]; // [rsp+30h] [rbp-40h] BYREF
  int v35; // [rsp+40h] [rbp-30h]
  _QWORD v36[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-18h]
  int v38; // [rsp+60h] [rbp-10h]
  __int64 v39; // [rsp+68h] [rbp-8h]
  __int64 (__fastcall ***v40)(_QWORD, __int64); // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int64 v41; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+58h]

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v35 = 0;
    v34[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v7 = *(_QWORD *)(a1 + 24);
    v34[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v36[1] = v36;
    v8 = v36;
    v37 = 0LL;
    v36[0] = v36;
    v38 = 2;
    v39 = 0LL;
    if ( v7 != a1 + 24 )
    {
      v9 = v7 - 8;
      if ( v9 )
      {
        do
        {
          if ( *(_QWORD *)(v9 + 112) )
          {
            v10 = operator new[](0x38uLL, 0x4E506456u, 256LL, a4);
            v11 = (_QWORD *)v10;
            if ( !v10 )
            {
              v40 = 0LL;
              WdLogSingleEntry2(6LL, 56LL, v9);
              LODWORD(v16) = -1073741801;
              goto LABEL_37;
            }
            *(_QWORD *)(v10 + 8) = 0LL;
            *(_QWORD *)(v10 + 16) = 0LL;
            *(_QWORD *)v10 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
            *(_QWORD *)(v10 + 24) = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
            *(_QWORD *)(v10 + 32) = 0LL;
            *(_QWORD *)(v10 + 40) = 0LL;
            *(_QWORD *)(v10 + 48) = 256LL;
            v12 = *(_QWORD *)(v9 + 112);
            v40 = (__int64 (__fastcall ***)(_QWORD, __int64))v10;
            v42 = v12;
            if ( !v12 )
              WdLogSingleEntry0(1LL);
            v41 = 0LL;
            v13 = MonitorSerializeMonitor(v12, &v41, 0LL);
            v16 = v13;
            if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741789 )
            {
              v25 = *(_QWORD *)(a1 + 88);
              v26 = *(_QWORD *)(v25 + 8);
              if ( !v26 )
              {
LABEL_33:
                WdLogSingleEntry0(1LL);
                v26 = *(_QWORD *)(v25 + 8);
              }
LABEL_34:
              WdLogSingleEntry4(2LL, *(_QWORD *)(v9 + 112), *(unsigned int *)(v9 + 24), *(_QWORD *)(v26 + 16), v16);
LABEL_37:
              auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v40);
              goto LABEL_49;
            }
            if ( v13 != -1073741789 )
              WdLogSingleEntry0(1LL);
            v17 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(v11, v41, v14, v15);
            LODWORD(v16) = v17;
            if ( v17 < 0 )
            {
              WdLogSingleEntry1(2LL, v17);
              goto LABEL_37;
            }
            v18 = MonitorSerializeMonitor(v42, &v41, v11[4]);
            v16 = v18;
            if ( v18 < 0 )
            {
              v25 = *(_QWORD *)(a1 + 88);
              v26 = *(_QWORD *)(v25 + 8);
              if ( !v26 )
                goto LABEL_33;
              goto LABEL_34;
            }
            v40 = 0LL;
            Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v34, (__int64)v11);
            auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v40);
          }
          v19 = *(_QWORD *)(v9 + 8);
          v9 = v19 - 8;
          if ( v19 == a1 + 24 )
            v9 = 0LL;
        }
        while ( v9 );
        v20 = v37;
        v8 = (_QWORD *)v36[0];
        if ( v37 > 1 )
          goto LABEL_23;
      }
    }
    v20 = 1LL;
LABEL_23:
    v21 = 4 * v20 + 4;
    if ( v8 != v36 )
    {
      v22 = v8 - 1;
      while ( v22 )
      {
        v21 += v22[5];
        a3 = v36;
        v23 = (_QWORD *)v22[1];
        v22 = v23 - 1;
        if ( v23 == v36 )
          v22 = 0LL;
      }
    }
    v24 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v21, (__int64)a3, a4);
    LODWORD(v16) = v24;
    if ( v24 >= 0 )
    {
      v27 = 1;
      v28 = (_BYTE *)a2[4];
      v29 = 0;
      *v28 = v37;
      v30 = (_BYTE *)a2[4];
      if ( (unsigned __int8)v37 > 1u )
        v27 = v37;
      v31 = &v30[4 * v27 + 4];
      if ( (_QWORD *)v36[0] != v36 )
      {
        v32 = v36[0] - 8LL;
        if ( v36[0] != 8LL )
        {
          do
          {
            *(_DWORD *)&v28[4 * v29 + 4] = (_DWORD)v31 - (_DWORD)v28;
            memmove(v31, *(const void **)(v32 + 32), *(_QWORD *)(v32 + 40));
            v31 += *(_QWORD *)(v32 + 40);
            v33 = *(_QWORD **)(v32 + 8);
            v32 = (__int64)(v33 - 1);
            if ( v33 == v36 )
              v32 = 0LL;
            ++v29;
          }
          while ( v32 );
          v30 = (_BYTE *)a2[4];
        }
      }
      if ( v29 != *v30 )
        WdLogSingleEntry0(1LL);
      LODWORD(v16) = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, v24);
    }
LABEL_49:
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v34);
    return (unsigned int)v16;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
