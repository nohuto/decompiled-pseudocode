/*
 * XREFs of sub_1402F8870 @ 0x1402F8870
 * Callers:
 *     <none>
 * Callees:
 *     sub_140246140 @ 0x140246140 (sub_140246140.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14062E6D0 @ 0x14062E6D0 (sub_14062E6D0.c)
 */

struct _KTHREAD *__fastcall sub_1402F8870(__int64 a1)
{
  int v1; // ebp
  _WORD *v2; // rsi
  ULONG_PTR v4; // r14
  __int64 v5; // rax
  void *v6; // rdi
  __int64 v7; // rdx
  struct _KTHREAD *result; // rax
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0;
  v2 = *(_WORD **)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 32);
  v9 = 0LL;
  v5 = -*(_QWORD *)(a1 + 68);
  if ( !*(_QWORD *)(a1 + 68) )
    v5 = -*(_QWORD *)(a1 + 76);
  if ( v5 )
  {
    v1 = 1;
    v9 = *(_OWORD *)(a1 + 68);
    *((_QWORD *)KeGetCurrentThread() + 190) = &v9;
  }
  if ( *(_QWORD *)(a1 + 56) )
  {
    sub_14030F330();
    v6 = *(void **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (DWORD2(xmmword_140D06900) & 0x8000000) != 0 )
    sub_14062E6D0(v4, 1344LL);
  v7 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) || *v2 == 3 )
    sub_14042A5E0(v2, v7);
  else
    sub_14042A5E0(0LL, v7);
  if ( (DWORD2(xmmword_140D06900) & 0x8000000) != 0 )
    sub_14062E6D0(v4, 1345LL);
  ObfDereferenceObject(v2);
  if ( v1 )
    *((_QWORD *)KeGetCurrentThread() + 190) = 0LL;
  if ( v6 )
  {
    sub_140246140();
    ObfDereferenceObject(v6);
  }
  result = KeGetCurrentThread();
  if ( *((_DWORD *)result + 121) )
    KeBugCheckEx(
      1u,
      v4,
      *((unsigned __int8 *)KeGetCurrentThread() + 586),
      *((unsigned int *)KeGetCurrentThread() + 121),
      0LL);
  return result;
}
