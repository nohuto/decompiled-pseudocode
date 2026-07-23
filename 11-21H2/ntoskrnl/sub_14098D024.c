/*
 * XREFs of sub_14098D024 @ 0x14098D024
 * Callers:
 *     sub_1405CB06C @ 0x1405CB06C (sub_1405CB06C.c)
 *     sub_14099613C @ 0x14099613C (sub_14099613C.c)
 *     sub_1409A0958 @ 0x1409A0958 (sub_1409A0958.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1405CD96C @ 0x1405CD96C (sub_1405CD96C.c)
 *     sub_140943144 @ 0x140943144 (sub_140943144.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14098D024(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  void *v4; // rcx

  while ( 1 )
  {
    v2 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)v2[1] != a1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    *(_QWORD *)(v3 + 8) = a1;
    v4 = (void *)v2[3];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x4D584650u);
      v2[3] = 0LL;
      *((_DWORD *)v2 + 8) = 0;
    }
    sub_1405CD96C((__int64)(v2 - 109));
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C23CB8, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  sub_140943144(0);
}
