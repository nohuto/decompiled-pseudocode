/*
 * XREFs of StorPortFreeRegistryBuffer @ 0x1C00463F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C007854C @ 0x1C007854C (sub_1C007854C.c)
 */

char __fastcall StorPortFreeRegistryBuffer(void *a1)
{
  _DWORD *v2; // rax

  LOBYTE(v2) = MmIsAddressValid(a1);
  if ( (_BYTE)v2 )
  {
    v2 = sub_1C000E2EC((__int64)a1);
    if ( v2 )
      LOBYTE(v2) = sub_1C007854C(v2 + 486);
  }
  return (char)v2;
}
