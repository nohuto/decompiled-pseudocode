/*
 * XREFs of sub_18009D7E0 @ 0x18009D7E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     sub_180063320 @ 0x180063320 (sub_180063320.c)
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 */

bool __fastcall sub_18009D7E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  bool result; // al

  result = 0;
  if ( sub_180063320(a1, a2) )
  {
    v4 = _RTDynamicCast(
           a2,
           0LL,
           &Spectre::Engine::Component `RTTI Type Descriptor',
           &Spectre::Engine::ShadowMapCamera `RTTI Type Descriptor',
           1);
    if ( !sub_1800122D0((_QWORD *)(v4 + 1896), (_QWORD *)(a1 + 1896))
      && *(_DWORD *)(v5 + 1940) == *(_DWORD *)(a1 + 1940)
      && *(float *)(v5 + 1948) == *(float *)(a1 + 1948)
      && *(_BYTE *)(v5 + 1952) == *(_BYTE *)(a1 + 1952)
      && *(float *)(v5 + 1956) == *(float *)(a1 + 1956)
      && *(_QWORD *)(v5 + 1960) == *(_QWORD *)(a1 + 1960)
      && *(float *)(v5 + 1968) == *(float *)(a1 + 1968)
      && *(_DWORD *)(v5 + 1944) == *(_DWORD *)(a1 + 1944) )
    {
      return 1;
    }
  }
  return result;
}
