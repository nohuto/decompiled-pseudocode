/*
 * XREFs of sub_14024C714 @ 0x14024C714
 * Callers:
 *     sub_1406CDC5C @ 0x1406CDC5C (sub_1406CDC5C.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 */

char __fastcall sub_14024C714(__int64 a1, __int64 a2, int a3)
{
  __int16 v4; // ax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // rbx
  unsigned int v10; // esi

  if ( !a1 )
    return 0;
  v4 = *(_WORD *)(a1 + 2);
  if ( (v4 & 4) != 0 )
  {
    if ( v4 >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v5 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v5 )
        return 1;
      v6 = a1 + v5;
    }
    if ( v6 )
    {
      v7 = *(unsigned __int16 *)(v6 + 4);
      if ( *(_WORD *)(v6 + 4) )
      {
        if ( (*(_DWORD *)(a2 + 12) & 0x810) == 0 )
        {
          v9 = v6 + 8;
          v10 = 0;
          if ( v7 )
          {
            while ( 1 )
            {
              if ( (*(_BYTE *)(v9 + 1) & 8) == 0 )
              {
                if ( *(_BYTE *)v9 )
                {
                  if ( *(_BYTE *)v9 == 1 && (a3 & *(_DWORD *)(v9 + 4)) != 0 )
                    return 0;
                }
                else if ( (a3 & *(_DWORD *)(v9 + 4)) != 0 && RtlEqualSid(qword_140C5AFA8, (PSID)(v9 + 8)) )
                {
                  return 1;
                }
              }
              ++v10;
              v9 += *(unsigned __int16 *)(v9 + 2);
              if ( v10 >= v7 )
                return 0;
            }
          }
        }
      }
      return 0;
    }
  }
  return 1;
}
