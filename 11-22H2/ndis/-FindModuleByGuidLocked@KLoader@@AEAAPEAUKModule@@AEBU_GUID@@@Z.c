/*
 * XREFs of ?FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z @ 0x1C0141454
 * Callers:
 *     ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x1C0141900 (-ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x1C0141BEC (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_ @ 0x1C0035994 (WPP_RECORDER_SF__guid_.c)
 *     WPP_RECORDER_SF__guid_q @ 0x1C00D01D0 (WPP_RECORDER_SF__guid_q.c)
 */

struct KModule *__fastcall KLoader::FindModuleByGuidLocked(
        KLoader *this,
        const struct _GUID *a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // rdx
  char *i; // rbx
  __int64 v8; // rcx
  int v10; // [rsp+20h] [rbp-28h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x14u,
      (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
      (__int64)a2);
  v6 = (char *)this + 8;
  for ( i = (char *)*((_QWORD *)this + 1); ; i = *(char **)i )
  {
    if ( i == v6 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0x16u,
          (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
          (__int64)a2);
      return 0LL;
    }
    v8 = *(_QWORD *)(i + 20) - *(_QWORD *)&a2->Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(i + 28) - *(_QWORD *)a2->Data4;
    if ( !v8 )
      break;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_q(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)v6, a3, a4, v10, (__int64)a2);
  return (struct KModule *)i;
}
