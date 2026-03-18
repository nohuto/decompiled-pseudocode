/*
 * XREFs of NtFlushVirtualMemory @ 0x1407F0310
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     MmFlushVirtualMemory @ 0x1407F0478 (MmFlushVirtualMemory.c)
 */

__int64 __fastcall NtFlushVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _OWORD *a4)
{
  char PreviousMode; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  unsigned int v15; // [rsp+40h] [rbp-38h]
  unsigned __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  __int128 v19; // [rsp+60h] [rbp-18h] BYREF

  Object = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a3;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a4;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    v12 = *a2;
    v17 = *a2;
    v13 = *a3;
    v16 = *a3;
  }
  else
  {
    v12 = *a2;
    v17 = *a2;
    v13 = *a3;
    v16 = *a3;
  }
  if ( v12 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - v12 < v13 )
    return 3221225713LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x6C466D4Du,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v15 = MmFlushVirtualMemory(Object, &v17, &v16, &v19);
    ObfDereferenceObjectWithTag(Object, 0x6C466D4Du);
    *a3 = v16;
    *a2 = v17 & 0xFFFFFFFFFFFFF000uLL;
    *a4 = v19;
    return v15;
  }
  return result;
}
