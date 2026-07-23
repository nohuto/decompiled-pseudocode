/*
 * XREFs of sub_140236EC0 @ 0x140236EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140236F54 @ 0x140236F54 (sub_140236F54.c)
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405F6C04 @ 0x1405F6C04 (sub_1405F6C04.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140236EC0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  switch ( a3 )
  {
    case 1:
      sub_140237230(a2);
      ExFreePoolWithTag((PVOID)a2, 0);
      break;
    case 7:
      *(_BYTE *)(a2 + 6021) |= 2u;
      break;
    case 2:
      sub_140236F54(a1, *(_DWORD *)(a2 + 6016) & 0x3FF);
      break;
    case 4:
      sub_1405F6C04();
      break;
  }
  result = 0LL;
  if ( *(_QWORD *)(a1 + 1848) )
    return sub_14042A5E0(a1, a2);
  return result;
}
