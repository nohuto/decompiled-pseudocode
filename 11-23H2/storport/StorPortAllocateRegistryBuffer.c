/*
 * XREFs of StorPortAllocateRegistryBuffer @ 0x1C0045D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0078360 @ 0x1C0078360 (sub_1C0078360.c)
 */

__int64 __fastcall StorPortAllocateRegistryBuffer(void *a1, _DWORD *a2)
{
  __int64 v4; // rbx
  _DWORD *v5; // rax
  _DWORD *v6; // rsi

  v4 = 0LL;
  if ( MmIsAddressValid(a1) && (v5 = sub_1C000E2EC((__int64)a1)) != 0LL )
  {
    v6 = v5 + 486;
    v5[498] = *a2;
    if ( (int)sub_1C0078360(v5 + 486) < 0 )
    {
      *a2 = 0;
    }
    else
    {
      *a2 = v6[10];
      return *((_QWORD *)v6 + 4);
    }
    return v4;
  }
  else
  {
    *a2 = 0;
    return 0LL;
  }
}
