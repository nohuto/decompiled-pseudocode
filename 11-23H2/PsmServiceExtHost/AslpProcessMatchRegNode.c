/*
 * XREFs of AslpProcessMatchRegNode @ 0x18009F728
 * Callers:
 *     AslRegWildcardFindNext @ 0x18009EFFC (AslRegWildcardFindNext.c)
 * Callees:
 *     AslRegistryEnumKey @ 0x1800986B0 (AslRegistryEnumKey.c)
 *     AslRegistryGetKey @ 0x18009876C (AslRegistryGetKey.c)
 *     AslRegistryOpenSubKey @ 0x180098964 (AslRegistryOpenSubKey.c)
 *     AslStringPatternMatchExW @ 0x180098F4C (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslpProcessMatchRegNode(__int64 a1, __int64 a2)
{
  HANDLE *v3; // rbx
  int Key; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  void *v8; // r14
  __int16 *v9; // rax
  __int16 v10; // bx
  int v11; // eax
  __int64 v12; // rax
  const WCHAR *v13; // rdx
  HANDLE *v14; // rbx
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF

  Destination = 0LL;
  if ( *(_QWORD *)(a1 + 8) == a2 )
  {
    v3 = (HANDLE *)(a1 + 32);
    if ( *(_QWORD *)(a1 + 32) )
    {
      ZwClose(*v3);
      *v3 = 0LL;
      Key = -2147483622;
    }
    else
    {
      Key = AslRegistryGetKey((_QWORD *)(a1 + 32), *(const WCHAR **)(a1 + 24), 0x20019u);
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(v5 + 2 * v6) );
    Destination.MaximumLength = 2 * (v6 + 261);
    Destination.Buffer = (PWSTR)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Destination.MaximumLength);
    v8 = *(void **)(*(_QWORD *)(a1 + 8) + 32LL);
    while ( 1 )
    {
      *Destination.Buffer = 0;
      Key = AslRegistryEnumKey(Destination.Buffer, v7, v8, *(_DWORD *)(a1 + 40));
      if ( Key < 0 )
        break;
      v9 = *(__int16 **)(a1 + 24);
      ++*(_DWORD *)(a1 + 40);
      v10 = *v9;
      *v9 = 0;
      v11 = AslStringPatternMatchExW(*(WCHAR **)(a1 + 16), Destination.Buffer);
      **(_WORD **)(a1 + 24) = v10;
      if ( v11 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( Destination.Buffer[v12] );
        v13 = *(const WCHAR **)(a1 + 24);
        Destination.Length = 2 * v12;
        RtlAppendUnicodeToString(&Destination, v13);
        v14 = (HANDLE *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 32) )
        {
          ZwClose(*v14);
          *v14 = 0LL;
        }
        Key = AslRegistryOpenSubKey((PHANDLE)(a1 + 32), v8, Destination.Buffer);
        if ( Key >= 0 )
          goto LABEL_17;
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
LABEL_17:
  if ( Destination.Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
  return (unsigned int)Key;
}
