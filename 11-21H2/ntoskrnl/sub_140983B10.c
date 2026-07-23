/*
 * XREFs of sub_140983B10 @ 0x140983B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     sub_1405C5550 @ 0x1405C5550 (sub_1405C5550.c)
 *     sub_1409839C0 @ 0x1409839C0 (sub_1409839C0.c)
 *     sub_140983AC0 @ 0x140983AC0 (sub_140983AC0.c)
 */

__int64 __fastcall sub_140983B10(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)a1;
  v3 = sub_1409839C0((__int64 *)a1);
  if ( v3 >= 0 )
  {
    sub_1405C5550(a1);
    sub_140983AC0(a1);
  }
  v4 = *(_QWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 12) = v3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 40), v4);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_14024B0B4((_DWORD *)(v1 + 8), 1);
  return result;
}
