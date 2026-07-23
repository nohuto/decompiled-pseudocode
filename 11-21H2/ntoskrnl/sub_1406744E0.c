/*
 * XREFs of sub_1406744E0 @ 0x1406744E0
 * Callers:
 *     sub_140673C3C @ 0x140673C3C (sub_140673C3C.c)
 * Callees:
 *     PsGetProcessSectionBaseAddress @ 0x1402A07F0 (PsGetProcessSectionBaseAddress.c)
 *     LdrResSearchResource @ 0x140673120 (LdrResSearchResource.c)
 */

__int64 __fastcall sub_1406744E0(__int64 a1, __int64 a2)
{
  int v3; // ebx
  unsigned __int64 ProcessSectionBaseAddress; // rax
  __int64 v5; // rcx
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  *(_QWORD *)a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 2172) & 1) != 0 )
  {
    v7 = qword_140C5AE28;
    *(_DWORD *)a2 = *(_DWORD *)(qword_140C5AE28 + 968);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v7 + 972);
  }
  else
  {
    ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(a1);
    if ( ProcessSectionBaseAddress )
    {
      v8[0] = 16LL;
      v8[1] = 1LL;
      v8[2] = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v3 = LdrResSearchResource(ProcessSectionBaseAddress, v8, 3u, 48, &v10, (__int64 *)&v9, 0LL, 0LL);
      if ( v3 >= 0 )
      {
        if ( v9 < 0x5C )
          return (unsigned int)-1073741811;
        v5 = v10;
        if ( *(_WORD *)(v10 + 4) || *(_WORD *)(v10 + 2) != 52 )
        {
          return (unsigned int)-1073741811;
        }
        else
        {
          *(_DWORD *)a2 = *(_DWORD *)(v10 + 52);
          *(_DWORD *)(a2 + 4) = *(_DWORD *)(v5 + 48);
        }
      }
    }
  }
  return (unsigned int)v3;
}
