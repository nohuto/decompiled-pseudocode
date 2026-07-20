/*
 * XREFs of PathReplaceGreedy @ 0x14001B270
 * Callers:
 *     CreateRegistryLinksForMachine @ 0x14000D180 (CreateRegistryLinksForMachine.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

__int64 __fastcall PathReplaceGreedy(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // r9
  int v4; // edi
  unsigned __int16 v6; // r8
  unsigned __int16 *v7; // r11
  unsigned __int16 v9; // r10
  unsigned __int16 *v10; // r13
  unsigned __int16 v11; // r15
  unsigned __int16 v12; // r14
  __int64 v13; // rcx
  WCHAR v14; // bx
  __int64 v15; // rdx
  int v17; // r9d
  int i; // r8d
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // r10
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int16 v28; // ax
  _WORD v29[4]; // [rsp+10h] [rbp-10h] BYREF
  unsigned __int16 *v30; // [rsp+18h] [rbp-8h]
  unsigned __int16 v31; // [rsp+20h] [rbp+0h]
  unsigned __int16 *v32; // [rsp+28h] [rbp+8h]

  v3 = *(_WORD *)a1;
  v4 = 0;
  v32 = a2;
  v6 = *a3;
  v7 = a2;
  v31 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( v6 >= v3 )
  {
    v11 = 0;
    if ( (v6 & 0xFFFE) != 0 )
    {
      do
      {
        v12 = 0;
        if ( (v3 & 0xFFFE) != 0 )
        {
          do
          {
            v13 = v11 + (unsigned int)v12;
            if ( (unsigned int)v13 >= *a3 >> 1 )
              break;
            v14 = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v13));
            if ( v14 != RtlUpcaseUnicodeChar(*(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * v12)) )
              break;
            ++v12;
          }
          while ( v12 < (unsigned __int16)(*(_WORD *)a1 >> 1) );
          v9 = v31;
          v4 = 0;
        }
        v3 = *(_WORD *)a1;
        if ( v12 == *(_WORD *)a1 >> 1 )
        {
          v15 = v11 + (unsigned int)v12;
          if ( (_DWORD)v15 == *a3 >> 1 || *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v15) == 92 )
          {
            v30 = v10;
            ++v9;
            v29[0] = v11;
            v29[1] = v11 + v12;
            v10 = v29;
            v3 = *(_WORD *)a1;
            v31 = v9;
          }
        }
        v6 = *a3;
        ++v11;
      }
      while ( v11 < (unsigned __int16)(*a3 >> 1) );
      v7 = v32;
    }
    if ( v10 )
    {
      if ( *v7 > v3 && v6 + v9 * (*v7 - (unsigned int)v3) > a3[1] )
        return 2147483653LL;
      v17 = (a3[1] >> 1) - 1;
      for ( i = (v6 >> 1) - 1; i >= 0; --i )
      {
        if ( v10 && i < v10[1] )
        {
          v19 = *v7;
          v20 = 0;
          if ( (*v7 & 0xFFFE) != 0 )
          {
            do
            {
              v21 = v20++;
              v22 = v17--;
              *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v22) = *(_WORD *)(*((_QWORD *)v7 + 1)
                                                                   + 2 * (((unsigned __int64)v19 >> 1) - v21)
                                                                   - 2);
              v19 = *v7;
            }
            while ( v20 < (unsigned __int16)(*v7 >> 1) );
          }
          i = *v10;
          v10 = (unsigned __int16 *)*((_QWORD *)v10 + 1);
        }
        else
        {
          v23 = v17--;
          *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v23) = *(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * i);
        }
      }
      v24 = v17 + 1;
      if ( v17 + 1 < a3[1] >> 1 )
      {
        v25 = 2LL * v24;
        do
        {
          v26 = *((_QWORD *)a3 + 1);
          ++v24;
          v27 = v4++;
          v28 = *(_WORD *)(v25 + v26);
          v25 += 2LL;
          *(_WORD *)(v26 + 2 * v27) = v28;
        }
        while ( v24 < a3[1] >> 1 );
      }
      *a3 = 2 * v4;
    }
  }
  return 0LL;
}
