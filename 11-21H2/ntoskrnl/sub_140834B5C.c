/*
 * XREFs of sub_140834B5C @ 0x140834B5C
 * Callers:
 *     sub_140834684 @ 0x140834684 (sub_140834684.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 */

__int64 __fastcall sub_140834B5C(HANDLE KeyHandle)
{
  __int64 v1; // rdi
  int v3; // eax
  int v4; // eax
  ULONG DataSize; // ebx
  void *Data; // rcx
  int v7; // eax
  void *v8; // rcx
  int v9; // eax
  void *v10; // rcx
  int v11; // eax
  wchar_t Dst[128]; // [rsp+30h] [rbp-118h] BYREF

  v1 = qword_140C48E70;
  v3 = *(_DWORD *)(qword_140C48E70 + 800);
  if ( (v3 & 0x20) != 0 )
  {
    v4 = swprintf_s(Dst, 0x80uLL, L"%u", (unsigned __int16)*(_DWORD *)(qword_140C48E70 + 8));
    if ( v4 == -1 )
      return 2147483653LL;
    DataSize = (unsigned __int16)(2 * v4) + 2;
    ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A38448, 0, 1u, Dst, DataSize);
    ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A38468, 0, 1u, Dst, DataSize);
    v3 = *(_DWORD *)(v1 + 800);
  }
  if ( (v3 & 0x40) != 0 )
    ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A38488, 0, 4u, (PVOID)(v1 + 12), 4u);
  Data = *(void **)(v1 + 72);
  if ( Data )
  {
    v7 = *(unsigned __int16 *)(v1 + 64);
    if ( (_WORD)v7 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A38478, 0, 1u, Data, v7 + 2);
  }
  v8 = *(void **)(v1 + 88);
  if ( v8 )
  {
    v9 = *(unsigned __int16 *)(v1 + 80);
    if ( (_WORD)v9 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A384A8, 0, 1u, v8, v9 + 2);
  }
  v10 = *(void **)(v1 + 104);
  if ( v10 )
  {
    v11 = *(unsigned __int16 *)(v1 + 96);
    if ( (_WORD)v11 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A38498, 0, 1u, v10, v11 + 2);
  }
  return 0LL;
}
