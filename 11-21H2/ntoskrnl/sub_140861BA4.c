/*
 * XREFs of sub_140861BA4 @ 0x140861BA4
 * Callers:
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 __fastcall sub_140861BA4(PVOID **a1, __int64 a2, KPROCESSOR_MODE AccessMode)
{
  PVOID *v3; // r13
  ULONG v6; // edx
  HANDLE *Handle; // rbp
  HANDLE *v8; // r14
  HANDLE *v9; // r15
  NTSTATUS v10; // esi

  v3 = *a1;
  if ( *(_DWORD *)a2 != 1 )
    return 3221225485LL;
  v6 = *(_DWORD *)(a2 + 4);
  if ( (v6 & (AccessMode != 0 ? 7666 : 73714)) != v6 )
    return 3221225485LL;
  Handle = (HANDLE *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v8 = (HANDLE *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  v9 = (HANDLE *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  v10 = ObOpenObjectByPointer(v3[37], v6, 0LL, *(_DWORD *)(a2 + 8), (POBJECT_TYPE)ExEventObjectType, AccessMode, Handle);
  if ( v10 < 0
    || (v10 = ObOpenObjectByPointer(
                v3[38],
                *(_DWORD *)(a2 + 4),
                0LL,
                *(_DWORD *)(a2 + 8),
                (POBJECT_TYPE)ExEventObjectType,
                AccessMode,
                (PHANDLE)(a2 + 24)),
        v10 < 0)
    || (v10 = ObOpenObjectByPointer(
                v3[39],
                *(_DWORD *)(a2 + 4),
                0LL,
                *(_DWORD *)(a2 + 8),
                (POBJECT_TYPE)ExEventObjectType,
                AccessMode,
                (PHANDLE)(a2 + 32)),
        v10 < 0) )
  {
    if ( *Handle )
      ObCloseHandle(*Handle, AccessMode);
    if ( *v8 )
      ObCloseHandle(*v8, AccessMode);
    if ( *v9 )
      ObCloseHandle(*v9, AccessMode);
  }
  return (unsigned int)v10;
}
