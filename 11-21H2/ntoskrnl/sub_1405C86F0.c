/*
 * XREFs of sub_1405C86F0 @ 0x1405C86F0
 * Callers:
 *     sub_1405C7A38 @ 0x1405C7A38 (sub_1405C7A38.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405C85B0 @ 0x1405C85B0 (sub_1405C85B0.c)
 */

__int64 __fastcall sub_1405C86F0(__int64 a1)
{
  unsigned __int16 *v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v9; // [rsp+30h] [rbp-30h]
  int v10; // [rsp+32h] [rbp-2Eh]
  __int16 v11; // [rsp+36h] [rbp-2Ah]
  _QWORD v12[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v13; // [rsp+48h] [rbp-18h]
  unsigned int v14; // [rsp+70h] [rbp+10h] BYREF

  v1 = *(unsigned __int16 **)(a1 + 8);
  v2 = 0;
  v10 = 0;
  v11 = 0;
  v14 = 0;
  v9 = 0;
  v8[1] = v1;
  v8[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v14, v8) )
  {
    v3 = sub_140348800(v14);
    v13 = 0LL;
    BYTE12(v13) = 1;
    v5 = v3;
    v6 = *(_QWORD *)(v3 + 33600);
    v12[0] = 0LL;
    *(_QWORD *)&v13 = v3;
    v12[1] = qword_140D06C58;
    while ( !(unsigned __int8)sub_14042A5E0(*(_QWORD *)(v6 + 680), v4) )
    {
      if ( (*(_DWORD *)(v5 + 33672) & 0xFF000000) != 0x5000000 )
        return (unsigned int)-1073741782;
      sub_1405C85B0((__int64)v12);
    }
  }
  return v2;
}
