/*
 * XREFs of sub_1405B6210 @ 0x1405B6210
 * Callers:
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     sub_1405B6108 @ 0x1405B6108 (sub_1405B6108.c)
 *     sub_1405B6318 @ 0x1405B6318 (sub_1405B6318.c)
 */

__int64 __fastcall sub_1405B6210(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  __int64 result; // rax

  v2 = a2 - 48;
  v3 = *(_QWORD **)(((a2 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) != *v3 )
  {
    result = sub_1405B6108(*v3, 1);
    if ( !(_DWORD)result )
      return result;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 56)) != 1 )
      sub_1405B6318(*v3, 1LL);
  }
  _InterlockedAdd64((volatile signed __int64 *)(v2 + 32), 1uLL);
  _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 98, 1u);
  return 1LL;
}
