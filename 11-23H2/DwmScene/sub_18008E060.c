/*
 * XREFs of sub_18008E060 @ 0x18008E060
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_18005B3E0 @ 0x18005B3E0 (sub_18005B3E0.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 */

bool __fastcall sub_18008E060(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  bool result; // al

  result = sub_18005B3E0(a1, a2)
        && (v4 = _RTDynamicCast(
                   a2,
                   0LL,
                   &Spectre::Engine::Component `RTTI Type Descriptor',
                   &Spectre::Engine::ShadowMapCamera `RTTI Type Descriptor',
                   1),
            !sub_180011DF0((_QWORD *)(v4 + 1896), (_QWORD *)(a1 + 1896)))
        && *(_DWORD *)(v5 + 1940) == *(_DWORD *)(a1 + 1940)
        && *(float *)(v5 + 1948) == *(float *)(a1 + 1948)
        && *(_BYTE *)(v5 + 1952) == *(_BYTE *)(a1 + 1952)
        && *(float *)(v5 + 1956) == *(float *)(a1 + 1956)
        && *(_DWORD *)(v5 + 1964) == *(_DWORD *)(a1 + 1964)
        && *(_DWORD *)(v5 + 1960) == *(_DWORD *)(a1 + 1960)
        && *(float *)(v5 + 1968) == *(float *)(a1 + 1968)
        && *(_DWORD *)(v5 + 1944) == *(_DWORD *)(a1 + 1944);
  return result;
}
