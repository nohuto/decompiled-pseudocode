/*
 * XREFs of sub_1408553A0 @ 0x1408553A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_140855418 @ 0x140855418 (sub_140855418.c)
 *     sub_1409980BC @ 0x1409980BC (sub_1409980BC.c)
 */

__int64 __fastcall sub_1408553A0(int a1, __int64 *a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  char v6; // bl
  char v7; // r10
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx

  v6 = 0;
  v7 = 0;
  if ( !a1 )
  {
    v7 = 1;
    goto LABEL_45;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
LABEL_45:
    result = sub_1409980BC((int)a5 - 232, (_DWORD)a2, a3, a4, (__int64)a6, v7);
    goto LABEL_9;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    v6 = 1;
    goto LABEL_12;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_12:
    *a6 = 0;
    v12 = *a2;
    v13 = 0x4ABC7F39A5B32DDDLL - *a2;
    if ( *a2 == 0x4ABC7F39A5B32DDDLL )
      v13 = 0xBB9EB5430E9092B8uLL - a2[1];
    if ( v13 )
    {
      v15 = 0x497AD653995E6B7FLL - v12;
      if ( v12 == 0x497AD653995E6B7FLL )
        v15 = 0x1BF290CA33678B9LL - a2[1];
      if ( v15 )
      {
        v16 = 0x4E51F71C4838FE4FLL - v12;
        if ( v12 == 0x4E51F71C4838FE4FLL )
          v16 = 0x6C4CACA73084CC9ELL - a2[1];
        if ( v16 )
        {
          v17 = 0x4A5E81F8D67ABD39LL - v12;
          if ( v12 == 0x4A5E81F8D67ABD39LL )
            v17 = 0xEE12C91EE3725281uLL - a2[1];
          if ( v17 )
          {
            v18 = 0x423B1A4CA852C2C8LL - v12;
            if ( v12 == 0x423B1A4CA852C2C8LL )
              v18 = 0x881A93820DF32C8CuLL - a2[1];
            if ( v18 )
            {
              v19 = 0x4C7B688048F377B8LL - v12;
              if ( v12 == 0x4C7B688048F377B8LL )
                v19 = 0x4D65C6760138DC8BLL - a2[1];
              if ( v19 )
                return 3221226133LL;
              v14 = &dword_140D0152C;
            }
            else
            {
              v14 = &dword_140D048CC;
            }
          }
          else
          {
            v14 = (volatile signed __int32 *)&unk_140D048C8;
          }
        }
        else
        {
          v14 = (volatile signed __int32 *)&unk_140D048C4;
        }
      }
      else
      {
        v14 = &dword_140CE207C;
      }
    }
    else
    {
      v14 = &dword_140CE2078;
    }
    if ( v6 )
    {
      if ( _InterlockedIncrement(v14) == 1 && v14 == (volatile signed __int32 *)&unk_140D048C8 )
        sub_1402E2D20((unsigned __int64)&stru_140C1FA00, 0LL, 10000, 0, (__int64)&dword_140C1FA40);
    }
    else if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 && v14 == (volatile signed __int32 *)&unk_140D048C8 )
    {
      KeCancelTimer(&stru_140C1FA00);
    }
    return 0LL;
  }
  if ( v10 != 3 )
  {
    *a6 = 0;
    return 3221225488LL;
  }
  result = sub_140855418(*(unsigned int *)(a5 - 33796));
LABEL_9:
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
