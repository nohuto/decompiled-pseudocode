/*
 * XREFs of sub_1403CE2B4 @ 0x1403CE2B4
 * Callers:
 *     sub_140B1D878 @ 0x140B1D878 (sub_140B1D878.c)
 * Callees:
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140519438 @ 0x140519438 (sub_140519438.c)
 *     sub_14052A52C @ 0x14052A52C (sub_14052A52C.c)
 */

__int64 sub_1403CE2B4()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdi
  void *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  v0 = qword_140C4BC90;
  v1 = 0LL;
  v2 = 0LL;
  v8 = 0LL;
  if ( LOWORD(dword_140D06E40[0]) )
    v1 = qword_140D06E48[0];
  *(_QWORD *)&v8 = v1;
  while ( (__int64 *)v0 != &qword_140C4BC90 )
  {
    sub_140519438(v0);
    if ( *(_BYTE *)(v0 + 177) )
      sub_14052A52C(v0, &v8);
    v0 = *(_QWORD *)v0;
  }
  qword_140C4E238 = (__int64)&off_140C07300;
  v4 = sub_14042A5E0(&v9, v2);
  if ( v4 < 0 )
    return (unsigned int)v4;
  if ( v9 )
  {
    v5 = (unsigned int)(8 * v9);
    v6 = (void *)sub_1403B1F04(v3, v5);
    qword_140C54B98 = (__int64)v6;
    if ( v6 )
      memset(v6, 0, (unsigned int)v5);
    else
      return (unsigned int)-1073741670;
    return (unsigned int)v4;
  }
  return 0LL;
}
