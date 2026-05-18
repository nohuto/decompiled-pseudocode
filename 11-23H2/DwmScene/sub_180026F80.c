/*
 * XREFs of sub_180026F80 @ 0x180026F80
 * Callers:
 *     sub_1800C4D60 @ 0x1800C4D60 (sub_1800C4D60.c)
 *     sub_1800C5100 @ 0x1800C5100 (sub_1800C5100.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001C1C4 @ 0x18001C1C4 (sub_18001C1C4.c)
 *     sub_18002650C @ 0x18002650C (sub_18002650C.c)
 */

__int64 __fastcall sub_180026F80(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r9
  int v7; // esi
  int v8; // ebp
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  sub_18002650C(a3, &v10);
  v7 = (int)*(float *)&v10;
  v8 = (int)*((float *)&v10 + 1);
  if ( !*(_QWORD *)a2
    || v6 != *(_DWORD *)(a2 + 16)
    || v7 != *(_DWORD *)(a2 + 8)
    || v8 != *(_DWORD *)(a2 + 12)
    || *(_DWORD *)(a2 + 20) != 1 )
  {
    sub_18001C1C4(*(LPVOID *)a2);
    *(_QWORD *)a2 = sub_18001C190();
    *(_DWORD *)(a2 + 8) = v7;
    *(_DWORD *)(a2 + 12) = v8;
    *(_DWORD *)(a2 + 16) = a4;
    *(_DWORD *)(a2 + 20) = 1;
  }
  return *(_QWORD *)a2;
}
