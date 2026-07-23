/*
 * XREFs of sub_140861690 @ 0x140861690
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 */

__int64 __fastcall sub_140861690(PRTL_RUN_ONCE a1, char *a2, PVOID *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  _DWORD *v7; // rsi

  v3 = 0;
  if ( a2 && a3 )
  {
    v6 = sub_140792CCC((__int64)a2, 0LL, 30721);
    v7 = a2 + 1352;
    *v7 = v6;
    if ( v6 )
    {
      *a3 = v7;
      return 1;
    }
    else
    {
      sub_1406E0C3C(1LL, (__int64)"InitOnceGetStringTableOffset");
    }
    return v3;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"InitOnceGetStringTableOffset");
    return 0LL;
  }
}
