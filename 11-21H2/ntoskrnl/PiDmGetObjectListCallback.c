/*
 * XREFs of PiDmGetObjectListCallback @ 0x140788CE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PiDmGetObjectListCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 (__fastcall *v5)(__int64, _QWORD, char *); // rax
  int v6; // esi
  __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  char v11; // [rsp+58h] [rbp+10h] BYREF

  *a3 = 0;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))a2;
  v6 = 0;
  v11 = 0;
  if ( !v5 || (v6 = v5(a1, *(_QWORD *)(a2 + 8), &v11), v6 >= 0) && v11 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v7) );
    v8 = *(_DWORD *)(a2 + 24);
    v9 = v7 + 1;
    *(_DWORD *)(a2 + 28) += v9;
    if ( v8 > v9 )
    {
      RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a2 + 16), v8, *(NTSTRSAFE_PCWSTR *)(a1 + 16), 0LL, 0LL, 0x900u);
      *(_QWORD *)(a2 + 16) += 2LL * v9;
      *(_DWORD *)(a2 + 24) -= v9;
    }
  }
  return (unsigned int)v6;
}
