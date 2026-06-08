/*
 * XREFs of RegisterHvPackage @ 0x1C003A500
 * Callers:
 *     <none>
 * Callees:
 *     GetHvProcessorInfo @ 0x1C0003D48 (GetHvProcessorInfo.c)
 *     InitializeHvPhysicalCores @ 0x1C0003D8C (InitializeHvPhysicalCores.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     GetHvLpCountForPackage @ 0x1C00253E0 (GetHvLpCountForPackage.c)
 */

__int64 __fastcall RegisterHvPackage(__int64 a1)
{
  unsigned int v2; // edi
  __int64 HvProcessorInfo; // rax
  int v4; // ebp
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 Pool2; // rax
  _QWORD *v9; // rax
  __int64 *v10; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // rcx
  int v13; // edi
  int v14; // ebx

  v2 = -1073741823;
  HvProcessorInfo = GetHvProcessorInfo(*(_DWORD *)(a1 + 72));
  if ( HvProcessorInfo )
  {
    v4 = *(_DWORD *)(HvProcessorInfo + 8);
    v5 = *(_DWORD *)(HvProcessorInfo + 4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001F018,
      0LL);
    v6 = qword_1C001F078;
    if ( (__int64 *)qword_1C001F078 == &qword_1C001F078 )
      goto LABEL_6;
    do
    {
      v7 = v6;
      if ( *(_DWORD *)(v6 + 32) == v4 )
        break;
      v6 = *(_QWORD *)v6;
      v7 = 0LL;
    }
    while ( (__int64 *)v6 != &qword_1C001F078 );
    if ( !v7 )
    {
LABEL_6:
      Pool2 = ExAllocatePool2(64LL, 344LL, 1919119952LL);
      v7 = Pool2;
      if ( !Pool2 )
      {
LABEL_13:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C001F018);
        return v2;
      }
      *(_DWORD *)(Pool2 + 32) = v4;
      v9 = (_QWORD *)(Pool2 + 16);
      v9[1] = v9;
      *v9 = v9;
      *(_DWORD *)(v7 + 36) = GetHvLpCountForPackage(v4);
      KeInitializeAffinityEx2(v7 + 48, 32LL);
      v10 = (__int64 *)qword_1C001F080;
      if ( *(__int64 **)qword_1C001F080 != &qword_1C001F078 )
LABEL_15:
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = qword_1C001F080;
      *(_QWORD *)v7 = &qword_1C001F078;
      *v10 = v7;
      qword_1C001F080 = v7;
      *(_QWORD *)(v7 + 328) = v7 + 320;
      *(_QWORD *)(v7 + 320) = v7 + 320;
    }
    *(_QWORD *)(a1 + 1080) = v7;
    ++*(_DWORD *)(v7 + 40);
    if ( !*(_DWORD *)(a1 + 80) )
      KeAddProcessorAffinityEx(v7 + 48, *(unsigned int *)(a1 + 56));
    v11 = *(_QWORD **)(v7 + 24);
    v12 = (_QWORD *)(a1 + 1088);
    if ( *v11 == v7 + 16 )
    {
      *v12 = v7 + 16;
      *(_QWORD *)(a1 + 1096) = v11;
      *v11 = v12;
      *(_QWORD *)(v7 + 24) = v12;
      v13 = *(_DWORD *)(v7 + 40);
      v14 = *(_DWORD *)(v7 + 36);
      InitializeHvPhysicalCores(a1, v5);
      v2 = v14 != v13 ? 0x103 : 0;
      goto LABEL_13;
    }
    goto LABEL_15;
  }
  return v2;
}
