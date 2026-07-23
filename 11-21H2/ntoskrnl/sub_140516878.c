/*
 * XREFs of sub_140516878 @ 0x140516878
 * Callers:
 *     sub_140504DAC @ 0x140504DAC (sub_140504DAC.c)
 *     sub_1405166D4 @ 0x1405166D4 (sub_1405166D4.c)
 *     sub_140516878 @ 0x140516878 (sub_140516878.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140504FE8 @ 0x140504FE8 (sub_140504FE8.c)
 *     sub_140516878 @ 0x140516878 (sub_140516878.c)
 *     sub_140516B78 @ 0x140516B78 (sub_140516B78.c)
 */

__int64 __fastcall sub_140516878(__int64 a1)
{
  __int64 v1; // r11
  void *v2; // rsi
  __int64 v3; // r10
  __int64 v4; // r12
  int v5; // edi
  __int64 *v6; // r15
  __int64 v8; // r8
  int v9; // edx
  unsigned int *v10; // r14
  char v11; // r13
  unsigned int v12; // ecx
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v16; // [rsp+40h] [rbp-49h]
  __int64 v17; // [rsp+48h] [rbp-41h]
  __int64 v18; // [rsp+68h] [rbp-21h]
  __int64 v19; // [rsp+70h] [rbp-19h]
  __int64 v20; // [rsp+78h] [rbp-11h]
  unsigned int v21; // [rsp+F0h] [rbp+67h]
  unsigned int v22; // [rsp+F8h] [rbp+6Fh]
  __int64 v23; // [rsp+100h] [rbp+77h]
  __int64 v24; // [rsp+108h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 24);
  v23 = 0LL;
  v2 = *(void **)(a1 + 88);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(__int64 **)(a1 + 48);
  v8 = *(unsigned int *)(a1 + 56);
  v9 = *(_DWORD *)(a1 + 60);
  v10 = *(unsigned int **)(a1 + 80);
  v11 = *(_BYTE *)(a1 + 96);
  v16 = v1;
  v17 = v4;
  v24 = 0LL;
  v18 = *(_QWORD *)(v1 + 504);
  if ( v2 )
  {
    _m_prefetchw(v2);
    if ( (_InterlockedOr((volatile signed __int32 *)v2, 4u) & 2) != 0 )
      goto LABEL_3;
  }
  *v10 = 0;
  *((_QWORD *)v10 + 1) = a1;
  if ( v6 )
  {
    do
    {
      if ( !(_DWORD)v8 )
        break;
      v20 = 3LL * *v10;
      v12 = v8;
      if ( *((_DWORD *)v6 + 10) - v9 <= (unsigned int)v8 )
        v12 = *((_DWORD *)v6 + 10) - v9;
      v21 = v12;
      v22 = v8 - v12;
      if ( v12 )
      {
        v19 = ((_WORD)v9 + *((_WORD *)v6 + 22)) & 0xFFF;
        v13 = (v19 + (unsigned __int64)v12 + 4095) >> 12;
        if ( *(_BYTE *)(a1 + 98) )
        {
          v5 = sub_14042A5E0(*(_QWORD *)(v1 + 552), v3);
          if ( v5 < 0 )
            goto LABEL_22;
          v1 = v16;
          v14 = v24 + **(_QWORD **)(v16 + 552);
          v3 = v13 + v24;
          v23 = v14;
          v24 += v13;
        }
        else
        {
          v5 = sub_14042A5E0(*(_QWORD *)(v18 + 40), 3LL);
          if ( v5 < 0 )
            goto LABEL_22;
          v14 = v23;
          v3 = v24;
          v1 = v16;
        }
        *(_QWORD *)&v10[2 * v20 + 8] = 0LL;
        *(_QWORD *)&v10[2 * v20 + 4] = v19 + v14;
        v10[2 * v20 + 6] = v21;
        ++*v10;
      }
      v6 = (__int64 *)*v6;
      v9 = 0;
      v8 = v22;
    }
    while ( v6 );
    v4 = v17;
  }
  if ( v2 && (_m_prefetchw(v2), (_InterlockedOr((volatile signed __int32 *)v2, 1u) & 2) != 0) )
  {
LABEL_3:
    v5 = -1073741536;
LABEL_22:
    if ( *v10 )
      sub_140516B78(*(_QWORD *)(a1 + 24), v10, v8);
    if ( v5 != -1073741536 && !*(_BYTE *)(a1 + 98) )
    {
      *(_BYTE *)(a1 + 98) = 1;
      if ( sub_140504FE8(v16, (_QWORD *)a1, v11 == 0) )
        return (unsigned int)sub_140516878(a1);
      else
        return v11 != 0 ? (unsigned int)v5 : 0;
    }
  }
  else if ( v4 )
  {
    sub_14042A5E0(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
  }
  return (unsigned int)v5;
}
