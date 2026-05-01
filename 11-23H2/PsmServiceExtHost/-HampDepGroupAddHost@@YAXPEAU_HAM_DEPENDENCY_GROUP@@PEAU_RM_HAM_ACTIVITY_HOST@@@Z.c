/*
 * XREFs of ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B0D0
 * Callers:
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003AFCC (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007D124 (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007D21C (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800184AC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BB3C (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BF50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003D524 (-HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18003DBF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 */

void __fastcall HampDepGroupAddHost(struct _HAM_DEPENDENCY_GROUP *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // r15
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  int v7; // ebp
  unsigned __int64 v8; // rax
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v13; // ecx
  signed __int64 v14[9]; // [rsp+40h] [rbp-48h] BYREF
  char v15; // [rsp+90h] [rbp+8h] BYREF
  int v16; // [rsp+98h] [rbp+10h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 12) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a2 + 88) = a1;
  v4 = 32LL;
  if ( a2 )
    v4 = (__int64)a2 - 32;
  v17 = *(_QWORD *)v4;
  HampDepGroupAcquireLockExclusive(a1);
  v6 = *((_QWORD *)a1 + 7);
  if ( (*((_BYTE *)a1 + 64) & 1) != 0 && v6 )
    v6 ^= (unsigned __int64)a1 + 56;
  LOBYTE(v5) = 0;
  v7 = *((_BYTE *)a1 + 64) & 1;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( (int)HampDepGroupCompareHostForRbTree(&v17, (struct _RTL_BALANCED_NODE *)v6) < 0 )
      {
        v8 = *(_QWORD *)v6;
        if ( v7 )
        {
          if ( !v8 )
            goto LABEL_16;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_16:
          LOBYTE(v5) = 0;
          break;
        }
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( v7 )
        {
          if ( !v8 )
            goto LABEL_20;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_20:
          LOBYTE(v5) = 1;
          break;
        }
      }
      v6 = v8;
    }
  }
  RtlRbInsertNodeEx((char *)a1 + 56, v6, v5, (char *)a2 + 720);
  if ( (((unsigned __int64)*((unsigned int *)a2 + 166) >> 26) & 7) == 0 && (*((_DWORD *)a1 + 23))++ == -1 )
    __int2c();
  if ( HampHostIsSuspendWaiter(a2, v9) )
  {
    v13 = *((_DWORD *)a1 + 22) + 1;
    *((_DWORD *)a1 + 22) = v13;
    if ( (unsigned int)dword_1800DB218 > 5 )
    {
      v18 = *(_QWORD *)v4;
      v14[0] = *(_QWORD *)a1;
      v15 = 1;
      v16 = v13;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v13,
        (unsigned int)&unk_1800BF5DD,
        v10,
        v11,
        (__int64)v14,
        (__int64)&v16,
        (__int64)&v18,
        (__int64)&v15);
    }
  }
  HampDepGroupReleaseLockExclusive(a1);
}
