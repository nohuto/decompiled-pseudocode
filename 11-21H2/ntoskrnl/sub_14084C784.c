/*
 * XREFs of sub_14084C784 @ 0x14084C784
 * Callers:
 *     sub_14084C604 @ 0x14084C604 (sub_14084C604.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14084C850 @ 0x14084C850 (sub_14084C850.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14084C784(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx

  if ( *(_QWORD *)(a1 + 64) )
  {
    sub_14042A5E0(*(_QWORD *)(a1 + 8), 0LL);
    v4 = -1073741823;
  }
  else
  {
    v4 = -1073741637;
  }
  result = v4;
  *a2 = 0LL;
  return result;
}
