/*
 * XREFs of sub_1405FB934 @ 0x1405FB934
 * Callers:
 *     sub_1405FD31C @ 0x1405FD31C (sub_1405FD31C.c)
 * Callees:
 *     sub_1405FB258 @ 0x1405FB258 (sub_1405FB258.c)
 *     sub_1405FB99C @ 0x1405FB99C (sub_1405FB99C.c)
 */

__int64 __fastcall sub_1405FB934(
        __int64 a1,
        unsigned int *a2,
        void (__stdcall *a3)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved),
        void *a4,
        int a5)
{
  __int64 v5; // rax
  __int64 i; // r10
  LARGE_INTEGER v8; // [rsp+40h] [rbp+8h] BYREF

  v5 = a2[6];
  for ( i = *(_QWORD *)(a1 + 48); (unsigned int)v5 >= *(_DWORD *)i; i += 16LL )
    v5 = (unsigned int)(v5 - *(_DWORD *)i);
  v8.QuadPart = *(_QWORD *)(i + 8) + a2[5] + v5 * a2[7];
  if ( a5 )
    return sub_1405FB258((void **)a1, (__int64)a2, &v8, a3, a4);
  else
    return sub_1405FB99C(a1, (_DWORD)a2, (unsigned int)&v8, (_DWORD)a3, (__int64)a4);
}
