/*
 * XREFs of sub_1407EF514 @ 0x1407EF514
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407EF430 @ 0x1407EF430 (sub_1407EF430.c)
 *     sub_14099CCC4 @ 0x14099CCC4 (sub_14099CCC4.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     sub_140369B48 @ 0x140369B48 (sub_140369B48.c)
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     sub_1407EDBB8 @ 0x1407EDBB8 (sub_1407EDBB8.c)
 *     sub_1407EF6BC @ 0x1407EF6BC (sub_1407EF6BC.c)
 */

void sub_1407EF514()
{
  unsigned int v0; // ebx
  const wchar_t *v1; // rax
  int v2; // r9d
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD Src[20]; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v6; // [rsp+A0h] [rbp+67h] BYREF
  int Buffer; // [rsp+A8h] [rbp+6Fh] BYREF
  int v8; // [rsp+ACh] [rbp+73h]

  v0 = dword_140C0C5F4;
  if ( dword_140C0C5F4 == 3 )
  {
    if ( dword_140C1F488 || !dword_140C1F390 )
      v0 = 0;
    else
      v0 = RtlNumberOfSetBits(&stru_140C1F380) == 0 ? 2 : 0;
  }
  if ( v0 != dword_140C095C8 )
  {
    v6 = v0;
    ++dword_140C4EF18;
    dword_140C095C8 = v0;
    v1 = (const wchar_t *)sub_1407EF6BC(v0);
    sub_140369B48(3LL, (__int64)"PopAdaptive: Global user presence/activity state: %S id: %I32u\n", v1, v2);
    sub_1407EDBB8(v4, v3, v0);
    sub_1407525EC(&SettingGuid, 4u, &v6);
    if ( v0 )
    {
      Buffer = 1;
      memset(Src, 0, 0x48uLL);
      Src[2] = 1;
    }
    else
    {
      Buffer = 0;
      memset(Src, 0, 0x48uLL);
      Src[2] = 0;
    }
    Src[0] = 12;
    sub_14036AF00(Src, 0x48uLL, 0);
    v8 = dword_140C4EF18;
    ZwUpdateWnfStateData(&stru_140011078, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
}
