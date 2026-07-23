/*
 * XREFs of sub_1405A9530 @ 0x1405A9530
 * Callers:
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 * Callees:
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_1405A828C @ 0x1405A828C (sub_1405A828C.c)
 */

unsigned __int64 __fastcall sub_1405A9530(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  __int64 v5; // rax
  __int64 v6; // rbx

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
  {
    v3 = *(_QWORD **)(a1 + 96);
    *(_QWORD *)(a1 + 96) = *v3;
    *(_QWORD *)(a1 + 104) = v2 - 1;
    return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v3 + 0x44000000000LL) >> 4);
  }
  else
  {
    v5 = sub_1405A828C(
           a2,
           *(unsigned __int16 *)(*(_QWORD *)(qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)] + 192)
                               + 138LL),
           0,
           1LL);
    v6 = v5;
    if ( v5 )
    {
      sub_140313CA0(v5, 0LL, 0);
      return 0xAAAAAAAAAAAAAAABuLL * ((v6 + 0x220000000000LL) >> 4);
    }
    else
    {
      return -1LL;
    }
  }
}
