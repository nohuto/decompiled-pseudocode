/*
 * XREFs of ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180029450
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateResourcePriority@CResourcePriorityTracker@@QEAAJW4_ResourcePriorityAction@@KKPEA_N@Z @ 0x180028F38 (-UpdateResourcePriority@CResourcePriorityTracker@@QEAAJW4_ResourcePriorityAction@@KKPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::UpdateStreamGroupResourcePriority(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4)
{
  int updated; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(v10) = 0;
  updated = CResourcePriorityTracker::UpdateResourcePriority(*(_QWORD *)(a1 + 48), a2, a3, a4, &v10);
  if ( updated < 0 )
  {
    v7 = 2881LL;
  }
  else
  {
    if ( !(_BYTE)v10 )
      return 0LL;
    updated = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, __int64))(*(_QWORD *)g_AudioResourceManager
                                                                                         + 48LL))(
                g_AudioResourceManager,
                *(unsigned int *)(*(_QWORD *)(a1 + 48) + 56LL),
                a1 + 56);
    if ( updated >= 0 )
      return 0LL;
    v7 = 2886LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)updated,
    v8);
  return (unsigned int)updated;
}
