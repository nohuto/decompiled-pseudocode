/*
 * XREFs of IoGetFsZeroingOffset @ 0x140559310
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 */

__int64 __fastcall IoGetFsZeroingOffset(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD *v2; // r8
  __int64 result; // rax

  if ( !sub_14020C0F0(a1, 4u) )
    return 3221226021LL;
  result = 0LL;
  *v2 = *(_DWORD *)(*(_QWORD *)(v1 + 200) + 40LL);
  return result;
}
