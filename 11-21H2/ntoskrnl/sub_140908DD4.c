/*
 * XREFs of sub_140908DD4 @ 0x140908DD4
 * Callers:
 *     sub_14051A460 @ 0x14051A460 (sub_14051A460.c)
 *     sub_14051BA00 @ 0x14051BA00 (sub_14051BA00.c)
 *     sub_140527CF0 @ 0x140527CF0 (sub_140527CF0.c)
 *     sub_140528160 @ 0x140528160 (sub_140528160.c)
 *     sub_1408459C0 @ 0x1408459C0 (sub_1408459C0.c)
 *     sub_14090AA30 @ 0x14090AA30 (sub_14090AA30.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140527CA8 @ 0x140527CA8 (sub_140527CA8.c)
 *     sub_14064F634 @ 0x14064F634 (sub_14064F634.c)
 */

__int64 __fastcall sub_140908DD4(__int64 *a1)
{
  unsigned int v2; // ebp
  char v3; // si
  __int64 v4; // rdi
  __int64 i; // r11
  __int64 v6; // r11
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4BE28, 0LL);
  for ( i = qword_140C4BE30; (__int64 *)i != &qword_140C4BE30; i = *(_QWORD *)v6 )
  {
    v4 = i;
    if ( sub_14064F634(*(int **)(i + 16), *a1) && (*(_DWORD *)(v6 + 32))-- == 1 )
    {
      v11 = *(_QWORD *)v6;
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v12 = *(__int64 **)(v6 + 8), *v12 != v6) )
        __fastfail(3u);
      *v12 = v11;
      v3 = 1;
      *(_QWORD *)(v11 + 8) = v12;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4BE28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4BE28);
  sub_1402AFC00((ULONG_PTR)&qword_140C4BE28);
  if ( !v3 )
    return 0LL;
  if ( v4 )
  {
    v13 = *(_QWORD *)(v4 + 16);
    if ( v13 )
      sub_1403B1B5C(v9, v13);
    sub_1403B1B5C(v9, v4);
  }
  v14 = a1[4];
  if ( byte_140C4BCBC )
    v2 = sub_140527CA8(v14, v8);
  else
    sub_14042A5E0(*(_QWORD *)(v14 + 16), a1[5]);
  if ( *a1 )
    sub_1403B1B5C(v15, *a1);
  v16 = (void *)a1[1];
  if ( v16 )
  {
    ObfDereferenceObjectWithTag(v16, 0x446C6148u);
    a1[1] = 0LL;
  }
  sub_1403B1B5C((__int64)v16, (__int64)a1);
  return v2;
}
