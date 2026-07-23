/*
 * XREFs of sub_1406EC1C4 @ 0x1406EC1C4
 * Callers:
 *     sub_14025F4D4 @ 0x14025F4D4 (sub_14025F4D4.c)
 *     sub_14059D170 @ 0x14059D170 (sub_14059D170.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_140980040 @ 0x140980040 (sub_140980040.c)
 * Callees:
 *     sub_14025FF00 @ 0x14025FF00 (sub_14025FF00.c)
 *     sub_140268BB0 @ 0x140268BB0 (sub_140268BB0.c)
 *     sub_1402EF060 @ 0x1402EF060 (sub_1402EF060.c)
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 */

char __fastcall sub_1406EC1C4(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r11
  __int64 v3; // r11
  _QWORD *v4; // rcx
  __int64 v5; // r11

  LODWORD(v1) = sub_140268BB0(a1);
  if ( (_DWORD)v1 )
  {
    LODWORD(v1) = sub_14025FF00(v2);
    v4 = *(_QWORD **)(v3 + 8LL * (unsigned int)v1 + 16736);
    if ( v4[3] >= 0x10000uLL && v4[6] >= 0x10000uLL )
    {
      v1 = *v4 - 0x10000LL;
      if ( v1 >= v4[2] )
      {
        LODWORD(v1) = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 1144), 1, 0);
        if ( !(_DWORD)v1 )
        {
          LOBYTE(v1) = sub_1403606EC(*(_QWORD *)(v3 + 176));
          if ( (_BYTE)v1 )
            LOBYTE(v1) = sub_1402EF060(v5 + 1112, 3, 0xFFFFFFFF, *(_QWORD *)(v5 + 176));
          else
            _InterlockedExchange((volatile __int32 *)(v5 + 1144), 0);
        }
      }
    }
  }
  return v1;
}
