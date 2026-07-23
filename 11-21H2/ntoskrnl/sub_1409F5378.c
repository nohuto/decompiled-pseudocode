/*
 * XREFs of sub_1409F5378 @ 0x1409F5378
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     sub_1407969D0 @ 0x1407969D0 (sub_1407969D0.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1409F5570 @ 0x1409F5570 (sub_1409F5570.c)
 */

__int64 __fastcall sub_1409F5378(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int *v7; // rdi
  signed __int64 **i; // rdx
  signed __int64 *v9; // rax
  signed __int64 *v10; // rsi
  signed __int64 **j; // rdx
  signed __int64 *v12; // rax
  __int64 v13; // r8
  signed __int64 *v14; // rsi

  v5 = 0;
  v6 = sub_140797594(a1, a2, 0);
  v7 = (unsigned int *)v6;
  if ( v6 )
  {
    if ( a3 )
    {
      _InterlockedOr((volatile signed __int32 *)(v6 + 816), 0x2000000u);
      for ( i = 0LL; ; i = (signed __int64 **)v10 )
      {
        v9 = sub_1407969D0(a1, i, 0);
        v10 = v9;
        if ( !v9 )
          break;
        sub_1409F5570(v7, v9, 0LL);
      }
      for ( j = 0LL; ; j = (signed __int64 **)v14 )
      {
        v12 = sub_1407969D0(a1, j, 2);
        v14 = v12;
        if ( !v12 )
          break;
        LOBYTE(v13) = 2;
        sub_1409F5570(v7, v12, v13);
      }
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v6 + 816), 0xFDFFFFFF);
    }
    sub_1407981E8(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
