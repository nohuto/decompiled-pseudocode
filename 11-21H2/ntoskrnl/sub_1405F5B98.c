/*
 * XREFs of sub_1405F5B98 @ 0x1405F5B98
 * Callers:
 *     sub_14064C418 @ 0x14064C418 (sub_14064C418.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F5D18 @ 0x1405F5D18 (sub_1405F5D18.c)
 *     sub_1405F5E3C @ 0x1405F5E3C (sub_1405F5E3C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405F5B98(PSID Sid1, _DWORD *a2, __int64 *a3)
{
  int v3; // edi
  __int64 v5; // rsi
  unsigned int v6; // r14d
  __int64 Pool2; // r15
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int16 **v12; // r8
  __int64 v13; // r9
  unsigned __int16 *v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  char *i; // r14
  __int64 v18; // rbx
  unsigned __int16 v19; // cx
  __int64 result; // rax
  PSID v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h]
  __int64 *v23; // [rsp+70h] [rbp+18h]

  v23 = a3;
  v21 = Sid1;
  v3 = 0;
  v22 = 0LL;
  v5 = 0LL;
  v6 = 0;
  Pool2 = 0LL;
  v9 = sub_1405F5E3C(Sid1, &v21);
  if ( v9 >= 0 )
  {
    v10 = sub_1405F5D18(Sid1);
    v5 = v22;
    v9 = v10;
    if ( v10 >= 0 )
    {
      v11 = *(unsigned int *)(v22 + 60);
      if ( (_DWORD)v11 )
      {
        v12 = (unsigned __int16 **)(v22 + 64);
        v13 = (unsigned int)v11;
        do
        {
          v14 = *v12++;
          v15 = *v14;
          if ( v15 <= 2 )
            v15 = 0;
          v6 += v15;
          --v13;
        }
        while ( v13 );
      }
      Pool2 = ExAllocatePool2(256LL, v6 + 16 * v11, 1884513619LL);
      if ( Pool2 )
      {
        v16 = 0;
        for ( i = (char *)(Pool2 + 16LL * *(unsigned int *)(v5 + 60));
              v16 < *(_DWORD *)(v5 + 60);
              i += 2 * ((unsigned __int64)*(unsigned __int16 *)(Pool2 + 8 * v18) >> 1) )
        {
          v18 = 2LL * v16;
          *(_QWORD *)(Pool2 + 16LL * v16 + 8) = i;
          v19 = **(_WORD **)(v5 + 8LL * v16 + 64);
          if ( v19 <= 2u )
            v19 = 0;
          *(_WORD *)(Pool2 + 16LL * v16 + 2) = v19;
          *(_WORD *)(Pool2 + 16LL * v16) = v19;
          memmove(i, *(const void **)(*(_QWORD *)(v5 + 8LL * v16++ + 64) + 8LL), v19);
        }
      }
      else
      {
        v9 = -1073741801;
      }
    }
  }
  *v23 = Pool2;
  if ( v5 )
    v3 = *(_DWORD *)(v5 + 60);
  result = (unsigned int)v9;
  *a2 = v3;
  return result;
}
