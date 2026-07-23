/*
 * XREFs of sub_1405F6B20 @ 0x1405F6B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405F6B20(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rax

  if ( (*a3 & 3) == 1 )
  {
    v3 = *(_DWORD **)(a2 + 56);
    if ( !v3 || (*a3 & 0xFFCu) < (*v3 & 0xFFCu) )
      *(_QWORD *)(a2 + 56) = a3;
  }
  return 0LL;
}
