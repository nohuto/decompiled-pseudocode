/*
 * XREFs of sub_140A30930 @ 0x140A30930
 * Callers:
 *     sub_1406C1D24 @ 0x1406C1D24 (sub_1406C1D24.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14081D0F0 @ 0x14081D0F0 (sub_14081D0F0.c)
 */

__int64 __fastcall sub_140A30930(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  v4 = *(_QWORD *)(a2 + 96);
  if ( *(_QWORD *)a1 )
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 224LL);
  else
    v5 = 0LL;
  v6 = sub_14077FFEC(v5, v4, 0LL, 0, 2u, (__int64)&Handle);
  if ( v6 >= 0 )
  {
    v6 = sub_14081D0F0(
           a1,
           *(const wchar_t **)(a2 + 24),
           Handle,
           (__int64)qword_14000EAF8,
           7u,
           (const WCHAR *)(a2 + 68),
           4u);
    if ( v6 >= 0 )
      v6 = sub_14081D0F0(
             a1,
             *(const wchar_t **)(a2 + 24),
             Handle,
             (__int64)qword_14000EAE0,
             7u,
             (const WCHAR *)(a2 + 72),
             4u);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
