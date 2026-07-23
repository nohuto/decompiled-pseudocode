/*
 * XREFs of sub_1407F5230 @ 0x1407F5230
 * Callers:
 *     sub_1407F5160 @ 0x1407F5160 (sub_1407F5160.c)
 * Callees:
 *     sub_1409673F4 @ 0x1409673F4 (sub_1409673F4.c)
 */

__int64 __fastcall sub_1407F5230(unsigned int *a1, unsigned int *a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v6; // r8
  unsigned int *v7; // r11
  unsigned int v8; // eax
  unsigned int i; // ecx
  __int64 v10; // rdx
  signed __int32 *v11; // r11
  int v12; // eax
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  unsigned int v16; // ebx
  int v17; // edi
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  unsigned int v22; // r10d

  v3 = 0;
  v6 = 0xFFFFFFFFLL;
  v7 = a1;
  if ( a1 != a2 )
  {
    while ( 2 )
    {
      v8 = *v7;
      for ( i = 0; i < 0x20; ++i )
      {
        if ( (v8 & 1) != 0 )
        {
          v6 = 0xFFFFFFFFLL;
          v3 = 0;
        }
        else
        {
          if ( (_DWORD)v6 == -1 )
            v6 = i + 32 * (unsigned int)(v7 - a1);
          if ( ++v3 == a3 )
          {
            v10 = 1LL;
            v11 = (signed __int32 *)&a1[(unsigned __int64)(unsigned int)v6 >> 5];
            v12 = v6 & 0x1F;
            if ( (v6 & 0x1F) == 0 )
              goto LABEL_10;
            v16 = 32 - v12;
            if ( v3 < 32 - v12 )
              v16 = v3;
            v17 = ((1 << v16) - 1) << v12;
            _m_prefetchw(v11);
            v18 = *v11;
            if ( (*v11 & v17) == 0 )
            {
              while ( 1 )
              {
                v19 = v18;
                v18 = _InterlockedCompareExchange(v11, v17 | v18, v18);
                if ( v19 == v18 )
                  break;
                if ( (v18 & v17) != 0 )
                  return 4294967294LL;
              }
              v3 -= v16;
              ++v11;
LABEL_10:
              if ( v3 >= 0x20 )
              {
                while ( 1 )
                {
                  _m_prefetchw(v11);
                  v20 = *v11;
                  if ( *v11 )
                    break;
                  while ( 1 )
                  {
                    v21 = v20;
                    v20 = _InterlockedCompareExchange(v11, -1, v20);
                    if ( v21 == v20 )
                      break;
                    if ( v20 )
                      goto LABEL_31;
                  }
                  v3 -= 32;
                  ++v11;
                  if ( v3 < 0x20 )
                    goto LABEL_11;
                }
              }
              else
              {
LABEL_11:
                if ( !v3 )
                  return (unsigned int)v6;
                v10 = (unsigned int)((1 << v3) - 1);
                _m_prefetchw(v11);
                v13 = *v11;
                while ( (v13 & (unsigned int)v10) == 0 )
                {
                  v14 = v13;
                  v13 = _InterlockedCompareExchange(v11, v10 | v13, v13);
                  if ( v14 == v13 )
                    return (unsigned int)v6;
                }
              }
LABEL_31:
              v22 = a3 - v3;
              if ( v22 )
                sub_1409673F4(a1, v10, v6, v22);
            }
            return 4294967294LL;
          }
        }
        v8 >>= 1;
      }
      if ( ++v7 != a2 )
        continue;
      break;
    }
  }
  return 0xFFFFFFFFLL;
}
