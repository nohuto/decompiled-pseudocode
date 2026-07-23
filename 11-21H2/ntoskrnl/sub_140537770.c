/*
 * XREFs of sub_140537770 @ 0x140537770
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403CE24C @ 0x1403CE24C (sub_1403CE24C.c)
 *     sub_14052268C @ 0x14052268C (sub_14052268C.c)
 *     sub_140536FB4 @ 0x140536FB4 (sub_140536FB4.c)
 *     sub_1405378F4 @ 0x1405378F4 (sub_1405378F4.c)
 */

__int64 __fastcall sub_140537770(__int64 a1, __int64 a2, char a3, unsigned __int64 *a4)
{
  __int64 v6; // rdi
  char *v7; // rdx
  char *v8; // rax
  char *v9; // rbx
  int v10; // ebx
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  v6 = a1;
  if ( *(_DWORD *)a2 != 1 || *(_DWORD *)(a1 + 252) != *(unsigned __int16 *)(a2 + 8) )
    return (unsigned int)-1073741275;
  if ( (a3 & 1) == 0 || !*(_BYTE *)(a1 + 268) )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = (char *)sub_1405378F4(a1, v7);
      v9 = v8;
      if ( !v8 )
        return (unsigned int)-1073741275;
      if ( sub_140536FB4(a2, v8) )
        break;
      v7 = v9;
      a1 = v6;
    }
  }
  v12 = sub_1403CE24C(a1, 0x30u, &v16);
  v14 = v16;
  v10 = v12;
  if ( v12 < 0 || (v10 = sub_1403CE24C(v13, 4u, (_QWORD *)(v16 + 32)), v10 < 0) )
  {
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 32);
      if ( v15 )
        sub_14052268C(v13, v15);
      sub_14052268C(v13, v14);
    }
  }
  else
  {
    v10 = 0;
    **(_DWORD **)(v14 + 32) = *(unsigned __int16 *)(a2 + 12);
    *a4 = v14;
  }
  return (unsigned int)v10;
}
