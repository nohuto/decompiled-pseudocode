/*
 * XREFs of sub_140201780 @ 0x140201780
 * Callers:
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall sub_140201780(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v10; // r8d
  unsigned int v11; // edx
  unsigned int v12; // r10d
  unsigned int i; // ebx
  char j; // al
  BOOL v16; // eax
  unsigned int v17; // ebx
  unsigned __int64 v18; // r9
  char v20; // [rsp+20h] [rbp-18h]
  unsigned int v21; // [rsp+50h] [rbp+18h]

  v20 = 1;
  v10 = *(_DWORD *)(a3 + 8196);
  v21 = v10;
  if ( v10 <= a8 )
    return 0;
  if ( (a8 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a8 + (unsigned __int64)(v10 - a8) < a8 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v11 = *a4;
  if ( a2 )
  {
    if ( a5 > v11 )
    {
      if ( v11 >= a6 )
      {
        *(_QWORD *)(a1 + 8LL * (v11 - a6)) = *a2;
        v11 = *a4;
      }
      *a4 = ++v11;
    }
  }
  else
  {
    v12 = a8;
    for ( i = 0; i < 2 && v11 < a5 && v12 < v10 && v12 >= a8 && v10 - v12 >= 4; ++i )
    {
      if ( v11 >= a6 )
        *(_QWORD *)(a1 + 8LL * (v11 - a6)) = *(unsigned int *)v12;
      v12 += 4;
      ++v11;
    }
    *a4 = v11;
    if ( v11 >= a5 )
      return v20;
  }
  for ( j = 1; v11 < a5 && a7 < v10; j = 0 )
  {
    if ( j )
    {
      v16 = a7 < a8;
    }
    else
    {
      if ( a7 <= a8 )
        break;
      v16 = 0;
    }
    if ( v16 )
      break;
    if ( v10 - a7 < 8 )
      break;
    v17 = *(_DWORD *)a7;
    v18 = *(unsigned int *)(a7 + 4LL);
    if ( (unsigned int)v18 < v10 && a8 <= (unsigned int)v18 )
      break;
    if ( v18 >= *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1496LL) || (unsigned int)v18 < 0x10000 )
      break;
    if ( v11 >= a6 )
      *(_QWORD *)(a1 + 8LL * (v11 - a6)) = *(unsigned int *)(a7 + 4LL);
    if ( a7 >= v17 || (v10 = v21, v17 >= v21) )
    {
      ++v11;
      break;
    }
    a7 = v17;
    ++v11;
  }
  *a4 = v11;
  return v20;
}
