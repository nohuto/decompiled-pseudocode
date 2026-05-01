/*
 * XREFs of ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E3A0
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180019AE0 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E300 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006D40 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmHamHostIsMemoryRequired@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180082184 (-RmHamHostIsMemoryRequired@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18008BA10 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  _QWORD *v3; // r14
  _QWORD *i; // rbx
  __int64 v6; // rdi
  struct ExecutionModel::ResourceManager *v7; // rcx
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // ecx

  v3 = (_QWORD *)(*((_QWORD *)this + 3) + 40LL);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v6 = i[2];
    if ( a2 == *(struct _RM_ACTIVITY_HOST **)(v6 + 1336) )
    {
      if ( RmHamHostIsMemoryRequired(a2) || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6) )
      {
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          v7,
          2u,
          0x32u,
          (struct ExecutionModel::_ResourceInfo *)(v6 + 72),
          a2);
        v10 = 3LL;
        v11 = v6 + 160;
        while ( 1 )
        {
          if ( *(_BYTE *)(v11 + 5) && *(_DWORD *)v11 == 101 )
          {
            v12 = *(_DWORD *)(v6 + 1280);
            if ( v12 == 2 && *(_QWORD *)(v11 - 8) )
            {
              ExecutionModel::ExternalResourceSet::Revoke((ExecutionModel::ExternalResourceSet *)v6, 0);
              goto LABEL_22;
            }
            if ( v12 == 1 )
              break;
          }
          ++v10;
          v11 += 24LL;
          if ( v10 >= 50 )
            goto LABEL_22;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, v10);
      }
      else
      {
        v8 = 3;
        while ( 1 )
        {
          v9 = v8 + 3LL;
          if ( *(_DWORD *)(v6 + 24 * v9) == v8 && !*(_BYTE *)(v6 + 24 * v9 + 21) )
            break;
          if ( ++v8 > 0x31 )
          {
            if ( *(_DWORD *)(v6 + 1280) == 1 )
              goto LABEL_22;
            break;
          }
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
      }
    }
LABEL_22:
    ;
  }
  if ( (*((_BYTE *)this + 160) & 2) == 0 )
    TpPostWork(*((_QWORD *)this + 19));
}
