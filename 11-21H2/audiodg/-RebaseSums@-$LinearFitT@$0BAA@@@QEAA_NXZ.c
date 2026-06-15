/*
 * XREFs of ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x140022AE0
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001A570 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall LinearFitT<256>::RebaseSums(int *a1)
{
  int v1; // r12d
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r15
  signed __int64 v7; // r8
  signed __int64 v8; // r11
  __int128 v9; // rax
  __int64 v10; // r9
  __int128 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r10
  char result; // al

  v1 = *a1;
  *((_QWORD *)a1 + 9) = 0LL;
  v2 = 24LL;
  *((_QWORD *)a1 + 8) = 0LL;
  v3 = 0;
  *((_QWORD *)a1 + 7) = 0LL;
  v4 = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  v5 = *((_QWORD *)a1 + 12);
  *((_QWORD *)a1 + 4) = v5;
  v6 = *((_QWORD *)a1 + 13);
  *((_QWORD *)a1 + 5) = v6;
  while ( 1 )
  {
    v7 = *(_QWORD *)&a1[v2] - v5;
    v8 = *(_QWORD *)&a1[v2 + 2] - v6;
    v9 = v7 * (__int128)v7;
    if ( (__int64)v9 < 0 )
    {
      if ( *((_QWORD *)&v9 + 1) != -1LL )
        break;
    }
    else if ( !is_mul_ok(v7, v7) )
    {
      break;
    }
    v10 = v4;
    v4 += v9;
    if ( v10 < 0 == (__int64)v9 < 0 && v10 < 0 != v4 < 0 )
      break;
    v11 = v7 * (__int128)v8;
    if ( (__int64)v11 < 0 )
    {
      if ( *((_QWORD *)&v11 + 1) != -1LL )
        break;
    }
    else if ( !is_mul_ok(v7, v8) )
    {
      break;
    }
    v12 = *((_QWORD *)a1 + 8);
    v13 = v11 + v12;
    if ( v12 < 0 == (__int64)v11 < 0 && v12 < 0 != v13 < 0 )
      break;
    *((_QWORD *)a1 + 6) += v7;
    ++v3;
    *((_QWORD *)a1 + 7) += v8;
    v2 += 4LL;
    ++*a1;
    *((_QWORD *)a1 + 8) = v13;
    *((_QWORD *)a1 + 9) = v4;
    if ( v3 >= 0x100 )
    {
      result = 1;
      goto LABEL_12;
    }
  }
  result = 0;
LABEL_12:
  *a1 = v1;
  return result;
}
