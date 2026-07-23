/*
 * XREFs of sub_140855418 @ 0x140855418
 * Callers:
 *     sub_1408553A0 @ 0x1408553A0 (sub_1408553A0.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140855418(int a1, __int64 a2, unsigned int a3, _DWORD *a4, int *a5)
{
  int v5; // ebx
  __int64 v9; // r8
  int *v10; // rdx
  _DWORD *v11; // rcx
  int v12; // eax
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-18h]

  v5 = 332;
  if ( a3 < 0x14C )
  {
    if ( a3 >= 4 )
    {
      *a4 = 332;
      v5 = 4;
    }
    result = 3221225507LL;
  }
  else
  {
    memset(a4, 0, 0x14CuLL);
    v9 = 8LL;
    v10 = &dword_14000952C;
    a4[4] = 8;
    v11 = a4 + 11;
    do
    {
      *(_OWORD *)(v11 - 5) = *(_OWORD *)*(_QWORD *)(v10 - 3);
      v12 = *v10;
      v10 += 4;
      *(v11 - 1) = v12;
      *v11 = *(v10 - 5);
      v11[1] = 280;
      v11 += 8;
      --v9;
    }
    while ( v9 );
    *a4 = 332;
    *((_WORD *)a4 + 140) = 50;
    v14 = a1;
    result = sub_1402E1280((wchar_t *)a4 + 141, a3 - 282, L"%s%d", L"PPM_Processor_", v14);
    if ( (int)result >= 0 )
      result = 0LL;
  }
  *a5 = v5;
  return result;
}
