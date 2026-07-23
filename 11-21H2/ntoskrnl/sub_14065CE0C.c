/*
 * XREFs of sub_14065CE0C @ 0x14065CE0C
 * Callers:
 *     sub_14065CD00 @ 0x14065CD00 (sub_14065CD00.c)
 *     sub_1407426B8 @ 0x1407426B8 (sub_1407426B8.c)
 * Callees:
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_14065CF84 @ 0x14065CF84 (sub_14065CF84.c)
 *     sub_14065D410 @ 0x14065D410 (sub_14065D410.c)
 *     sub_14065D4F8 @ 0x14065D4F8 (sub_14065D4F8.c)
 *     sub_1406E2624 @ 0x1406E2624 (sub_1406E2624.c)
 *     sub_1406E26C4 @ 0x1406E26C4 (sub_1406E26C4.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

__int64 __fastcall sub_14065CE0C(__int64 a1)
{
  char v2; // bp
  signed __int32 v3; // eax
  int v4; // ebx
  ULONG_PTR v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF
  _LIST_ENTRY v18; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v18 = 0LL;
  InitializeListHead(&v18);
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v3 )
  {
    v4 = -1072103421;
    if ( v3 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 )
    {
      v2 = 1;
      sub_14071B6EC();
    }
    v4 = sub_14065D4F8(v5, &v18);
    if ( v4 >= 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
      {
        sub_14065CF84(v5, v6, &v18);
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v17, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
        v4 = -1072103421;
      }
      else
      {
        sub_14065D410(v5, &v18);
        if ( v2 )
        {
          sub_14065CF84(v5, v7, &v18);
          sub_140346C60(&v18);
          sub_140AB4260(v9, v8, v10, v11, v18.Flink, v18.Blink);
          v2 = 0;
          if ( !*(_BYTE *)(a1 + 24) )
            sub_1406E26C4(v5);
        }
        v4 = 0;
      }
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 1) == 1 )
    {
      if ( !*(_BYTE *)(a1 + 24) )
        sub_1406E2624(a1);
    }
    else
    {
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v17, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
    }
    if ( v2 )
    {
      sub_140346C60(&v18);
      sub_140AB4260(v13, v12, v14, v15, v18.Flink, v18.Blink);
    }
  }
  return (unsigned int)v4;
}
