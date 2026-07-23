/*
 * XREFs of sub_140211410 @ 0x140211410
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_1402112F8 @ 0x1402112F8 (sub_1402112F8.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 * Callees:
 *     sub_14021162C @ 0x14021162C (sub_14021162C.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 */

int __fastcall sub_140211410(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v5; // rbx
  char v6; // si
  signed __int64 v7; // rax
  volatile signed __int32 *v8; // rdi
  signed __int64 *v9; // rbx
  signed __int64 v10; // rcx
  _QWORD *v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x20000) != 0 )
  {
    if ( (v2 & 0x100000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
      if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 840LL), 8u) & 7) != 0 )
      {
        v8 = *(volatile signed __int32 **)(a2 + 184);
        sub_1402F3290(v8);
        if ( (v8[210] & 7) != 0 )
          goto LABEL_17;
        _InterlockedAnd(v8, 0xFFFFFF7F);
      }
    }
    v5 = (_QWORD *)(a2 + 216);
    v6 = 0;
    *v5 = 0LL;
    v12 = 0LL;
    do
    {
      sub_1403405E0(a1, v5 - 27, &v12);
      v5 = v12;
      ++v6;
      if ( v12 )
        v12 = (_QWORD *)*v12;
      if ( (v6 & 0xF) == 0 )
        sub_140340300(a1 + 12760);
    }
    while ( v5 );
    LODWORD(v7) = sub_140340300(a1 + 12760);
  }
  else
  {
    v8 = *(volatile signed __int32 **)(a2 + 184);
    sub_1402F3290(v8);
    if ( (v8[210] & 7) != 0 )
    {
LABEL_17:
      LODWORD(v7) = sub_14021162C(a2, v8);
      return v7;
    }
    _InterlockedExchangeAdd(v8 + 210, 8u);
    _InterlockedAnd(v8, 0xFFFFFF7F);
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
    *(_BYTE *)(a2 + 388) = 6;
    v9 = (signed __int64 *)(a2 + 216);
    _m_prefetchw(&qword_140C2BB70);
    v7 = qword_140C2BB70;
    do
    {
      *v9 = v7;
      v10 = v7;
      v7 = _InterlockedCompareExchange64(&qword_140C2BB70, (signed __int64)v9, v7);
    }
    while ( v7 != v10 );
    if ( !v7 )
      LODWORD(v7) = KeSetEvent(&Event, 10, 0);
  }
  return v7;
}
