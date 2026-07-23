/*
 * XREFs of sub_14084442C @ 0x14084442C
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 *     sub_140942DE4 @ 0x140942DE4 (sub_140942DE4.c)
 * Callees:
 *     sub_1408442E8 @ 0x1408442E8 (sub_1408442E8.c)
 *     sub_14085CA14 @ 0x14085CA14 (sub_14085CA14.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14084442C(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rax

  Pool2 = ExAllocatePool2(64LL, 96LL, 1399877200LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 92) = 0;
    v4 = (_QWORD *)(Pool2 + 56);
    v4[1] = v4;
    *v4 = v4;
    *(_QWORD *)(v3 + 40) = v3 + 32;
    *(_QWORD *)(v3 + 32) = v3 + 32;
    *(_QWORD *)(v3 + 24) = v3 + 16;
    *(_QWORD *)(v3 + 16) = v3 + 16;
    *(_QWORD *)(v3 + 80) = v3 + 72;
    *(_QWORD *)(v3 + 72) = v3 + 72;
    *(_DWORD *)(v3 + 88) = 0;
    *(_QWORD *)(v3 + 48) = 0LL;
    v5 = (__int64 *)qword_140C46A98;
    if ( *(__int64 **)qword_140C46A98 != &qword_140C46A90 )
      __fastfail(3u);
    *(_QWORD *)v3 = &qword_140C46A90;
    *(_QWORD *)(v3 + 8) = v5;
    *v5 = v3;
    qword_140C46A98 = v3;
    if ( *(_DWORD *)a1 == 1 )
    {
      if ( sub_1408442E8(v3, *(const UNICODE_STRING **)(a1 + 8)) < 0 )
      {
        sub_14085CA14((PVOID)v3);
        return 0LL;
      }
    }
    else if ( !*(_DWORD *)a1 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(v3 + 88);
      *(_QWORD *)(v3 + 48) = v6;
      *(_QWORD *)(*(_QWORD *)(v6 + 312) + 80LL) = v3;
    }
    ++*(_DWORD *)(v3 + 88);
  }
  return v3;
}
