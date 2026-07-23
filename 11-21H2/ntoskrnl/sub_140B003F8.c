/*
 * XREFs of sub_140B003F8 @ 0x140B003F8
 * Callers:
 *     sub_140AFFF64 @ 0x140AFFF64 (sub_140AFFF64.c)
 * Callees:
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     KseRegisterShim @ 0x140825A50 (KseRegisterShim.c)
 */

__int64 sub_140B003F8()
{
  int v0; // eax
  int v1; // eax
  __int64 result; // rax
  __int64 v3; // rcx
  char v4; // al
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rdx
  char v8; // al

  v0 = KseRegisterShim((__int64)&unk_140C065E0, 0LL, 0LL);
  if ( v0 < 0 )
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v3 + 1] = v0;
    v4 = dword_140D04880;
    dword_140C2A220[2 * v3] = 786673;
    if ( (v4 & 2) != 0 )
      sub_14057D738(12LL, "Built-in Win7 version lie shims: failed to register.\n");
    sub_140368C88(12LL, (__int64)"Built-in Win7 version lie shims: failed to register.\n");
  }
  v1 = KseRegisterShim((__int64)&unk_140C06618, 0LL, 0LL);
  if ( v1 < 0 )
  {
    v5 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v5 + 1] = v1;
    v6 = dword_140D04880;
    dword_140C2A220[2 * v5] = 786681;
    if ( (v6 & 2) != 0 )
      sub_14057D738(12LL, "Built-in Win8 version lie shims: failed to register.\n");
    sub_140368C88(12LL, (__int64)"Built-in Win8 version lie shims: failed to register.\n");
  }
  result = KseRegisterShim((__int64)&unk_140C06650, 0LL, 0LL);
  if ( (int)result < 0 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v7 + 1] = result;
    v8 = dword_140D04880;
    dword_140C2A220[2 * v7] = 786689;
    if ( (v8 & 2) != 0 )
      sub_14057D738(12LL, "Built-in Win8.1 version lie shims: failed to register.\n");
    return sub_140368C88(12LL, (__int64)"Built-in Win8.1 version lie shims: failed to register.\n");
  }
  return result;
}
