/*
 * XREFs of sub_14085C97C @ 0x14085C97C
 * Callers:
 *     sub_14077503C @ 0x14077503C (sub_14077503C.c)
 * Callees:
 *     sub_14055F84C @ 0x14055F84C (sub_14055F84C.c)
 *     sub_14055FBE4 @ 0x14055FBE4 (sub_14055FBE4.c)
 *     sub_14085CA14 @ 0x14085CA14 (sub_14085CA14.c)
 *     sub_14085CA7C @ 0x14085CA7C (sub_14085CA7C.c)
 *     sub_14085CB58 @ 0x14085CB58 (sub_14085CB58.c)
 *     sub_1409428B8 @ 0x1409428B8 (sub_1409428B8.c)
 */

void __fastcall sub_14085C97C(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // r14
  bool v5; // zf
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  void *v10; // rcx

  if ( a1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
    if ( v2 )
    {
      ++*(_DWORD *)(v2 + 88);
      sub_14085CA7C(v2);
      v3 = *(_QWORD **)(v2 + 16);
      while ( v3 != (_QWORD *)(v2 + 16) )
      {
        v6 = (_DWORD *)sub_14055F84C((__int64)v3, 0);
        v3 = (_QWORD *)*v3;
        sub_14055FBE4(v6, v7);
      }
      v4 = *(_QWORD **)(v2 + 32);
      while ( v4 != (_QWORD *)(v2 + 32) )
      {
        v8 = sub_14055F84C((__int64)v4, 1);
        v4 = (_QWORD *)*v4;
        v9 = *(_QWORD *)(v8 + 40);
        ++*(_DWORD *)(v9 + 88);
        sub_14055FBE4((_DWORD *)v8, 0LL);
        v10 = *(void **)(v9 + 48);
        if ( v10 && *(_QWORD *)(v9 + 16) != v9 + 16 )
          sub_1409428B8(v10);
        v5 = (*(_DWORD *)(v9 + 88))-- == 1;
        if ( v5 )
          sub_14085CA14((PVOID)v9);
      }
      sub_14085CB58(a1, v2);
      v5 = (*(_DWORD *)(v2 + 88))-- == 1;
      if ( v5 )
        sub_14085CA14((PVOID)v2);
    }
  }
}
