/*
 * XREFs of ?ProcessSingleNamespace@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@PEAV56@V?$function@$$A6AXAEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@@Z@6@@Z @ 0x180064770
 * Callers:
 *     ?Flush@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXV?$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd@@@Z @ 0x1800620D8 (-Flush@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXV-$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd.c)
 * Callees:
 *     ??1?$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd@@QEAA@XZ @ 0x18000A3D0 (--1-$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd@@QEAA@XZ.c)
 *     ?GetNameSpaceLength@ApiDataList@ApiTelemetryLogger@details@wil@@CA_KPEBG@Z @ 0x180064804 (-GetNameSpaceLength@ApiDataList@ApiTelemetryLogger@details@wil@@CA_KPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ApiTelemetryLogger::ApiDataList::ProcessSingleNamespace(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  const unsigned __int16 **v5; // r11
  unsigned __int64 NameSpaceLength; // rax
  const wchar_t **v7; // r11
  const wchar_t **v8; // r10

  while ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD *)(a2 + 112);
    if ( !v4 )
      __fastfail(7u);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a1);
    v5 = *(const unsigned __int16 ***)(*(_QWORD *)a1 + 32LL);
    if ( v5 )
    {
      NameSpaceLength = wil::details::ApiTelemetryLogger::ApiDataList::GetNameSpaceLength(*v5);
      if ( wcsncmp(*v8, *v7, NameSpaceLength + 1) )
        break;
    }
    a1 = *(_QWORD *)a1 + 32LL;
  }
  wistd::function<void (unsigned short const *,unsigned short const *,char const *,unsigned int *,unsigned short)>::~function<void (unsigned short const *,unsigned short const *,char const *,unsigned int *,unsigned short)>(a2);
  return a1;
}
