/*
 * XREFs of sub_140229590 @ 0x140229590
 * Callers:
 *     <none>
 * Callees:
 *     sub_140229640 @ 0x140229640 (sub_140229640.c)
 *     sub_14022973C @ 0x14022973C (sub_14022973C.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 */

__int64 __fastcall sub_140229590(__int64 a1)
{
  unsigned int *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // rbx
  _OWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp-18h]

  v1 = *(unsigned int **)(a1 + 168);
  memset(v7, 0, sizeof(v7));
  v9 = 0LL;
  v3 = *((_QWORD *)v1 + 2);
  v8 = 0LL;
  sub_14032F1B0(v3);
  v4 = *((_QWORD *)v1 + 1);
  if ( v4 )
  {
    sub_14022973C(v4, v7);
    *((_QWORD *)v1 + 1) = 0LL;
    if ( (_QWORD)v8 )
    {
      if ( qword_140C593D8 )
      {
        v6 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 174LL));
        sub_14028CE10(v6, v8 - *((_QWORD *)&v7[0] + 1));
        sub_140229640(v6, v8, *v1);
      }
    }
  }
  return 0LL;
}
