/*
 * XREFs of sub_140768EA8 @ 0x140768EA8
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 * Callees:
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     IoRequestDeviceEject @ 0x14055FE50 (IoRequestDeviceEject.c)
 *     sub_1405643B8 @ 0x1405643B8 (sub_1405643B8.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 *     sub_140768F5C @ 0x140768F5C (sub_140768F5C.c)
 *     sub_140947274 @ 0x140947274 (sub_140947274.c)
 *     sub_14094FBA0 @ 0x14094FBA0 (sub_14094FBA0.c)
 *     sub_14094FCD4 @ 0x14094FCD4 (sub_14094FCD4.c)
 *     sub_140AF7328 @ 0x140AF7328 (sub_140AF7328.c)
 */

__int64 __fastcall sub_140768EA8(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v7; // rcx
  int v8; // esi

  if ( (byte_140C0DD4B & 0x10) != 0 )
    sub_1405643B8(a1, (const EVENT_DESCRIPTOR *)qword_14003B390, a3, 2, *(const wchar_t **)(a1 + 48));
  v4 = *(_DWORD *)(a1 + 392);
  if ( *(_DWORD *)(a1 + 568) )
  {
    if ( v4 >= 0 )
    {
      sub_14094FCD4(a1);
LABEL_5:
      sub_140768F5C(a1);
      if ( !byte_140C46299 )
      {
        v7 = *(unsigned int *)(a1 + 448);
        if ( (_DWORD)v7 != -1 )
        {
          if ( (_DWORD)v7 == 1 )
          {
            sub_140AF7328(2LL, *(unsigned int *)(a1 + 452));
            v7 = *(unsigned int *)(a1 + 448);
          }
          sub_140AF7328(v7, *(unsigned int *)(a1 + 452));
        }
      }
      sub_1402DE844(a1, 777);
      goto LABEL_7;
    }
    sub_14094FBA0();
  }
  else if ( v4 >= 0 )
  {
    goto LABEL_5;
  }
  if ( v4 == -1073741102 )
  {
    v8 = 14;
    sub_140947274(*(_QWORD *)(a1 + 48), a2, 0x40000000LL);
  }
  else
  {
    v8 = 10;
  }
  sub_140765430(a1, 0, v8, v4);
  if ( *(_DWORD *)(a1 + 568) )
    IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
LABEL_7:
  if ( (byte_140C0DD4B & 0x10) != 0 )
    sub_1405643B8(*(_QWORD *)(a1 + 48), (const EVENT_DESCRIPTOR *)qword_14003B460, v5, 2, *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
