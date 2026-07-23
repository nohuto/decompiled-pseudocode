/*
 * XREFs of sub_14075F194 @ 0x14075F194
 * Callers:
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_14082ECCC @ 0x14082ECCC (sub_14082ECCC.c)
 *     sub_14084C1C8 @ 0x14084C1C8 (sub_14084C1C8.c)
 * Callees:
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_14075F23C @ 0x14075F23C (sub_14075F23C.c)
 *     sub_140760B20 @ 0x140760B20 (sub_140760B20.c)
 */

__int64 __fastcall sub_14075F194(__int64 a1)
{
  PVOID v1; // rbx
  __int64 result; // rax
  int v4; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(PVOID *)(a1 + 48);
  v6 = 0LL;
  v5 = 0LL;
  result = sub_1402FDD20((unsigned __int64)v1);
  if ( (!(_DWORD)result || v1 == qword_140D068F0 || v1 == qword_140D06988)
    && (*(_DWORD *)(a1 + 104) & 0x800) == 0
    && (!dword_140D05218 || v1 != qword_140D068F0 && v1 != qword_140D06988) )
  {
    v4 = 0;
    do
    {
      result = sub_140760B20(a1, v4, 2, 0, (__int64)&v5, (__int64)&v6);
      v4 = result;
      if ( v5 )
        result = sub_14075F23C(a1, v5, v6, 0LL);
    }
    while ( v4 );
  }
  return result;
}
