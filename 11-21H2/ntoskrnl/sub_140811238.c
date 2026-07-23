/*
 * XREFs of sub_140811238 @ 0x140811238
 * Callers:
 *     sub_14080788C @ 0x14080788C (sub_14080788C.c)
 *     sub_140807CCC @ 0x140807CCC (sub_140807CCC.c)
 *     sub_140807D78 @ 0x140807D78 (sub_140807D78.c)
 *     sub_14080A488 @ 0x14080A488 (sub_14080A488.c)
 *     sub_140829294 @ 0x140829294 (sub_140829294.c)
 *     sub_140990D08 @ 0x140990D08 (sub_140990D08.c)
 *     sub_1409913FC @ 0x1409913FC (sub_1409913FC.c)
 *     sub_1409A0DC4 @ 0x1409A0DC4 (sub_1409A0DC4.c)
 *     sub_1409A0F20 @ 0x1409A0F20 (sub_1409A0F20.c)
 *     sub_1409A0FA4 @ 0x1409A0FA4 (sub_1409A0FA4.c)
 * Callees:
 *     sub_14022DB00 @ 0x14022DB00 (sub_14022DB00.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14036C0A0 @ 0x14036C0A0 (sub_14036C0A0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14081B21C @ 0x14081B21C (sub_14081B21C.c)
 *     sub_14081BF60 @ 0x14081BF60 (sub_14081BF60.c)
 */

__int64 __fastcall sub_140811238(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // r12
  int v7; // edi
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // ebp
  char *v11; // rbx
  char *v12; // rbx
  const void **v13; // rdi
  __int64 v14; // rax
  __int64 v16; // rcx
  int v17; // ebx

  v4 = a2;
  v6 = sub_14022DB00();
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C3B8, 0LL);
  v7 = 8;
  if ( (_DWORD)v4 )
  {
    v8 = (_DWORD *)(a3 + 8);
    v9 = (unsigned int)v4;
    do
    {
      v7 += *v8;
      v8 += 4;
      --v9;
    }
    while ( v9 );
  }
  v10 = v7 + 12;
  if ( (unsigned int)(v7 + 12 + dword_140C1C400) <= 0x400 )
  {
    KeResetEvent(&stru_140C1C3E8);
    v11 = (char *)&unk_140C1C404 + (unsigned int)dword_140C1C400;
    *(_DWORD *)v11 = v7;
    *(_QWORD *)(v11 + 4) = a1;
    *(_QWORD *)(v11 + 12) = v6;
    v12 = v11 + 20;
    if ( (_DWORD)v4 )
    {
      v13 = (const void **)(a3 + 8);
      do
      {
        memmove(v12, *(v13 - 1), *(unsigned int *)v13);
        v14 = *(unsigned int *)v13;
        v13 += 2;
        v12 += v14;
        --v4;
      }
      while ( v4 );
    }
    dword_140C1C400 += v10;
    if ( !byte_140C1C3E0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C1E8, 0LL);
      v17 = sub_14081B21C(v16, 0LL, &unk_140C1C3C0);
      sub_14036C0A0((ULONG_PTR)&stru_140C1C1E8);
      if ( v17 )
        byte_140C1C3E0 = 1;
      else
        sub_14081BF60();
    }
  }
  return sub_14036C0A0((ULONG_PTR)&stru_140C1C3B8);
}
