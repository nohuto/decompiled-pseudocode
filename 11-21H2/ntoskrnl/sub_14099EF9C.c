/*
 * XREFs of sub_14099EF9C @ 0x14099EF9C
 * Callers:
 *     sub_14099F1CC @ 0x14099F1CC (sub_14099F1CC.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 */

__int64 __fastcall sub_14099EF9C(unsigned int a1, __int64 a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebx
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( a1 < 0xC )
    return (unsigned int)-1073741811;
  v3 = *(_DWORD *)(a2 + 8);
  v4 = 2LL * v3;
  if ( v4 > 0xFFFFFFFF || (unsigned int)v4 > a1 - 12 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Buffer[0] = 1;
    v8 = a2 + 12;
    Buffer[1] = v3;
    sub_1402D66A8((ULONG_PTR)&qword_140C1CB30);
    v5 = 0;
    if ( RtlDeleteElementGenericTableAvl(&stru_140C1CAC0, Buffer) )
      _InterlockedDecrement(&dword_140C1CB40);
    else
      v5 = -1073741275;
    sub_1402935D0((ULONG_PTR)&qword_140C1CB30);
  }
  return v5;
}
