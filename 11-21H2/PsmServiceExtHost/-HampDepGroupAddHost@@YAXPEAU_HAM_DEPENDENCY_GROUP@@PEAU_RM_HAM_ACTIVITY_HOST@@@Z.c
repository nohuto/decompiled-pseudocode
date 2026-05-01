/*
 * XREFs of ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800741D4
 * Callers:
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180074A5C (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180076534 (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007680C (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002DACC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18007397C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180074A44 (-HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupAddHost(struct _HAM_DEPENDENCY_GROUP *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rbx
  int v6; // r14d
  unsigned __int64 v7; // rax
  int v8; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  signed __int64 v13[7]; // [rsp+40h] [rbp-38h] BYREF
  char v14; // [rsp+80h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+10h] BYREF
  __int64 v16; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 12) <= 1 )
    __fastfail(0xEu);
  v16 = *((_QWORD *)a2 - 4);
  *((_QWORD *)a2 + 88) = a1;
  HampDepGroupAcquireLockExclusive(a1, (__int64)a2);
  v5 = *((_QWORD *)a1 + 7);
  if ( (*((_BYTE *)a1 + 64) & 1) != 0 && v5 )
    v5 ^= (unsigned __int64)a1 + 56;
  LOBYTE(v4) = 0;
  v6 = *((_BYTE *)a1 + 64) & 1;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (int)HampDepGroupCompareHostForRbTree(&v16, (struct _RTL_BALANCED_NODE *)v5) < 0 )
      {
        v7 = *(_QWORD *)v5;
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_18;
          v7 ^= v5;
        }
        if ( !v7 )
        {
LABEL_18:
          LOBYTE(v4) = 0;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_12;
          v7 ^= v5;
        }
        if ( !v7 )
        {
LABEL_12:
          LOBYTE(v4) = 1;
          break;
        }
      }
      v5 = v7;
    }
  }
  RtlRbInsertNodeEx((char *)a1 + 56, v5, v4, (char *)a2 + 720);
  if ( (((unsigned __int64)*((unsigned int *)a2 + 166) >> 26) & 7) == 0 && (*((_DWORD *)a1 + 23))++ == -1 )
    NT_ASSERT("DependencyGroup->ResourceAcquireWaitCount > 0");
  if ( HampHostIsSuspendWaiter(a2, v8) )
  {
    v12 = (unsigned int)(*((_DWORD *)a1 + 22) + 1);
    *((_DWORD *)a1 + 22) = v12;
    if ( (unsigned int)dword_1800DC218 > 5 )
    {
      v17 = *((_QWORD *)a2 - 4);
      v13[0] = *(_QWORD *)a1;
      v14 = 1;
      v15 = v12;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v12,
        byte_1800C002C,
        v10,
        v11,
        (__int64)v13,
        (__int64)&v15,
        (__int64)&v17,
        (__int64)&v14);
    }
  }
  HampDepGroupReleaseLockExclusive(a1);
}
