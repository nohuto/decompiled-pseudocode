/*
 * XREFs of sub_140352D04 @ 0x140352D04
 * Callers:
 *     sub_1403525F0 @ 0x1403525F0 (sub_1403525F0.c)
 * Callees:
 *     sub_1402287C8 @ 0x1402287C8 (sub_1402287C8.c)
 *     sub_140228AA0 @ 0x140228AA0 (sub_140228AA0.c)
 *     sub_140263068 @ 0x140263068 (sub_140263068.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 */

void __fastcall sub_140352D04(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // rax
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v1 = *(_WORD *)(a1 + 78);
  if ( (v1 & 2) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 8);
    if ( v3 != v4 )
      sub_14028CE10(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 174LL)), v4 - v3);
  }
  else if ( (v1 & 4) != 0 )
  {
    v6 = *(__int64 **)(a1 + 16);
    if ( v6 )
      sub_140263068(v6);
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 8);
    if ( v7 != v8 )
    {
      v9[0] = (unsigned __int64)(v8 - v7);
      v9[2] = v9[0];
      v9[1] = 0LL;
      v10 = 0LL;
      sub_140228AA0((unsigned __int64 *)v9, 0, 0);
    }
  }
  else if ( (v1 & 0x100) == 0 )
  {
    v5 = *(volatile signed __int32 **)(a1 + 16);
    if ( v5 )
      sub_1402287C8(v5, 0);
  }
}
