/*
 * XREFs of sub_1403569B8 @ 0x1403569B8
 * Callers:
 *     sub_1403567F8 @ 0x1403567F8 (sub_1403567F8.c)
 * Callees:
 *     sub_140356B58 @ 0x140356B58 (sub_140356B58.c)
 */

volatile signed __int32 *__fastcall sub_1403569B8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        volatile signed __int32 *a5)
{
  int v9; // esi
  char v10; // r15
  volatile signed __int32 *result; // rax
  unsigned int v12; // edi
  unsigned int v13; // esi

  v9 = *(_DWORD *)&byte_140002ED8[136 * a4];
  if ( !v9 )
  {
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFFFFC | 2;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a3 + 4);
    goto LABEL_8;
  }
  v10 = *(_BYTE *)(a3 + 16);
  result = (volatile signed __int32 *)sub_140356B58((int)a1 + 72, a4, 0, 0, v10);
  if ( (_BYTE)result == 1 )
    return result;
  if ( v9 == 2 )
  {
    v13 = *(_DWORD *)(a2 + 8);
    v12 = v13;
    goto LABEL_12;
  }
  v12 = *(_DWORD *)(a1 + 180);
  if ( v9 == 3 )
  {
    v13 = v12 - 1;
    v12 = 0;
LABEL_12:
    while ( 1 )
    {
      result = (volatile signed __int32 *)sub_140356B58((unsigned int)a1 + 208 * v12 + 248, a4, 1, 3, v10);
      if ( (_BYTE)result == 1 )
        break;
      if ( ++v12 > v13 )
        goto LABEL_6;
    }
  }
  else
  {
    v13 = 0;
    if ( !v12 )
      goto LABEL_12;
LABEL_6:
    result = (volatile signed __int32 *)sub_140356B58((int)a1 + 72, a4, 4, 5, v10);
    if ( (_BYTE)result != 1 )
    {
      *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFFFFC | 2;
      *(_DWORD *)(a3 + 8) = *(_DWORD *)(a3 + 4);
LABEL_8:
      result = a5;
      _InterlockedIncrement(a5);
    }
  }
  return result;
}
