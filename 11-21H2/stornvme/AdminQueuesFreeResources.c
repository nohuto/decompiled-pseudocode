/*
 * XREFs of AdminQueuesFreeResources @ 0x1C0017C84
 * Callers:
 *     NVMeControllerRemove @ 0x1C0018DF8 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C00195A8 (NVMeControllerStop.c)
 * Callees:
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall AdminQueuesFreeResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // r8
  void *v8; // rcx
  void **v9; // rbx
  __int64 v10; // rdi

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v5 = *(_QWORD *)(a1 + 336);
    if ( v5 )
      result = StorPortExtendedFunction(1LL, a1, v5, a4);
    *(_QWORD *)(a1 + 336) = 0LL;
    v7 = *(_QWORD *)(a1 + 344);
    if ( v7 )
      result = StorPortExtendedFunction(1LL, a1, v7, a4);
    *(_QWORD *)(a1 + 344) = 0LL;
    *(_DWORD *)(a1 + 856) = 0;
    v8 = *(void **)(a1 + 952);
    if ( v8 )
      result = (__int64)memset(v8, 0, 0x10A0uLL);
    v9 = (void **)(a1 + 1064);
    v10 = 6LL;
    do
    {
      *((_DWORD *)v9 - 24) = 0;
      if ( *v9 )
        result = (__int64)memset(*v9, 0, 0x10A0uLL);
      v9 += 14;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
