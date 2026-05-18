/*
 * XREFs of sub_1800276A8 @ 0x1800276A8
 * Callers:
 *     sub_1801033FD @ 0x1801033FD (sub_1801033FD.c)
 *     sub_180103449 @ 0x180103449 (sub_180103449.c)
 *     unknown_libname_81 @ 0x18010CD81 (unknown_libname_81.c)
 *     ?dtor$0@?0??VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@Z@4HA_1 @ 0x18010CD93 (-dtor$0@-0--VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurren_ea_18010CD93.c)
 * Callees:
 *     sub_18001D6B8 @ 0x18001D6B8 (sub_18001D6B8.c)
 */

__int64 __fastcall sub_1800276A8(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18001D6B8(v1);
  return result;
}
