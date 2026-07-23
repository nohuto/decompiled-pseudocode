/*
 * XREFs of sub_1409473F0 @ 0x1409473F0
 * Callers:
 *     sub_140766834 @ 0x140766834 (sub_140766834.c)
 * Callees:
 *     sub_14025B96C @ 0x14025B96C (sub_14025B96C.c)
 *     sub_14074A08C @ 0x14074A08C (sub_14074A08C.c)
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 *     sub_140767220 @ 0x140767220 (sub_140767220.c)
 *     sub_14076AC70 @ 0x14076AC70 (sub_14076AC70.c)
 */

__int64 __fastcall sub_1409473F0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 786 )
  {
    sub_140767220(a1, 512);
    sub_140766C3C(*(PDEVICE_OBJECT *)(a1 + 32), 3);
    sub_14074A08C(a1, 512);
    sub_14025B96C(a1);
    return sub_14076AC70(a1);
  }
  return result;
}
