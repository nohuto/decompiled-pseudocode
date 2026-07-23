/*
 * XREFs of sub_1405183DC @ 0x1405183DC
 * Callers:
 *     HalSetBusDataByOffset @ 0x1403ADD00 (HalSetBusDataByOffset.c)
 *     HalGetBusDataByOffset @ 0x1403ADE20 (HalGetBusDataByOffset.c)
 *     sub_1405183C0 @ 0x1405183C0 (sub_1405183C0.c)
 *     sub_1405184A0 @ 0x1405184A0 (sub_1405184A0.c)
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405183DC(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _BYTE *v5; // rdi
  unsigned int v6; // esi
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  __int64 v10; // rdx

  v5 = (_BYTE *)a3;
  v6 = a2;
  if ( (unsigned int)a1 >= 2 )
    return 0LL;
  v8 = a2;
  v9 = *((_DWORD *)&unk_140C072C8 + 6 * (unsigned int)a1);
  if ( (int)a2 + a4 - 1 <= v9 )
    v9 = a2 + a4 - 1;
  sub_14022D9F0(a1, a2, a3);
  if ( v6 <= v9 )
  {
    if ( a5 )
    {
      do
      {
        LOBYTE(v10) = *v5;
        sub_14042A5E0(v8, v10);
        ++v5;
        ++v8;
      }
      while ( v8 <= v9 );
    }
    else
    {
      do
        *v5++ = sub_14042A5E0(v8++, v10);
      while ( v8 <= v9 );
    }
  }
  _InterlockedExchange(&dword_140C0B460, -1);
  if ( byte_140C4C1F0 )
    _enable();
  return v8 - v6;
}
