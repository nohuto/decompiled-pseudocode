/*
 * XREFs of std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_winrt::guid_______lambda_e1a68749c2a620fba4796884a9d090f2___ @ 0x18057A288
 * Callers:
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x180238AF6 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

_QWORD *__fastcall std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_winrt::guid_______lambda_e1a68749c2a620fba4796884a9d090f2___(
        _QWORD *a1,
        __int64 **a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // r10
  _QWORD *v8; // r11
  __int64 v9; // r8
  __int64 *v10; // rax
  _QWORD *result; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int64)a2[2];
  v6 = 0LL;
  v8 = a1;
  if ( *a2 )
    v9 = **a2;
  else
    v9 = 0LL;
  while ( v4 != *(_QWORD *)(a3 + 16) )
  {
    v12 = *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * (v4 & (*(_QWORD *)(v9 + 16) - 1LL)));
    if ( winrt::operator==(&v12, a4) )
      break;
    ++v4;
  }
  a2[2] = (__int64 *)v4;
  *v8 = v6;
  v8[1] = v6;
  if ( *a2 )
  {
    v10 = (__int64 *)**a2;
    if ( v10 )
      v6 = *v10;
    *v8 = v6;
  }
  result = v8;
  v8[2] = a2[2];
  return result;
}
