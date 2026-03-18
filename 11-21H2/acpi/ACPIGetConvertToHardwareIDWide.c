/*
 * XREFs of ACPIGetConvertToHardwareIDWide @ 0x1C001D6EC
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0019740 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToHardwareID @ 0x1C005616C (ACPIGetConvertToHardwareID.c)
 * Callees:
 *     ACPIAnsiStringToWideHelper @ 0x1C001D258 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchPrintfA @ 0x1C001D284 (RtlStringCchPrintfA.c)
 *     ACPIGetProcessorIDWide @ 0x1C001E2B0 (ACPIGetProcessorIDWide.c)
 *     ACPIAmliDoubleToName @ 0x1C001E8BC (ACPIAmliDoubleToName.c)
 *     RtlStringCchCopyNA @ 0x1C0020438 (RtlStringCchCopyNA.c)
 */

__int64 __fastcall ACPIGetConvertToHardwareIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, int *a6)
{
  _BYTE *v6; // rdi
  char v7; // r15
  __int64 v10; // rax
  int v11; // esi
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // r14d
  int v15; // ebp
  char *v16; // rax
  char *v17; // rsi
  int v18; // ebx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rbx
  char *Pool2; // rax
  char *v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = 0;
  v24 = 0LL;
  v25 = 0;
  if ( (a4 & 0x4000000) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( (v10 & 0x1000000000LL) != 0 )
    {
      v18 = ACPIGetProcessorIDWide(a1, a2, a3, a4, (__int64)&v24, (__int64)&v25);
      if ( v18 >= 0 )
      {
        v17 = v24;
        v15 = v25;
        goto LABEL_10;
      }
      return (unsigned int)v18;
    }
    if ( (v10 & 0x800000000000LL) != 0 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 608) + v22) );
      v12 = v22 - 4;
      v11 = a4 & 0x8000000;
      Pool2 = (char *)ExAllocatePool2(
                        (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                        v12,
                        1399874369LL);
      v6 = Pool2;
      if ( Pool2 )
      {
        v7 = 1;
        RtlStringCchCopyNA(Pool2, v12, (STRSAFE_PCNZCH)(*(_QWORD *)(a1 + 608) + 5LL), v12 - 1);
        goto LABEL_8;
      }
      return (unsigned int)-1073741670;
    }
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) == 1 )
  {
    v11 = a4 & 0x8000000;
    v12 = 8;
    v13 = ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, 8LL, 1399874369LL);
    v6 = (_BYTE *)v13;
    if ( v13 )
    {
      v7 = 1;
      ACPIAmliDoubleToName(v13, *(unsigned int *)(a3 + 16));
LABEL_8:
      v14 = 2 * v12 + 7;
      v15 = 2 * v14;
      v16 = (char *)ExAllocatePool2((-(__int64)(v11 != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, 2 * v14, 1399874369LL);
      v17 = v16;
      if ( !v16 )
      {
        v18 = -1073741670;
LABEL_13:
        if ( v7 == 1 )
          ExFreePoolWithTag(v6, 0);
        return (unsigned int)v18;
      }
      RtlStringCchPrintfA(v16, v14, "ACPI\\%s", v6);
      RtlStringCchPrintfA(&v17[v12 + 5], v14 - (v12 + 5), "*%s", v6);
      ACPIAnsiStringToWideHelper(v17, 2 * v14);
LABEL_10:
      *a5 = v17;
      if ( a6 )
        *a6 = v15;
      v18 = 0;
      goto LABEL_13;
    }
    return (unsigned int)-1073741670;
  }
  if ( *(_WORD *)(a3 + 2) != 2 )
    return 3222536207LL;
  v20 = *(_DWORD *)(a3 + 24);
  v6 = *(_BYTE **)(a3 + 32);
  if ( v20 )
  {
    if ( *v6 != 42 || (++v6, v20 != 1) )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v6[v21] );
      v12 = v21 + 1;
      v11 = a4 & 0x8000000;
      goto LABEL_8;
    }
  }
  return 3221225485LL;
}
