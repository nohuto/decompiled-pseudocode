/*
 * XREFs of sub_14097BB30 @ 0x14097BB30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_14097AB60 @ 0x14097AB60 (sub_14097AB60.c)
 */

__int64 __fastcall sub_14097BB30(unsigned __int64 a1, unsigned int a2)
{
  __int64 v5; // rax
  char *v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (a2 & 0xFFFFFFFA) != 0 )
    return 3221225712LL;
  v5 = sub_14030E7C0(a1, 0, (int *)&v8);
  v6 = (char *)v5;
  if ( !v5 )
    return v8;
  if ( (*(_DWORD *)(v5 + 48) & 0x6200000) == 0x4200000
    && (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12 == a1 )
  {
    v7 = sub_14097AB60(*((_QWORD *)KeGetCurrentThread() + 23), v5, a2);
  }
  else
  {
    v7 = -1073741800;
  }
  sub_14032E700(v6);
  return v7;
}
