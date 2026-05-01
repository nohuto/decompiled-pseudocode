/*
 * XREFs of ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020554
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001F950 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180028940 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029CF0 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E214 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180050350 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18008FA78 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
        unsigned __int64 this,
        struct _RM_ACTIVITY_HOST *a2)
{
  _QWORD *v3; // r12
  unsigned __int64 v4; // r15
  _QWORD *i; // rbx
  struct _RM_ACTIVITY_HOST **v6; // rsi
  __int64 v7; // rdx
  int v8; // edi
  __int64 v9; // rdx
  struct _RM_ACTIVITY_HOST **v10; // rax
  __int64 v11; // rax
  char v12; // [rsp+60h] [rbp+8h] BYREF

  v3 = (_QWORD *)(*(_QWORD *)(this + 24) + 40LL);
  v4 = this;
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v6 = (struct _RM_ACTIVITY_HOST **)i[2];
    if ( a2 == v6[167] )
    {
      if ( (*((_BYTE *)a2 + 852) & 1) != 0 )
      {
        HampHostAcquireLockSharedEx((struct _RM_ACTIVITY_HOST *)((char *)a2 + 64), 0);
        v8 = 0;
        if ( (*((_QWORD *)a2 + 91) & 0x80000000000LL) == 0 )
        {
          RmHamHostGetCurrentState(
            (struct _RM_ACTIVITY_HOST *)((char *)a2 + 64),
            (union _RM_OPTIMIZATION_STATE *)&v12,
            0LL);
          if ( v12 < 0 || *((_DWORD *)a2 + 156) != 2 )
            v8 = 1;
        }
        CempLockTrackerMarkReleased(HampLockTrackerId, v7, 1u);
        RtlReleaseSRWLockShared((char *)a2 + 64);
      }
      else
      {
        v8 = (*((unsigned __int16 *)a2 + 589) >> 2) & 1;
      }
      if ( v8 && (*((unsigned __int8 (__fastcall **)(struct _RM_ACTIVITY_HOST **))*v6 + 7))(v6) )
      {
        LODWORD(this) = 3;
        while ( 1 )
        {
          v11 = (unsigned int)this + 3LL;
          if ( LODWORD(v6[3 * v11]) == (_DWORD)this && !BYTE5(v6[3 * v11 + 2]) )
            break;
          this = (unsigned int)(this + 1);
          if ( (unsigned int)this > 0x31 )
          {
            if ( *((_DWORD *)v6 + 320) == 1 )
              goto LABEL_15;
            break;
          }
        }
        (*((void (__fastcall **)(struct _RM_ACTIVITY_HOST **))*v6 + 8))(v6);
      }
      else
      {
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          (struct ExecutionModel::ResourceManager *)this,
          2u,
          0x32u,
          (struct ExecutionModel::_ResourceInfo *)(v6 + 9),
          a2);
        v9 = 3LL;
        v10 = v6 + 20;
        while ( 1 )
        {
          if ( *((_BYTE *)v10 + 5) && *(_DWORD *)v10 == 101 )
          {
            this = *((unsigned int *)v6 + 320);
            if ( (_DWORD)this == 2 && *(v10 - 1) )
            {
              ExecutionModel::ExternalResourceSet::Revoke((ExecutionModel::ExternalResourceSet *)v6, 0);
              goto LABEL_15;
            }
            if ( (_DWORD)this == 1 )
              break;
          }
          ++v9;
          v10 += 3;
          if ( v9 >= 50 )
            goto LABEL_15;
        }
        (*((void (__fastcall **)(struct _RM_ACTIVITY_HOST **, __int64))*v6 + 6))(v6, v9);
      }
    }
LABEL_15:
    ;
  }
  if ( (*(_BYTE *)(v4 + 160) & 2) == 0 )
    TpPostWork(*(_QWORD *)(v4 + 152));
}
