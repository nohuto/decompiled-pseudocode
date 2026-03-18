/*
 * XREFs of ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A7C10
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
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C03A7788 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeVidPns(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v7; // r12
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  int v15; // eax
  unsigned int v16; // ebx
  _QWORD *v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  int v22; // eax
  unsigned __int8 v23; // si
  unsigned __int8 v24; // cl
  unsigned __int8 *v25; // rdx
  unsigned __int8 v26; // r8
  unsigned __int8 *v27; // r14
  __int64 v28; // rbx
  _QWORD *v29; // rax
  _QWORD v30[2]; // [rsp+20h] [rbp-40h] BYREF
  int v31; // [rsp+30h] [rbp-30h]
  _QWORD v32[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-18h]
  int v34; // [rsp+50h] [rbp-10h]
  __int64 v35; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v36)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  if ( a2[4] )
    WdLogSingleEntry0(1LL);
  v31 = 0;
  v7 = (_QWORD *)(a1 + 24);
  v30[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v33 = 0LL;
  v30[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  v8 = v32;
  v32[0] = v32;
  v9 = (_QWORD *)*v7;
  v32[1] = v32;
  v34 = 2;
  v35 = 0LL;
  if ( v9 == v7 )
    goto LABEL_13;
  v10 = (__int64)(v9 - 1);
  if ( !v10 )
    goto LABEL_13;
  do
  {
    v11 = operator new[](0x38uLL, 0x4E506456u, 256LL, a4);
    v14 = v11;
    if ( !v11 )
    {
      v36 = 0LL;
      WdLogSingleEntry2(6LL, 56LL, v10);
      v16 = -1073741801;
      goto LABEL_23;
    }
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)v11 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    *(_QWORD *)(v11 + 24) = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_QWORD *)(v11 + 48) = 256LL;
    v36 = (__int64 (__fastcall ***)(_QWORD, __int64))v11;
    v15 = DMMVIDPN::Serialize(v10, v11, v12, v13);
    v16 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry2(2LL, v10, v15);
LABEL_23:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v36);
      goto LABEL_35;
    }
    v36 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v30, v14);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v36);
    v17 = *(_QWORD **)(v10 + 8);
    v10 = (__int64)(v17 - 1);
    if ( v17 == v7 )
      v10 = 0LL;
  }
  while ( v10 );
  v18 = v33;
  v8 = (_QWORD *)v32[0];
  if ( v33 > 1 )
    goto LABEL_14;
LABEL_13:
  v18 = 1LL;
LABEL_14:
  v19 = 4 * v18 + 4;
  if ( v8 != v32 )
  {
    v20 = v8 - 1;
    while ( v20 )
    {
      v19 += v20[5];
      a3 = v32;
      v21 = (_QWORD *)v20[1];
      v20 = v21 - 1;
      if ( v21 == v32 )
        v20 = 0LL;
    }
  }
  v22 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v19, (__int64)a3, a4);
  v16 = v22;
  if ( v22 >= 0 )
  {
    v23 = 0;
    *(_BYTE *)a2[4] = v33;
    v24 = 1;
    v25 = (unsigned __int8 *)a2[4];
    v26 = *v25;
    if ( *v25 > 1u )
      v24 = *v25;
    v27 = &v25[4 * v24 + 4];
    if ( (_QWORD *)v32[0] != v32 )
    {
      v28 = v32[0] - 8LL;
      if ( v32[0] != 8LL )
      {
        do
        {
          *(_DWORD *)(a2[4] + 4LL * v23 + 4) = (_DWORD)v27 - *((_DWORD *)a2 + 8);
          memmove(v27, *(const void **)(v28 + 32), *(_QWORD *)(v28 + 40));
          v27 += *(_QWORD *)(v28 + 40);
          v29 = *(_QWORD **)(v28 + 8);
          v28 = (__int64)(v29 - 1);
          if ( v29 == v32 )
            v28 = 0LL;
          ++v23;
        }
        while ( v28 );
        v26 = *(_BYTE *)a2[4];
      }
    }
    if ( v23 != v26 )
      WdLogSingleEntry0(1LL);
    v16 = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v22);
  }
LABEL_35:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v30);
  return v16;
}
