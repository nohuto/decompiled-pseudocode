/*
 * XREFs of sub_140B126B8 @ 0x140B126B8
 * Callers:
 *     sub_140B125BC @ 0x140B125BC (sub_140B125BC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B126B8(const void **a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  result = ExAllocatePool2(256LL, *(unsigned __int16 *)a1 + 48LL, 0x6E697050u);
  v3 = result;
  if ( result )
  {
    *(_WORD *)(result + 32) = *(_WORD *)a1;
    *(_WORD *)(result + 34) = *(_WORD *)a1;
    *(_QWORD *)(result + 40) = result + 48;
    memmove((void *)(result + 48), a1[1], *(unsigned __int16 *)a1);
    return v3;
  }
  return result;
}
