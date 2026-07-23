/*
 * XREFs of sub_1403545B0 @ 0x1403545B0
 * Callers:
 *     sub_140353FB0 @ 0x140353FB0 (sub_140353FB0.c)
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 * Callees:
 *     sub_14030B3F0 @ 0x14030B3F0 (sub_14030B3F0.c)
 *     sub_140354698 @ 0x140354698 (sub_140354698.c)
 */

char sub_1403545B0()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int16 *v1; // rdx
  __int64 v2; // rsi
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rax
  int v7; // eax
  unsigned __int16 *v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+2Ch] [rbp-1Ch]
  int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0LL;
  v11 = 0;
  v1 = (unsigned __int16 *)qword_140D31700[*(unsigned __int16 *)(*((_QWORD *)CurrentPrcb + 24) + 138LL)];
  v2 = 4LL * *((unsigned int *)CurrentPrcb + 9) + 13690336;
  v3 = *v1;
  while ( 1 )
  {
    v9 = *((_DWORD *)v1 + 4);
    v10 = 0;
    v8 = v1;
    while ( !(unsigned int)sub_140354698(&v8, &v12) )
    {
      v4 = *(_QWORD *)(v12 + 64);
      v5 = *(_QWORD *)(v12 + 128);
      if ( v12 == *((_QWORD *)CurrentPrcb + 24) )
      {
        v4 &= ~(1LL << *((_BYTE *)CurrentPrcb + 209));
        _bittestandreset64(&v5, *(_DWORD *)(v2 + 0x140000000LL) & 0x3F);
      }
      if ( v4 != v5 )
        return 0;
    }
    v7 = sub_14030B3F0(v3, &v11);
    if ( v7 == -1 )
      break;
    v1 = (unsigned __int16 *)qword_140D31700[v7];
  }
  return 1;
}
