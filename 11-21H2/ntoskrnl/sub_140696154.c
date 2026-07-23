/*
 * XREFs of sub_140696154 @ 0x140696154
 * Callers:
 *     sub_140695A40 @ 0x140695A40 (sub_140695A40.c)
 *     sub_1406960FC @ 0x1406960FC (sub_1406960FC.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 */

char __fastcall sub_140696154(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  _BYTE *v9; // rsi
  __int64 v10; // r15
  unsigned int v12; // r15d
  __int64 v13; // rsi
  unsigned int v14; // ebp
  void *v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rsi
  unsigned int v18; // ebp
  void *v19; // r13
  void *v20; // [rsp+20h] [rbp-38h]

  if ( a2 == a4 )
  {
    v8 = 0;
    if ( a2 )
    {
      v9 = (_BYTE *)(a3 + 8);
      v10 = a1 - a3;
      while ( RtlEqualSid(*(PSID *)&v9[v10 - 8], *((PSID *)v9 - 1)) && ((*v9 ^ v9[v10]) & 0x14) == 0 )
      {
        ++v8;
        v9 += 16;
        if ( v8 >= a2 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( v8 == a2 )
        return 1;
    }
    v12 = v8;
    if ( v8 < a2 )
    {
      v13 = a1 + 16LL * v8;
      do
      {
        v14 = v8;
        if ( v8 >= a4 )
        {
LABEL_17:
          if ( v14 == a4 )
            return 0;
        }
        else
        {
          v15 = *(void **)v13;
          v20 = *(void **)v13;
          while ( !RtlEqualSid(v15, *(PSID *)(a3 + 16LL * v14))
               || ((*(_BYTE *)(v13 + 8) ^ *(_BYTE *)(a3 + 16LL * v14 + 8)) & 0x14) != 0 )
          {
            v15 = v20;
            if ( ++v14 >= a4 )
              goto LABEL_17;
          }
        }
        ++v12;
        v13 += 16LL;
      }
      while ( v12 < a2 );
    }
    v16 = v8;
    if ( v8 < a4 )
    {
      v17 = a3 + 16LL * v8;
      do
      {
        v18 = v8;
        if ( v8 < a2 )
        {
          v19 = *(void **)v17;
          while ( !RtlEqualSid(v19, *(PSID *)(a1 + 16LL * v18))
               || ((*(_BYTE *)(v17 + 8) ^ *(_BYTE *)(a1 + 16LL * v18 + 8)) & 0x14) != 0 )
          {
            if ( ++v18 >= a2 )
            {
              if ( v18 == a2 )
                return 0;
              break;
            }
          }
        }
        ++v16;
        v17 += 16LL;
      }
      while ( v16 < a4 );
    }
    return 1;
  }
  return 0;
}
