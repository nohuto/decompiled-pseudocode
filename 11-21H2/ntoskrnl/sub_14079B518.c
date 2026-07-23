/*
 * XREFs of sub_14079B518 @ 0x14079B518
 * Callers:
 *     sub_14053EE38 @ 0x14053EE38 (sub_14053EE38.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140540010 @ 0x140540010 (sub_140540010.c)
 *     sub_1406C3E60 @ 0x1406C3E60 (sub_1406C3E60.c)
 *     sub_1406D16F8 @ 0x1406D16F8 (sub_1406D16F8.c)
 *     sub_1406D8150 @ 0x1406D8150 (sub_1406D8150.c)
 *     sub_1406DEA6C @ 0x1406DEA6C (sub_1406DEA6C.c)
 *     sub_14079B740 @ 0x14079B740 (sub_14079B740.c)
 *     sub_14079CF18 @ 0x14079CF18 (sub_14079CF18.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 */

_UNKNOWN **__fastcall sub_14079B518(__int64 a1)
{
  unsigned int v1; // ebp
  int v3; // r12d
  unsigned int v4; // edi
  __int64 v5; // rsi
  unsigned int v6; // r13d
  unsigned int i; // r14d
  __int64 v8; // rax
  __int64 v9; // r15
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  void *v14; // r14
  __int64 v15; // rcx
  void *v16; // rdi
  void *v17; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // rax

  *(_DWORD *)(a1 + 160) &= ~1u;
  v1 = 0;
  v3 = *(_DWORD *)(a1 + 160) & 0x10;
  v4 = 0;
  do
  {
    v5 = 632LL * v1;
    v6 = v4 + *(_DWORD *)(v5 + a1 + 280);
    if ( *(_QWORD *)(v5 + a1 + 288) && v6 != v4 )
    {
      for ( i = v4; i < v6; i += *(_DWORD *)(v9 + 16) )
      {
        v8 = sub_140AB44C0(a1, i);
        v9 = v8;
        if ( !*(_QWORD *)(v8 + 8) )
          break;
        v10 = (_QWORD *)sub_14079B740(v8);
        v12 = v10;
        if ( v10 )
        {
          v19 = *v10;
          if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v20 = (_QWORD *)v10[1], (_QWORD *)*v20 != v12) )
            __fastfail(3u);
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          sub_14042A5E0(v12, 24LL);
          v11 = *(_QWORD *)(v9 + 8);
        }
        v13 = *(unsigned int *)(v9 + 16);
        if ( (v11 & 8) != 0 )
          sub_1406D16F8(a1, v13, v11 & 0xFFFFFFFFFFFFFFF0uLL);
        else
          sub_14079CF18(v13);
      }
      v14 = *(void **)(v5 + a1 + 288);
      sub_1406DEA6C(a1, (__int64)v14, 0, (unsigned int)((*(_DWORD *)(v5 + a1 + 280) >> 12) - 1) >> 9);
      if ( v14 != (void *)(v5 + a1 + 296) )
      {
        sub_14079CF18(0x2000LL);
        ExFreePoolWithTag(v14, 0);
      }
      *(_QWORD *)(v5 + a1 + 288) = 0LL;
      *(_DWORD *)(v5 + a1 + 280) = 0;
    }
    ++v1;
    v4 += 0x80000000;
  }
  while ( v1 < 2 );
  if ( v3 && _InterlockedExchangeAdd(&dword_140C097B8, 0xFFFFFFFF) == 1 )
    sub_140540010();
  v15 = *(_QWORD *)(a1 + 64);
  if ( v15 )
  {
    sub_14042A5E0(v15, *(unsigned int *)(a1 + 132));
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v16 = *(void **)(a1 + 96);
  if ( v16 )
  {
    sub_14079CF18(*(unsigned int *)(a1 + 108));
    ExFreePoolWithTag(v16, 0);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v17 = *(void **)(a1 + 120);
  if ( v17 )
  {
    sub_14079CF18(*(unsigned int *)(a1 + 108));
    ExFreePoolWithTag(v17, 0);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  sub_1406D8150(a1 + 224);
  return sub_1406C3E60(a1);
}
