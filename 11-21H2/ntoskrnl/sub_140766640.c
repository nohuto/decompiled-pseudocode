/*
 * XREFs of sub_140766640 @ 0x140766640
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407667B0 @ 0x1407667B0 (sub_1407667B0.c)
 *     sub_140767730 @ 0x140767730 (sub_140767730.c)
 */

__int64 __fastcall sub_140766640(unsigned int a1, __int64 a2, char a3, __int64 *a4)
{
  unsigned int v4; // ebx
  int v7; // r15d
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  _WORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  const void *v15; // rdx
  _WORD *v16; // rdi
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  int v20; // [rsp+78h] [rbp+38h] BYREF

  v4 = 0;
  v19 = 0LL;
  v20 = 0;
  v7 = a2;
  if ( !a2 )
    __fastfail(5u);
  *a4 = 0LL;
  v9 = 0;
  v18 = 0LL;
  while ( (unsigned __int8)sub_1407667B0(v7, (unsigned int)&v18, (unsigned int)&v19, (unsigned int)&v20, 0LL) )
  {
    if ( v19 )
      v10 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
    else
      v10 = 0LL;
    if ( v10 && *(_QWORD *)(v10 + 48) && (!a3 || v20) )
      v9 += *(unsigned __int16 *)(v10 + 40) + 2;
  }
  v11 = sub_140767730(a1, 256LL, (unsigned int)(v9 + 2), 1265659472LL);
  *a4 = v11;
  v12 = (_WORD *)v11;
  if ( v11 )
  {
    v18 = 2LL;
    while ( (unsigned __int8)sub_1407667B0(v7, (unsigned int)&v18, (unsigned int)&v19, (unsigned int)&v20, 0LL) )
    {
      if ( v19 )
        v13 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
      else
        v13 = 0LL;
      if ( v13 && *(_QWORD *)(v13 + 48) && (!a3 || v20) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
        if ( v14 )
        {
          v15 = *(const void **)(v14 + 48);
          if ( v15 )
          {
            memmove(v12, v15, *(unsigned __int16 *)(v14 + 40));
            v16 = &v12[(unsigned __int64)*(unsigned __int16 *)(v14 + 40) >> 1];
            *v16 = 0;
            v12 = v16 + 1;
          }
        }
      }
    }
    *v12 = 0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
