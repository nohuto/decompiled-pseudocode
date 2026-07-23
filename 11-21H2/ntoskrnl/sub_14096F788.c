/*
 * XREFs of sub_14096F788 @ 0x14096F788
 * Callers:
 *     sub_14059E4B0 @ 0x14059E4B0 (sub_14059E4B0.c)
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140540EA0 @ 0x140540EA0 (sub_140540EA0.c)
 *     sub_14059F6F4 @ 0x14059F6F4 (sub_14059F6F4.c)
 *     sub_1409697E4 @ 0x1409697E4 (sub_1409697E4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14096F788(struct _FILE_OBJECT *a1, unsigned __int64 a2, _DWORD *a3, unsigned int **a4)
{
  struct _FILE_OBJECT *v7; // rbx
  int v8; // r15d
  unsigned int i; // edi
  _DWORD *v10; // rax
  _DWORD *v11; // rsi
  int v13; // ebx
  unsigned int v14; // ebp
  unsigned int *v15; // rax

  *a4 = 0LL;
  v7 = a1;
  v8 = 1;
  for ( i = ((__rdtsc() >> 4) & 7) + 8; ; i = v14 )
  {
    while ( 1 )
    {
      if ( !i )
        return 3221225626LL;
      v10 = sub_1402828F0(64, 16LL * (i - 1) + 24, 0x3546694Du);
      v11 = v10;
      if ( v10 )
        break;
      if ( !v8 )
        return 3221225626LL;
      i >>= 1;
    }
    v10[1] = 0;
    v8 = 0;
    *v10 = i;
    a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v13 = sub_140540EA0(v7, 1, 0LL, a2, v10);
    if ( v13 < 0 )
      break;
    v14 = v11[1];
    if ( v14 <= i )
    {
      if ( (unsigned int)sub_1409697E4((__int64)v11) )
      {
        if ( v14 )
        {
          v15 = sub_14059F6F4((__int64)v11, a3, 0);
          if ( v15 )
            *a4 = v15;
          else
            v13 = -1073741670;
        }
        else
        {
          v13 = -1073741823;
        }
      }
      else
      {
        v13 = -1073740761;
      }
      break;
    }
    v11[1] = i;
    ExFreePoolWithTag(v11, 0);
    v7 = a1;
  }
  ExFreePoolWithTag(v11, 0);
  return (unsigned int)v13;
}
