/*
 * XREFs of ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x1800BD88C
 * Callers:
 *     ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180089F50 (--0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0TouchGestureComponent@@QEAA@XZ @ 0x18008A290 (--0TouchGestureComponent@@QEAA@XZ.c)
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008A48C (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008B088 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800BCCE4 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x1800BDE54 (--$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@Uservice_des.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::immersive_shell_component::register_service_information(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = a1 + 10;
  AcquireSRWLockExclusive(a1 + 10);
  std::vector<winrt::immersive_shell_component::service_description>::_Insert_range<winrt::immersive_shell_component::service_description const *>(
    &a1[6],
    a1[7].Ptr,
    *(_QWORD *)a2,
    *(_QWORD *)a2 + 32LL * *(unsigned int *)(a2 + 8));
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
