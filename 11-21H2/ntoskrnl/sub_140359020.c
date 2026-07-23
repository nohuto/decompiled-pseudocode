/*
 * XREFs of sub_140359020 @ 0x140359020
 * Callers:
 *     <none>
 * Callees:
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140359140 @ 0x140359140 (sub_140359140.c)
 *     sub_1403591D8 @ 0x1403591D8 (sub_1403591D8.c)
 */

void __fastcall sub_140359020(struct _KDPC *Dpc, PVOID DeferredContext, char *SystemArgument1, PVOID SystemArgument2)
{
  _QWORD **v4; // rsi
  char *v6; // rbp
  _QWORD *v7; // rcx
  char v8; // si
  _QWORD *v9; // rbx
  volatile signed __int16 *v10; // rbx
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = (_QWORD **)(SystemArgument1 + 35696);
  v6 = SystemArgument1 + 35704;
  while ( 1 )
  {
    v7 = *v4;
    if ( !*v4 )
    {
      sub_140359140(v6, v4, &v12);
      v7 = *v4;
      if ( !*v4 )
        break;
    }
    v10 = (volatile signed __int16 *)(v7 - 102);
    *v4 = (_QWORD *)*v7;
    *v7 = 1LL;
    _InterlockedOr(v11, 0);
    if ( *((_BYTE *)v7 + 55) )
      sub_1403591D8((_DWORD)v7 - 816, 0, 0, 1, (__int64)&v12, (__int64)v6, 0LL);
    _InterlockedDecrement16(v10 + 434);
  }
  *((_QWORD *)SystemArgument1 + 4468) = 0LL;
  v8 = 0;
  v9 = v12;
  if ( v12 )
  {
    v12 = (_QWORD *)*v12;
    do
    {
      sub_1403405E0((__int64)SystemArgument1, (ULONG_PTR)(v9 - 27), (__int64)&v12);
      v9 = v12;
      ++v8;
      if ( v12 )
        v12 = (_QWORD *)*v12;
      if ( (v8 & 0xF) == 0 )
        sub_140340300((unsigned __int8 *)SystemArgument1 + 12760);
    }
    while ( v9 );
  }
  sub_140340300((unsigned __int8 *)SystemArgument1 + 12760);
}
