/*
 * XREFs of sub_1403D7ED0 @ 0x1403D7ED0
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1403D7DF0 (KeAddTriageDumpDataBlock.c)
 *     sub_140567DA0 @ 0x140567DA0 (sub_140567DA0.c)
 *     sub_140A656A0 @ 0x140A656A0 (sub_140A656A0.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 */

char __fastcall sub_1403D7ED0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // edx
  __int64 *v10; // rcx
  __int64 v11; // rax

  v5 = 0;
  if ( (unsigned __int8)sub_1403D7FD4(a1, 48LL) )
  {
    v6 = *(_DWORD *)(a1 + 20);
    if ( *(_DWORD *)(a1 + 16) <= v6 )
    {
      v7 = 16LL * v6;
      if ( v7 <= 0xFFFFFFFF
        && (int)v7 + 48 >= (unsigned int)v7
        && (unsigned __int8)sub_1403D7FD4(a1 + 48, v7)
        && (unsigned __int8)sub_1403D7FD4(*(_QWORD *)a1, 16LL)
        && (unsigned __int8)sub_1403D7FD4(*(_QWORD *)(a1 + 8), 16LL)
        && *(_QWORD *)(*(_QWORD *)a1 + 8LL) == a1
        && **(_QWORD **)(a1 + 8) == a1
        && (!a3 || *(_DWORD *)(a1 + 28) <= a3) )
      {
        v8 = *(_DWORD *)(a1 + 16);
        v9 = 0;
        if ( v8 )
        {
          v10 = (__int64 *)(a1 + 56);
          while ( 1 )
          {
            v11 = *v10;
            if ( (unsigned __int64)*v10 > 0xFFFFFFFF || (unsigned int)v11 + v5 < v5 )
              break;
            ++v9;
            v10 += 2;
            v5 += v11;
            if ( v9 >= v8 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          if ( *(_DWORD *)(a1 + 24) == v5 && v5 <= *(_DWORD *)(a1 + 28) )
            return 1;
        }
      }
    }
  }
  return 0;
}
