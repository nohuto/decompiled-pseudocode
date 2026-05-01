/*
 * XREFs of RmCoreRpcSrvAcquireResourceSet @ 0x180039220
 * Callers:
 *     <none>
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180009DAC (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KKW4_HOST_GROUP@@5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E940 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180021570 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     RmpResourceLimitsAreLegal @ 0x1800236F0 (RmpResourceLimitsAreLegal.c)
 *     ?RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x1800393E0 (-RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@P.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004F84C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RmCoreRpcSrvAcquireResourceSet(
        __int64 *a1,
        ExecutionModel *a2,
        __int64 a3,
        wchar_t *a4,
        PSID Sid,
        unsigned int a6,
        int a7,
        int a8,
        __int64 a9,
        char a10,
        _QWORD *a11)
{
  struct ExecutionModel::_ResourceSetInfo *v14; // r8
  _DWORD *v15; // rdi
  void *v16; // rsi
  int v17; // ebx
  bool v18; // cf
  unsigned int v19; // ebx
  _BYTE v21[16]; // [rsp+70h] [rbp-1C8h] BYREF
  _BYTE v22[384]; // [rsp+80h] [rbp-1B8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v22);
  if ( RmpResourceLimitsAreLegal((__int64)a2 + 40, 0LL) )
  {
    if ( a6 < 0xC )
    {
      return (unsigned int)-1073741580;
    }
    else if ( RtlValidSid(Sid) && RtlLengthSid(Sid) == a6 )
    {
      ExecutionModel::RmpResourceSetPropertiesToResourceSetInfo(a2, (struct _RM_RESOURCE_SET_PROPERTIES *)v22, v14);
      v15 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v15 )
      {
        *(_QWORD *)v15 = &ResourceSetCallbackThunk::`vftable';
        v15[2] = 1;
        v16 = (void *)HamObjectIdGenerate(1);
        v17 = RmSrvAcquireResourceSet(
                *a1,
                (struct ExecutionModel::_ResourceSetInfo *)v22,
                (__int64)v15,
                0LL,
                a4,
                Sid,
                a7,
                a8,
                a9,
                a10,
                2,
                v16,
                a1,
                v21);
        if ( v17 < 0 )
        {
          v19 = v17 & 0xEFFFFFFF;
        }
        else
        {
          v18 = v21[0] != 0;
          *a11 = v16;
          v19 = v18 ? 0x103 : 0;
        }
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741581;
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v19;
}
