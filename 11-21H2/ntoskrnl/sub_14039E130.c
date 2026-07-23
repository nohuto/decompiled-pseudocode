/*
 * XREFs of sub_14039E130 @ 0x14039E130
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140549F88 @ 0x140549F88 (sub_140549F88.c)
 */

__int64 __fastcall sub_14039E130(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  if ( a3 == -1 )
    return 0;
  if ( !*(_QWORD *)(qword_140D068A8 + 24) )
  {
    v4 = 0;
LABEL_8:
    if ( *((int *)KeGetCurrentPrcb() + 8456) >= 2 && a3 == dword_140C0C5EC )
      sub_140549F88(1LL);
    return v4;
  }
  result = sub_14042A5E0(a1, 0xFFFFFFFFLL);
  v4 = result;
  if ( (int)result >= 0 )
    goto LABEL_8;
  return result;
}
