/*
 * XREFs of sub_1403D8EA0 @ 0x1403D8EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403D8F10 @ 0x1403D8F10 (sub_1403D8F10.c)
 */

__int64 __fastcall sub_1403D8EA0(__int64 a1, int *a2, _WORD *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = 0;
  v11 = 0;
  if ( v3 == -1 )
  {
    result = sub_1403D8F10(a1, &v11, 0LL);
    if ( (int)result < 0 )
      return result;
    v3 = v11;
    *a2 = v11;
  }
  if ( qword_140C4ACC8 )
  {
    v8 = 0;
    v9 = *(_DWORD *)(qword_140C4AD18 + 60);
    if ( !v9 )
      return 3221226021LL;
    while ( *(_DWORD *)(*(_QWORD *)qword_140C4AD18 + 4LL * v8) != v3 )
    {
      if ( ++v8 >= v9 )
        return 3221226021LL;
    }
    v10 = *(_DWORD *)(qword_140C4AD18 + 56);
    if ( !v10 )
      return 3221226021LL;
    while ( *(_DWORD *)(*(_QWORD *)(qword_140C4AD18 + 24) + 4LL * v4) != *(_DWORD *)(*(_QWORD *)(qword_140C4AD18 + 16)
                                                                                   + 4LL * v8) )
    {
      if ( ++v4 >= v10 )
        return 3221226021LL;
    }
    *a3 = v4;
  }
  else
  {
    *a3 = -1;
  }
  return 0LL;
}
