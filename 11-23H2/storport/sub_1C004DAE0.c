/*
 * XREFs of sub_1C004DAE0 @ 0x1C004DAE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0004960 @ 0x1C0004960 (sub_1C0004960.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C004D914 @ 0x1C004D914 (sub_1C004D914.c)
 */

__int64 __fastcall sub_1C004DAE0(LPCGUID SettingGuid, unsigned __int8 *Value, ULONG ValueLength, __int64 Context)
{
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // r8

  v5 = *(_QWORD *)&SettingGuid->Data1 - 0x4B00E9D55D3E9A59LL;
  if ( *(_QWORD *)&SettingGuid->Data1 == 0x4B00E9D55D3E9A59LL )
    v5 = *(_QWORD *)SettingGuid->Data4 - 0x486551FF34FFBDA6LL;
  if ( v5 )
    return 0LL;
  if ( ValueLength == 4 && Value )
  {
    v6 = *Value;
    if ( sub_1C0008B84(Context) )
    {
      v7 = *(_QWORD *)(Context + 1792);
      if ( ((*(_DWORD *)(v7 + 32) >> 11) & 1) != v6 )
      {
        *(_DWORD *)(v7 + 32) ^= ((unsigned __int16)*(_DWORD *)(v7 + 32) ^ (unsigned __int16)((_WORD)v6 << 11)) & 0x800;
        if ( (*(_DWORD *)(*(_QWORD *)(Context + 1792) + 32LL) & 0x100) != 0 )
        {
          sub_1C004D914(Context);
          sub_1C0004960(Context);
        }
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1784));
    }
    return 0LL;
  }
  return 3221225485LL;
}
