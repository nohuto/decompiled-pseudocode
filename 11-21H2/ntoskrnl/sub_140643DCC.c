/*
 * XREFs of sub_140643DCC @ 0x140643DCC
 * Callers:
 *     WheaRecoveryBugCheck @ 0x1406435C0 (WheaRecoveryBugCheck.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     sub_140645F80 @ 0x140645F80 (sub_140645F80.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_140643DCC(char a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int16 v5; // bp
  unsigned __int16 v6; // dx
  unsigned int i; // esi
  __int64 v8; // rax
  unsigned __int16 v9; // dx
  unsigned int *v10; // rsi
  int v11; // r14d
  unsigned int v12; // edi
  unsigned int v13; // ebp
  __int64 v14; // rax
  void *result; // rax

  if ( (a1 & 2) != 0 )
  {
    v4 = (_QWORD *)(a2 + 128);
    v5 = 0;
    v6 = *(_WORD *)(a2 + 10);
    for ( i = 0; i < v6; ++i )
    {
      v8 = v4[2] - 0x4940C1B9E71254E9LL;
      if ( v4[2] == 0x4940C1B9E71254E9LL )
        v8 = v4[3] - 0xF32A403979076ABLL;
      if ( v8 )
      {
        v4 += 9;
      }
      else
      {
        if ( v6 - i != 1 )
        {
          memmove(v4, v4 + 9, 72 * (v6 - i - 1));
          v6 = *(_WORD *)(a2 + 10);
        }
        ++v5;
      }
    }
    v9 = v6 - v5;
    *(_WORD *)(a2 + 10) = v9;
  }
  else
  {
    v9 = *(_WORD *)(a2 + 10);
  }
  v10 = (unsigned int *)(a2 + 128);
  v11 = a1 & 1;
  if ( v11 )
    v12 = 72 * v9 + 128;
  else
    v12 = *v10;
  v13 = 0;
  if ( v9 )
  {
    do
    {
      v14 = *v10;
      if ( v12 < (unsigned int)v14 )
      {
        memmove((void *)(a2 + v12), (const void *)(a2 + v14), v10[1]);
        *v10 = v12;
      }
      v12 += v10[1];
      ++v13;
      v10 += 18;
    }
    while ( v13 < *(unsigned __int16 *)(a2 + 10) );
  }
  result = memset((void *)(a2 + v12), 0, *(_DWORD *)(a2 + 20) - v12);
  if ( v11 )
    *(_DWORD *)(a2 + 20) = v12;
  return result;
}
