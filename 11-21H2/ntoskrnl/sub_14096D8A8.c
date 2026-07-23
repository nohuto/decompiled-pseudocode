/*
 * XREFs of sub_14096D8A8 @ 0x14096D8A8
 * Callers:
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 * Callees:
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140281C00 @ 0x140281C00 (sub_140281C00.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_14030DA80 @ 0x14030DA80 (sub_14030DA80.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F7F40 @ 0x1406F7F40 (sub_1406F7F40.c)
 *     sub_1407A4C90 @ 0x1407A4C90 (sub_1407A4C90.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 */

__int64 __fastcall sub_14096D8A8(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // bl
  unsigned __int64 v7; // r13
  __int64 **v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned int v11; // r12d
  __int64 v12; // rax
  int v13; // ebx
  unsigned __int64 v14; // r14
  unsigned __int8 *v15; // rdi
  unsigned __int64 v16; // r15
  unsigned __int8 *v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int8 *v20; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp+18h]

  v4 = a4;
  CurrentThread = KeGetCurrentThread();
  v7 = sub_1406F7D78(a1, a2, a3 & 0xFFFFFFFFFFFFF000uLL, 1);
  if ( v7 >= 2 )
  {
    v8 = sub_1403126F0(a2);
    v9 = (unsigned __int64)v8;
    if ( (*((unsigned int *)v8 + 6) | ((unsigned __int64)*((unsigned __int8 *)v8 + 32) << 32)) << 12 == a2 )
    {
      v10 = (unsigned __int64)v8;
      v11 = 0;
      while ( 1 )
      {
        v12 = *(unsigned int *)(v10 + 52);
        LODWORD(v12) = v12 & 0x7FFFFFFF;
        if ( (v12 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31)) != 0x7FFFFFFFDLL )
          break;
        if ( (*(_DWORD *)(v10 + 48) & 8) != 0 )
        {
          v13 = sub_1407A4C90(
                  v10,
                  (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12,
                  ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32))
                 - (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32))
                 + 1) << 12,
                  0x55u,
                  v4);
          if ( v13 < 0 )
            goto LABEL_16;
          v4 = a4;
        }
        v14 = v10;
        ++v11;
        v10 = sub_140281C00(v10);
        if ( v11 >= v7 )
        {
          if ( (((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) << 12) | 0xFFF) != a3 )
            break;
          v15 = (unsigned __int8 *)sub_140281C00(v9);
          v16 = sub_140281C00((unsigned __int64)v15);
          sub_14030EB64((__int64)v15);
          sub_14030DA80((unsigned __int64)v15, 0, 0LL);
          *(_QWORD *)v15 = 0LL;
          if ( v15 != (unsigned __int8 *)v14 )
          {
            do
            {
              v17 = (unsigned __int8 *)v16;
              v18 = sub_140281C00(v16);
              v19 = v16;
              v16 = v18;
              sub_14030EB64(v19);
              sub_14030DA80((unsigned __int64)v17, 0, 0LL);
              *(_QWORD *)v17 = v15;
              v15 = v17;
            }
            while ( v17 != (unsigned __int8 *)v14 );
          }
          *(_DWORD *)(v9 + 28) = a3 >> 12;
          *(_BYTE *)(v9 + 33) = a3 >> 44;
          sub_140281A58((__int64)CurrentThread, a1);
          do
          {
            v20 = v15;
            v15 = *(unsigned __int8 **)v15;
            sub_1407BC0B0(v20, 0LL, 0x40000000);
          }
          while ( v15 );
          sub_140281C44((__int64)CurrentThread, v9);
          return 0;
        }
      }
    }
  }
  v13 = -1073741800;
LABEL_16:
  sub_1406F7F40(a1, a2, v7, 1);
  return (unsigned int)v13;
}
