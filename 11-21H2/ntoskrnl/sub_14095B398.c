/*
 * XREFs of sub_14095B398 @ 0x14095B398
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 * Callees:
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     IoRequestDeviceEject @ 0x14055FE50 (IoRequestDeviceEject.c)
 *     sub_1405643B8 @ 0x1405643B8 (sub_1405643B8.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 *     sub_14076AC70 @ 0x14076AC70 (sub_14076AC70.c)
 *     sub_140947274 @ 0x140947274 (sub_140947274.c)
 */

__int64 __fastcall sub_14095B398(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // esi
  __int64 v6; // r8

  if ( (byte_140C0DD4B & 0x10) != 0 )
    sub_1405643B8(a1, (const EVENT_DESCRIPTOR *)qword_14003B6B0, a3, 2, *(const wchar_t **)(a1 + 48));
  v4 = *(_DWORD *)(a1 + 392);
  if ( v4 >= 0 )
  {
    sub_1402DE844(a1, 778);
    if ( (*(_DWORD *)(a1 + 704) & 0x20) != 0 )
    {
      sub_1402D25CC(*(_QWORD *)(a1 + 32));
      *(_DWORD *)(a1 + 704) &= ~0x20u;
    }
    sub_14076AC70(a1);
  }
  else
  {
    if ( v4 == -1073741102 )
    {
      v5 = 14;
      sub_140947274(*(_QWORD *)(a1 + 48), a2, 0x80000000LL);
    }
    else
    {
      v5 = 10;
    }
    sub_140765430(a1, 0, v5, v4);
    if ( *(_DWORD *)(a1 + 568) )
      IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
  }
  if ( (byte_140C0DD4B & 0x10) != 0 )
    sub_1405643B8(*(_QWORD *)(a1 + 48), (const EVENT_DESCRIPTOR *)qword_14003B710, v6, 2, *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
