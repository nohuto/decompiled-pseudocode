/*
 * XREFs of sub_1405C7F88 @ 0x1405C7F88
 * Callers:
 *     sub_140399184 @ 0x140399184 (sub_140399184.c)
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 *     sub_1405C7DCC @ 0x1405C7DCC (sub_1405C7DCC.c)
 *     sub_1405C7E9C @ 0x1405C7E9C (sub_1405C7E9C.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 */

char __fastcall sub_1405C7F88(__int64 a1, char a2, char a3)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  __int64 j; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // dl
  unsigned int i; // edx
  unsigned __int64 v11; // rcx
  LARGE_INTEGER v13; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(v3) = *(_BYTE *)(a1 + 24);
  if ( a3 )
  {
    v9 = v3 & ~a2;
    *(_BYTE *)(a1 + 24) = v9;
    if ( !v9 )
    {
      v3 = KeQueryInterruptTimePrecise(&v13);
      for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
      {
        v11 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)i << 6);
        if ( *(_QWORD *)(v11 + 32) )
          *(_QWORD *)(v11 + 48) = v3;
      }
    }
  }
  else
  {
    LOBYTE(v3) = a2 | v3;
    *(_BYTE *)(a1 + 24) = v3;
    if ( (_BYTE)v3 == a2 )
    {
      v3 = KeQueryInterruptTimePrecise(&v13);
      v5 = 0;
      for ( j = v3; v5 < *(_DWORD *)(a1 + 28); ++v5 )
      {
        v7 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)v5 << 6);
        v8 = *(_QWORD *)(v7 + 48);
        if ( v8 )
        {
          LOBYTE(v3) = j - v8;
          *(_QWORD *)(v7 + 56) += j - v8;
          *(_QWORD *)(v7 + 48) = 0LL;
        }
      }
    }
  }
  return v3;
}
