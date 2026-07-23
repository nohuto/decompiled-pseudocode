/*
 * XREFs of sub_14069A6F4 @ 0x14069A6F4
 * Callers:
 *     sub_1405B5EB8 @ 0x1405B5EB8 (sub_1405B5EB8.c)
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14069A6F4(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int i; // ebp
  _DWORD *v3; // rdi
  unsigned int v4; // edx
  int v5; // eax
  _DWORD *v6; // r14
  unsigned __int64 v7; // rbx

  v1 = a1 + 64;
  for ( i = 0; i < 3; ++i )
  {
    v3 = *(_DWORD **)v1;
    if ( *(_QWORD *)v1 )
    {
      do
      {
        v4 = v3[11];
        v5 = v3[10];
        v6 = *(_DWORD **)v3;
        if ( v4 != v5 )
        {
          v7 = (unsigned __int64)(v5 - v4) >> 12;
          memmove(v3 + 12, &v3[2 * ((unsigned __int64)v4 >> 12) + 12], 8 * v7);
          *((_QWORD *)v3 + 5) = (unsigned int)((_DWORD)v7 << 12);
        }
        sub_140221A30((ULONG_PTR)v3, 0);
        ExFreePoolWithTag(v3, 0);
        v3 = v6;
      }
      while ( v6 );
    }
    *(_QWORD *)v1 = 0LL;
    *(_QWORD *)(v1 + 24) = 0LL;
    v1 += 8LL;
  }
}
