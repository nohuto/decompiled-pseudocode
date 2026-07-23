/*
 * XREFs of sub_140AA4550 @ 0x140AA4550
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessExitProcessCalled @ 0x140251B90 (PsGetProcessExitProcessCalled.c)
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 *     sub_140A81CBC @ 0x140A81CBC (sub_140A81CBC.c)
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

char __fastcall sub_140AA4550(__int64 a1)
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // rdx
  void *v5; // rsi
  ULONG_PTR v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rax
  __int128 MemoryInformation; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h]
  __int128 v12; // [rsp+50h] [rbp-18h]

  MemoryInformation = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 <= 0x7FFFFFFEFFFFLL )
  {
    if ( CurrentIrql <= 1u )
      goto LABEL_7;
    v4 = 122LL;
  }
  else
  {
    if ( CurrentIrql <= 2u )
      goto LABEL_7;
    v4 = 121LL;
  }
  sub_140A8C924(0xC4u, v4, CurrentIrql, v3, *(_QWORD *)(a1 + 8));
LABEL_7:
  v5 = *(void **)(a1 + 16);
  if ( (unsigned __int64)v5 <= 0x7FFFFFFEFFFFLL )
  {
    if ( !PsGetProcessExitProcessCalled(*((_QWORD *)KeGetCurrentThread() + 23)) )
    {
      v7 = ((*(_DWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 44LL)) & 0xFFF)
         + *(unsigned int *)(*(_QWORD *)(a1 + 8) + 40LL)
         + 4095LL;
      if ( (ZwQueryVirtualMemory(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              v5,
              MemoryRegionInformationEx,
              &MemoryInformation,
              0x30uLL,
              0LL) < 0
         || (_QWORD)MemoryInformation != (*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFF000uLL)
         || (_QWORD)v11 != (v7 & 0xFFFFFFFFFFFFF000uLL)
         || (BYTE12(MemoryInformation) & 1) == 0)
        && sub_140A81CBC(*(_QWORD *)a1) )
      {
        sub_140A8C924(0xC4u, 0xB9uLL, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), 0LL);
      }
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( (*(_WORD *)(v6 + 10) & 1) == 0 )
      sub_140A8C924(0xC4u, 0xB6uLL, v6, *(__int16 *)(v6 + 10), 1LL);
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( (dword_140C29FC0 & 0x1000) != 0 )
    LOBYTE(v8) = sub_140A8B064(*(_QWORD *)a1, 200LL, 0xD0u, -(__int64)*(unsigned int *)(v8 + 40));
  return v8;
}
