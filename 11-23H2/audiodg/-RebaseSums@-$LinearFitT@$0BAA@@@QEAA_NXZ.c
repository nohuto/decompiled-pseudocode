/*
 * XREFs of ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x14000C340
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall LinearFitT<256>::RebaseSums(__int64 a1)
{
  int v1; // r12d
  __int64 v2; // r14
  unsigned int v3; // esi
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // r15
  signed __int64 v7; // r8
  signed __int64 v8; // r10
  __int128 v9; // rax
  __int64 v10; // r11
  __int64 v11; // rdi
  __int128 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r11
  __int64 *v15; // r8
  char result; // al

  v1 = *(_DWORD *)(a1 + 8);
  v2 = a1 + 104;
  *(_QWORD *)(a1 + 80) = 0LL;
  v3 = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 40) = v4;
  v5 = v4;
  v6 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 48) = v6;
  while ( 1 )
  {
    v7 = v5 - v4;
    v8 = *(_QWORD *)(v2 + 8) - v6;
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
    v10 = *(_QWORD *)(a1 + 80);
    v11 = v9 + v10;
    if ( v10 < 0 == (__int64)v9 < 0 && v10 < 0 != v11 < 0 )
      break;
    v12 = v7 * (__int128)v8;
    if ( (__int64)v12 < 0 )
    {
      if ( *((_QWORD *)&v12 + 1) != -1LL )
        break;
    }
    else if ( !is_mul_ok(v7, v8) )
    {
      break;
    }
    v13 = *(_QWORD *)(a1 + 72);
    v14 = v12 + v13;
    if ( v13 < 0 == (__int64)v12 < 0 && v13 < 0 != v14 < 0 )
      break;
    *(_QWORD *)(a1 + 56) += v7;
    ++v3;
    *(_QWORD *)(a1 + 64) += v8;
    v15 = (__int64 *)(v2 + 16);
    ++*(_DWORD *)(a1 + 8);
    v2 += 16LL;
    *(_QWORD *)(a1 + 72) = v14;
    *(_QWORD *)(a1 + 80) = v11;
    if ( v3 >= 0x100 )
    {
      result = 1;
      goto LABEL_13;
    }
    v5 = *v15;
  }
  result = 0;
LABEL_13:
  *(_DWORD *)(a1 + 8) = v1;
  return result;
}
