/*
 * XREFs of sub_1407B8A60 @ 0x1407B8A60
 * Callers:
 *     sub_140709F54 @ 0x140709F54 (sub_140709F54.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 */

void __fastcall sub_1407B8A60(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  int v10; // r14d
  __int64 v11; // rdx

  v1 = 0;
  v2 = ((unsigned __int64)*(unsigned int *)(a1 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 28);
  v3 = ((unsigned __int64)*(unsigned int *)(a1 + 28) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 28);
  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  v5 = *(_QWORD *)(v4 + 1680) + 48LL;
  if ( *(_QWORD *)(*(_QWORD *)(v4 + 1680) + 264LL) )
  {
    v6 = 0LL;
    do
    {
      v7 = (_QWORD *)(v5 + 72 * v6);
      v8 = 8 * (v7[1] - qword_140C51BE8);
      if ( v3 >= v8 )
      {
        v9 = v8 + *v7;
        if ( v2 < v9 )
        {
          v10 = 0;
          v11 = v2;
          if ( v2 < v8 )
          {
            v11 = 8 * (v7[1] - qword_140C51BE8);
            v10 = 1;
          }
          if ( v3 >= v9 )
          {
            RtlSetBitsEx((__int64)v7, v11 - v8, v9 - v11);
          }
          else
          {
            RtlSetBitsEx((__int64)v7, v11 - v8, v3 - v11 + 1);
            if ( !v10 )
              return;
          }
        }
      }
      v6 = ++v1;
    }
    while ( (unsigned __int64)v1 < *(_QWORD *)(v5 + 216) );
  }
}
