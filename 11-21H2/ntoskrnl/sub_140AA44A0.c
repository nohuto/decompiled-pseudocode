/*
 * XREFs of sub_140AA44A0 @ 0x140AA44A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140367A44 @ 0x140367A44 (sub_140367A44.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140AA44A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  ULONG_PTR v3; // r9

  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
  {
    result = sub_140367A44(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL));
    if ( (_DWORD)result )
      return sub_140A8C924(0xC4u, 0x7FuLL, 0LL, v3, v2);
  }
  return result;
}
