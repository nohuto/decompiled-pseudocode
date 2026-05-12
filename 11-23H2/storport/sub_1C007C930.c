/*
 * XREFs of sub_1C007C930 @ 0x1C007C930
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     sub_1C0080EE8 @ 0x1C0080EE8 (sub_1C0080EE8.c)
 *     sub_1C0081208 @ 0x1C0081208 (sub_1C0081208.c)
 *     sub_1C0081248 @ 0x1C0081248 (sub_1C0081248.c)
 *     sub_1C0081288 @ 0x1C0081288 (sub_1C0081288.c)
 *     sub_1C00813B0 @ 0x1C00813B0 (sub_1C00813B0.c)
 *     sub_1C00815A8 @ 0x1C00815A8 (sub_1C00815A8.c)
 */

__int64 __fastcall sub_1C007C930(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int i; // esi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ecx
  unsigned int v13; // eax
  const void *v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF

  result = sub_1C0081208(a3, 1LL);
  if ( (int)result >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= *(_DWORD *)(a4 + 16) )
        return sub_1C0081248(a3);
      v8 = *(unsigned int *)(a3 + 12);
      v9 = *(_QWORD *)(a4 + 8) + 32LL * i;
      if ( (unsigned int)(v8 + 1) > *(_DWORD *)(a3 + 8) )
        return 3221225507LL;
      *(_BYTE *)(v8 + *(_QWORD *)a3) = -14;
      ++*(_DWORD *)(a3 + 12);
      if ( (unsigned int)(*(_DWORD *)(v9 + 12) - 7) > 7 || *(_DWORD *)(v9 + 8) > 8u )
      {
        v10 = *(unsigned int *)(v9 + 8);
        v11 = v9;
        if ( (unsigned int)v10 > 8 )
          v11 = *(_QWORD *)v9;
        result = sub_1C0080EE8(a3, v11, v10);
      }
      else if ( *(_QWORD *)v9 >= 0x40uLL )
      {
        result = sub_1C00813B0(a3);
      }
      else
      {
        result = sub_1C00815A8(a3);
      }
      if ( (int)result < 0 )
        return result;
      v12 = *(_DWORD *)(v9 + 28);
      if ( (unsigned int)(v12 - 7) > 7 || (v13 = *(_DWORD *)(v9 + 24), v13 > 8) )
      {
        if ( (unsigned int)(v12 - 15) > 2 )
        {
          if ( v12 != 1 )
            goto LABEL_24;
          result = sub_1C0081288(a3, *(_QWORD *)(v9 + 16), *(unsigned int *)(v9 + 24));
        }
        else
        {
          result = sub_1C0080EE8(a3, *(_QWORD *)(v9 + 16), *(unsigned int *)(v9 + 24));
        }
      }
      else
      {
        v14 = *(const void **)(v9 + 16);
        v16[0] = 0LL;
        memmove(v16, v14, v13);
        if ( v16[0] >= 0x40 )
          result = sub_1C00813B0(a3);
        else
          result = sub_1C00815A8(a3);
      }
      if ( (int)result < 0 )
        return result;
LABEL_24:
      v15 = *(unsigned int *)(a3 + 12);
      if ( (unsigned int)(v15 + 1) > *(_DWORD *)(a3 + 8) )
        return 3221225507LL;
      *(_BYTE *)(v15 + *(_QWORD *)a3) = -13;
      ++*(_DWORD *)(a3 + 12);
    }
  }
  return result;
}
