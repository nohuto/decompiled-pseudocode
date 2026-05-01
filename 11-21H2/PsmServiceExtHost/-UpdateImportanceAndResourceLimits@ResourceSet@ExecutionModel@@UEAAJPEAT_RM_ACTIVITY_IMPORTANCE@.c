/*
 * XREFs of ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18008ECB0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     RmpResourceLimitsAreLegal @ 0x1800236F0 (RmpResourceLimitsAreLegal.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029970 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18003DA98 (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180079448 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpImportanceIsValidForConfiguration@@YAKT_RM_ACTIVITY_IMPORTANCE@@T_RM_POLICY_CUSTOMIZATION_FLAGS@@@Z @ 0x180083D34 (-RmpImportanceIsValidForConfiguration@@YAKT_RM_ACTIVITY_IMPORTANCE@@T_RM_POLICY_CUSTOMIZATION_FL.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180087514 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits(
        ExecutionModel::ResourceSet *this,
        union _RM_ACTIVITY_IMPORTANCE *a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  int v6; // ebx
  unsigned int v7; // ebx
  int v8; // edi
  int v9; // ebx
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // edx
  int v14; // r10d
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r11d
  char v18; // dl
  int v20; // [rsp+40h] [rbp-59h] BYREF
  __int64 v21; // [rsp+48h] [rbp-51h] BYREF
  __int64 v22; // [rsp+50h] [rbp-49h] BYREF
  __int64 v23; // [rsp+58h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v25; // [rsp+80h] [rbp-19h]
  int v26; // [rsp+88h] [rbp-11h]
  int v27; // [rsp+8Ch] [rbp-Dh]
  __int64 *v28; // [rsp+90h] [rbp-9h]
  int v29; // [rsp+98h] [rbp-1h]
  int v30; // [rsp+9Ch] [rbp+3h]
  int *v31; // [rsp+A0h] [rbp+7h]
  int v32; // [rsp+A8h] [rbp+Fh]
  int v33; // [rsp+ACh] [rbp+13h]
  __int64 *v34; // [rsp+B0h] [rbp+17h]
  int v35; // [rsp+B8h] [rbp+1Fh]
  int v36; // [rsp+BCh] [rbp+23h]

  v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 128LL) + 508LL);
  if ( !a3 || (v21 = 96LL, RmpResourceLimitsAreLegal((__int64)a3, &v21)) )
  {
    RmpAcquireGlobalLock();
    if ( *((_DWORD *)this + 320) )
    {
      if ( !a2 || RmpImportanceIsValidForConfiguration(*(_DWORD *)a2, v6) )
      {
        if ( a3 )
        {
          v8 = *((_DWORD *)this + 345);
          v9 = *((_DWORD *)a3 + 12);
          if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
          {
            v11 = *(_QWORD *)a3;
            v36 = 0;
            v33 = 0;
            v30 = 0;
            v27 = 0;
            v23 = v11;
            v22 = *((_QWORD *)this + 219);
            v34 = &v23;
            v31 = &v20;
            v28 = &v21;
            v25 = &v22;
            v32 = v10;
            v29 = v10;
            v20 = v9;
            LODWORD(v21) = v8;
            v35 = 8;
            v26 = 8;
            tlgWriteTransfer_EventWriteTransfer(
              (__int64)&dword_1800DC1E0,
              (unsigned __int8 *)dword_1800C485D,
              0LL,
              0LL,
              6u,
              &v24);
          }
          v12 = *(_QWORD *)a3;
          if ( (*(_QWORD *)a3 & 0x20) != 0 )
          {
            v13 = v9 & 3;
            if ( (v8 & 3) != v13 )
            {
              *((_DWORD *)this + 345) &= 0xFFFFFFFC;
              *((_DWORD *)this + 345) |= v13;
              v12 = *(_QWORD *)a3;
            }
          }
          if ( (v12 & 0x40) != 0 && (((unsigned __int8)v8 ^ (unsigned __int8)v9) & 8) != 0 )
          {
            *((_DWORD *)this + 345) &= ~8u;
            *((_DWORD *)this + 345) |= v9 & 8;
          }
        }
        if ( a2 && *(_DWORD *)a2 != *((_DWORD *)this + 338) )
        {
          v14 = *(_DWORD *)a2;
          if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
          {
            v22 = *((_QWORD *)this + 219);
            LODWORD(v21) = v16;
            v20 = v17;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (__int64)&dword_1800DC1E0,
              byte_1800C4D69,
              v15,
              v16,
              (__int64)&v22,
              (__int64)&v20,
              (__int64)&v21);
            v14 = *(_DWORD *)a2;
          }
          *((_DWORD *)this + 338) = v14;
          if ( (*(_WORD *)a2 & 0x100) != 0 )
            *((_DWORD *)this + 333) &= ~8u;
          ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*((ExecutionModel::ResourceManager **)this
                                                                                     + 3));
          v18 = 2;
          if ( !*((_BYTE *)this + 12) )
            v18 = 1;
          RmpActivityHostResourceSetsChanged(*((struct _RM_ACTIVITY_HOST **)this + 165), v18);
        }
        if ( *((_BYTE *)this + 12) )
          RmpActivityHostComputeAndApplyEnforcementSettings(*((struct _RM_ACTIVITY_HOST **)this + 165));
        v7 = 0x10000000;
      }
      else
      {
        v7 = -805306129;
      }
    }
    else
    {
      v7 = -805305819;
    }
    RmpReleaseGlobalLock();
  }
  else
  {
    return (unsigned int)-805306128;
  }
  return v7;
}
