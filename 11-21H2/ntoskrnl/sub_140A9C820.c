/*
 * XREFs of sub_140A9C820 @ 0x140A9C820
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_140A96CA8 @ 0x140A96CA8 (sub_140A96CA8.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_140A82328 @ 0x140A82328 (sub_140A82328.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A9AFDC @ 0x140A9AFDC (sub_140A9AFDC.c)
 */

__int64 __fastcall sub_140A9C820(unsigned int *a1, unsigned int a2)
{
  unsigned int v4; // ecx
  __int64 *v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  int v11; // edi
  unsigned int v12; // esi

  if ( a2 < 4 )
    return 3221225476LL;
  if ( (_DWORD)InitSafeBootMode )
    return 3221226335LL;
  v4 = 0;
  v5 = &qword_140D01450;
  do
  {
    if ( *(_DWORD *)v5 )
      return 3221228559LL;
    ++v4;
    v5 = (__int64 *)((char *)v5 + 4);
  }
  while ( v4 < 2 );
  v6 = *a1;
  sub_140A89D58();
  if ( !dword_140C29FC0 )
    dword_140C0C848 = 0;
  sub_140A82328(v7, 0, v8, v9);
  v10 = v6 & dword_140C1AD38;
  v11 = dword_140C1AD38 & ~v6;
  v12 = ~v11 & (v10 | dword_140C29FC0);
  if ( v12 != dword_140C29FC0 )
  {
    sub_140A9AFDC(dword_140C29FC0, v10, v11, v12);
    ++dword_140C2A040;
    dword_140C29FC0 = v12;
    *a1 = v12;
  }
  dword_140C1AD10 = 1;
  qword_140C1AD40 = 0LL;
  KeReleaseMutex(&stru_140C1AD60, 0);
  return 0LL;
}
