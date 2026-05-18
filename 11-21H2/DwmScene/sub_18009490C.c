/*
 * XREFs of sub_18009490C @ 0x18009490C
 * Callers:
 *     sub_1800491C8 @ 0x1800491C8 (sub_1800491C8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18003D9EC @ 0x18003D9EC (sub_18003D9EC.c)
 *     sub_18003DAC0 @ 0x18003DAC0 (sub_18003DAC0.c)
 *     sub_18003DC08 @ 0x18003DC08 (sub_18003DC08.c)
 *     sub_1800681E8 @ 0x1800681E8 (sub_1800681E8.c)
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 */

__int64 __fastcall sub_18009490C(__int128 *a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r9
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rdx
  __int64 v12; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v16 = 0LL;
  v8 = *(_QWORD *)(v5 + 80);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    while ( v9 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
      if ( v10 == v9 )
      {
        v16 = *(_OWORD *)(v5 + 72);
        break;
      }
    }
  }
  sub_180094A54(a1, &v16);
  sub_1800681E8(*((_QWORD *)a1 + 2), (__int64)a2, a4);
  sub_18003D9EC(*a2);
  sub_18003DC08(*a2);
  v11 = *((_QWORD *)a1 + 1);
  v12 = *a2;
  v17 = 0LL;
  if ( !v11 )
LABEL_13:
    sub_1800120F4();
  v13 = *(_DWORD *)(v11 + 8);
  do
  {
    if ( !v13 )
      goto LABEL_13;
    v14 = v13;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v13 + 1, v13);
  }
  while ( v14 != v13 );
  v17 = *a1;
  sub_18003DAC0(v12);
  return sub_180010910((__int64)&v17);
}
