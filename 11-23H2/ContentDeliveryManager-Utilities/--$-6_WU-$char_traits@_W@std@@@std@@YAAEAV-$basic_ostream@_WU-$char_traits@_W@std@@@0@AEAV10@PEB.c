/*
 * XREFs of ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x18009990C
 * Callers:
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009F1A8 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800BECD8 (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 * Callees:
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180053790 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18006492C (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18006525C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     ?sputc@?$basic_streambuf@GU?$char_traits@G@std@@@std@@QEAAGG@Z @ 0x18006C094 (-sputc@-$basic_streambuf@GU-$char_traits@G@std@@@std@@QEAAGG@Z.c)
 *     ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x18009B04C (--0sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::operator<<<wchar_t,std::char_traits<wchar_t>>(__int64 a1, _WORD *a2)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rsi
  int v9; // eax
  __int16 v10; // ax
  __int64 v11; // rcx
  __int64 *v13; // [rsp+20h] [rbp-38h] BYREF
  char v14; // [rsp+28h] [rbp-30h]

  v3 = a1;
  v4 = 0;
  v5 = std::char_traits<wchar_t>::length(a2);
  v6 = v5;
  v7 = *(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 40);
  if ( v7 <= 0 || v7 <= v5 )
    v8 = 0LL;
  else
    v8 = v7 - v5;
  std::wostream::sentry::sentry(&v13, v3);
  if ( v14 )
  {
    v9 = *(_DWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 24) & 0x1C0;
    if ( v9 != 64 )
    {
      while ( v8 > 0 )
      {
        try
        {
          v10 = std::basic_streambuf<unsigned short>::sputc(
                  *(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72),
                  *(_WORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 88));
        }
        catch ( ... )
        {
          std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4, 1);
          v3 = a1;
          v4 = 0;
          goto LABEL_19;
        }
        if ( v10 == -1 )
        {
          v4 = 4;
          goto LABEL_16;
        }
        --v8;
      }
    }
    v11 = *(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72);
    if ( (*(__int64 (__fastcall **)(__int64, _WORD *, __int64))(*(_QWORD *)v11 + 72LL))(v11, a2, v6) == v6 )
    {
      while ( v8 > 0 )
      {
        if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(
                                 *(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72),
                                 *(_WORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 88)) == 0xFFFF )
          goto LABEL_15;
        --v8;
      }
    }
    else
    {
LABEL_15:
      v4 = 4;
    }
LABEL_16:
    *(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 40) = 0LL;
  }
  else
  {
    v4 = 4;
  }
LABEL_19:
  std::basic_ios<unsigned short>::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v4, 0);
  std::basic_ostream<unsigned short>::sentry::~sentry(&v13);
  return v3;
}
