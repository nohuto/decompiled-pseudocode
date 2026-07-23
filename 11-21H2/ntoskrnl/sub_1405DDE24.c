/*
 * XREFs of sub_1405DDE24 @ 0x1405DDE24
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

NTSTATUS __fastcall sub_1405DDE24(ULONG_PTR BugCheckParameter2, int *a2)
{
  NTSTATUS result; // eax
  __int64 v5; // rdx
  int v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+34h] [rbp-24h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]
  int *v10; // [rsp+48h] [rbp-10h]

  v7 = 0;
  if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
    sub_1405CAE6C(0x668uLL, BugCheckParameter2, *a2, 0LL);
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 272), (PVOID)0x77466F50, &File, 1u, 0x20u);
  if ( result >= 0 )
  {
    v7 = 0;
    v9 = 0LL;
    v6 = 0;
    v8 = *((_QWORD *)&xmmword_140C1C960 + 1);
    v10 = a2;
    sub_14042A5E0(&v6, v5);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 276), 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 280), 0, 0);
  }
  return result;
}
