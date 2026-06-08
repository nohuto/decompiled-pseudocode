/*
 * XREFs of InitializePhysicalCores @ 0x1C0008CB0
 * Callers:
 *     RegisterKernelPackage @ 0x1C00342C0 (RegisterKernelPackage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InitializePhysicalCores(__int64 a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // rsi
  unsigned int v4; // r14d
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  __int64 Pool2; // rax
  __int64 *v8; // rax

  v1 = 0;
  if ( !*(_DWORD *)(a1 + 80) )
  {
    v3 = (_QWORD *)(*(_QWORD *)(a1 + 1080) + 320LL);
    v4 = ((__int64 (__fastcall *)(_QWORD))qword_1C00128D0)(*(unsigned int *)(a1 + 56));
    v5 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      goto LABEL_6;
    do
    {
      v6 = (__int64)v5;
      if ( *((_DWORD *)v5 + 6) == v4 )
        break;
      v5 = (_QWORD *)*v5;
      v6 = 0LL;
    }
    while ( v5 != v3 );
    if ( !v6 )
    {
LABEL_6:
      Pool2 = ExAllocatePool2(64LL, 40LL, 1919119952LL);
      v6 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *(_DWORD *)(Pool2 + 24) = v4;
      *(_DWORD *)(Pool2 + 16) = ((__int64 (__fastcall *)(_QWORD))qword_1C00128D8)(v4);
      v8 = (__int64 *)v3[1];
      if ( (_QWORD *)*v8 != v3 )
        __fastfail(3u);
      *(_QWORD *)v6 = v3;
      *(_QWORD *)(v6 + 8) = v8;
      *v8 = v6;
      v3[1] = v6;
    }
    ++*(_DWORD *)(v6 + 20);
    *(_QWORD *)(a1 + 1248) = v6;
  }
  return v1;
}
