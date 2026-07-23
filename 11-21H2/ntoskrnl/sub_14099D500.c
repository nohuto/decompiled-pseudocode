/*
 * XREFs of sub_14099D500 @ 0x14099D500
 * Callers:
 *     sub_1408823C0 @ 0x1408823C0 (sub_1408823C0.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14099788C @ 0x14099788C (sub_14099788C.c)
 *     sub_14099B848 @ 0x14099B848 (sub_14099B848.c)
 *     sub_14099D79C @ 0x14099D79C (sub_14099D79C.c)
 *     sub_14099D834 @ 0x14099D834 (sub_14099D834.c)
 */

void __fastcall sub_14099D500(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = dword_140C232CC;
  v3 = 0LL;
  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  sub_1402D66A8((ULONG_PTR)&qword_140C23010);
  v4 = off_140C03040;
  v5 = qword_140C1D060;
  if ( a1 )
    v5 = a1;
  if ( v5 == (__int64 *)qword_140C1D028 )
  {
    v6 = v5;
    v5 = qword_140C1D060;
    if ( !byte_140C23B18 )
      v5 = v6;
  }
  if ( off_140C03040 == v5 )
  {
    sub_1402935D0((ULONG_PTR)&qword_140C23010);
    sub_140224C00(&qword_140C22FE0);
  }
  else
  {
    v7 = sub_14099D79C(off_140C03040, MEMORY[0xFFFFF78000000008]);
    v9 = 2LL;
    *((_DWORD *)v5 + 7) |= 2u;
    *((_DWORD *)v4 + 7) &= ~2u;
    off_140C03040 = v5;
    v10 = 0LL;
    v5[1073] = v7;
    do
    {
      if ( v5 != v8 )
        v3 |= v5[534 * v1 + 5 + v10];
      if ( v4 != v8 )
        v3 |= v4[534 * v1 + 5 + v10];
      ++v10;
      --v9;
    }
    while ( v9 );
    v11 = v3 & 0x3CFFFFD8030FC0LL;
    sub_14099788C(&v11, (__int64)&v4[534 * v1 + 5], (__int64)&v5[534 * v1 + 5]);
    sub_14099B848((__int64)v4, (__int64)v5);
    if ( qword_140C1D028 )
    {
      if ( v4 == (__int64 *)qword_140C1D028 )
      {
        sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
        sub_14099D834();
      }
    }
  }
}
