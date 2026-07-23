/*
 * XREFs of sub_140252050 @ 0x140252050
 * Callers:
 *     sub_140251EA0 @ 0x140251EA0 (sub_140251EA0.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 * Callees:
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_140252050(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  _DWORD *v4; // r10
  unsigned int v5; // ecx
  int v6; // ebx
  __int64 v7; // rdx
  int v8; // r11d
  __int64 *v9; // r8
  __int64 *i; // rax
  int v12; // [rsp+4Ch] [rbp+14h]

  v12 = HIDWORD(a2);
  v2 = sub_140252134(*a1);
  v5 = 0;
  v6 = v2;
  if ( v2 )
  {
    v7 = v2 + 264;
    v8 = 0;
    v9 = *(__int64 **)(v2 + 264);
    for ( i = v9; i != (__int64 *)v7; i = (__int64 *)*i )
    {
      ++v8;
      if ( *((_DWORD *)i + 4) == (_DWORD)v3 && *((_DWORD *)i + 5) <= v12 && *((_DWORD *)i + 6) > v12 )
        break;
    }
    if ( i == (__int64 *)v7 )
    {
      if ( v8 == 1 )
      {
        *v4 = *((_DWORD *)v9 + 4);
        v4[1] = *((_DWORD *)v9 + 5);
      }
      else
      {
        sub_14051E038(v6, 23, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 3586);
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      *(_QWORD *)v4 = v3;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
