/*
 * XREFs of ??1?$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd@@QEAA@XZ @ 0x18000A3D0
 * Callers:
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18000A288 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?Flush@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXV?$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd@@@Z @ 0x1800620D8 (-Flush@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXV-$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd.c)
 *     ?ProcessSingleNamespace@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@PEAV56@V?$function@$$A6AXAEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@@Z@6@@Z @ 0x180064770 (-ProcessSingleNamespace@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEAV-$unique_ptr@UApiData@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<void (unsigned short const *,unsigned short const *,char const *,unsigned int *,unsigned short)>::~function<void (unsigned short const *,unsigned short const *,char const *,unsigned int *,unsigned short)>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
