/*
 * XREFs of sub_1406E6244 @ 0x1406E6244
 * Callers:
 *     sub_140781A70 @ 0x140781A70 (sub_140781A70.c)
 * Callees:
 *     sub_1407438D8 @ 0x1407438D8 (sub_1407438D8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406E6244(__int64 a1, int a2, _QWORD *a3)
{
  void *v5; // rcx
  unsigned int v6; // ebx
  int v8; // eax
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v9 = 0LL;
  v6 = 0;
  if ( !a2 || (a2 & 0xFFFFFCCC) != 0 )
  {
    v6 = -1073741811;
  }
  else
  {
    *a3 = 0LL;
    if ( (a2 & 0xF00) != 0 || (_BYTE)a2 != 50 || !*(_BYTE *)(a1 + 4) )
      return v6;
    v8 = sub_1407438D8(*(_DWORD *)a1 >= 0xA000000u, &v9);
    v5 = v9;
    v6 = v8;
    if ( v8 >= 0 )
    {
      *a3 = v9;
      return v6;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
