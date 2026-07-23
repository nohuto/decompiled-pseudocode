/*
 * XREFs of KiSwapDirectoryTableBaseTarget @ 0x1403D74B0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetAddressPolicy @ 0x14022E230 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MmStealTopLevelPage @ 0x1403D75EC (MmStealTopLevelPage.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140549F50 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiSwapDirectoryTableBaseTarget(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        __int64 a4)
{
  __int64 v4; // rbp
  signed __int32 v8; // eax
  unsigned int v9; // edi
  unsigned __int64 result; // rax
  unsigned int v11; // edi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // [rsp+58h] [rbp+10h] BYREF
  int i; // [rsp+68h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x7FFFFFFF) != 0 )
  {
    v15 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
      KeYieldProcessorEx(&v15);
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v9;
  }
  if ( (unsigned int)MmStealTopLevelPage(*(_QWORD *)(a2 + 16)) )
    *(_BYTE *)a2 = 1;
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v11 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v11 )
        break;
    }
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v11;
  }
  if ( *(_BYTE *)a2 )
  {
    result = (unsigned __int64)KeGetCurrentThread();
    if ( *(_QWORD *)(result + 184) == v4 )
    {
      v12 = *(_QWORD *)(v4 + 40);
      if ( KiKvaShadow )
      {
        v13 = v12 | 0x8000000000000000uLL;
        if ( (v12 & 2) == 0 )
          v13 = *(_QWORD *)(v4 + 40);
        __writegsqword(0xA000u, v13);
        KiSetAddressPolicy();
      }
      result = (unsigned int)HvlEnlightenments;
      if ( (HvlEnlightenments & 1) != 0 )
        result = HvlSwitchVirtualAddressSpace(v12);
      else
        __writecr3(v12);
      if ( !KiFlushPcid && KiKvaShadow )
      {
        v14 = __readcr4();
        if ( (v14 & 0x20080) != 0 )
        {
          result = v14 ^ 0x80;
          __writecr4(v14 ^ 0x80);
          __writecr4(v14);
        }
        else
        {
          result = __readcr3();
          __writecr3(result);
        }
      }
    }
  }
  _InterlockedDecrement(a3);
  return result;
}
