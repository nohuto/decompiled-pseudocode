/*
 * XREFs of sub_1406CA8B0 @ 0x1406CA8B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_14020A400 @ 0x14020A400 (sub_14020A400.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 *     sub_1406CA970 @ 0x1406CA970 (sub_1406CA970.c)
 *     sub_1409ABBA8 @ 0x1409ABBA8 (sub_1409ABBA8.c)
 *     sub_1409B1DA0 @ 0x1409B1DA0 (sub_1409B1DA0.c)
 */

__int64 __fastcall sub_1406CA8B0(__int64 a1, __int64 a2)
{
  int *v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v8; // r9
  unsigned int v9; // r15d
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // rbp
  int v13; // ebp
  _DWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]

  v18 = 0LL;
  v19 = 0LL;
  if ( sub_14020A400(a1) )
  {
    v13 = *v4;
    v14 = sub_140204738(v5);
    v6 = sub_1409B1DA0(v16, v15, v17);
    if ( v6 )
      v14[327] = v13;
  }
  else
  {
    v6 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = 8 * (*(_BYTE *)(a2 + 4) & 1) + 6;
  while ( 1 )
  {
    v10 = sub_1406CA970(a1, CurrentThread, &v18, v8);
    v11 = v10;
    if ( !v10 )
      break;
    if ( (*(_DWORD *)(v10 + 1120) & 0x800) == 0 )
      *(_BYTE *)(a2 + 4) |= 2u;
    sub_140684158(v10, 0LL, v9, *(_DWORD *)a2);
    v8 = v11;
  }
  if ( v6 )
    sub_1409ABBA8(a1);
  return 0LL;
}
