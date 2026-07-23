/*
 * XREFs of sub_1403AF4FC @ 0x1403AF4FC
 * Callers:
 *     sub_1403AF3B4 @ 0x1403AF3B4 (sub_1403AF3B4.c)
 *     sub_14045B77E @ 0x14045B77E (sub_14045B77E.c)
 * Callees:
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 */

__int64 __fastcall sub_1403AF4FC(__int64 a1, _DWORD *a2)
{
  char v4; // cl
  unsigned int v5; // r8d
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax

  v4 = 0;
  v5 = -1073741585;
  if ( *(_BYTE *)(a1 + 95) )
  {
    v6 = *(unsigned int *)(a1 + 88);
    v7 = *((_QWORD *)KeGetCurrentPrcb() + v6 + 1664);
    if ( !*(_BYTE *)(v7 + 93) )
    {
      v12 = *(_QWORD *)(v7 + 8);
      if ( !v12 || v12 == v7 + 8 )
        v4 = 1;
    }
    if ( *(__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))(v7 + 80) != sub_140420C10
      || v4 )
    {
      HalDisableInterrupt(a2);
      *((_QWORD *)KeGetCurrentPrcb() + v6 + 1664) = 0LL;
      v5 = 0;
    }
    else
    {
      if ( a1 == v7 )
      {
        v7 = *(_QWORD *)(v7 + 8) - 8LL;
        *(_QWORD *)(v7 + 80) = sub_140420C10;
        *((_QWORD *)KeGetCurrentPrcb() + v6 + 1664) = v7;
      }
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD **)(a1 + 16);
      if ( *(_QWORD *)(v9 + 8) != a1 + 8 || *v10 != a1 + 8 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v11 = *(_QWORD *)(v7 + 8) - 8LL;
      if ( v7 == v11 && *(_BYTE *)(v11 + 93) )
      {
        *(_QWORD *)(v11 + 80) = sub_1404215E0;
        *((_QWORD *)KeGetCurrentPrcb() + v6 + 1664) = v11;
      }
      v5 = 296;
    }
    *(_BYTE *)(a1 + 95) = 0;
  }
  return v5;
}
