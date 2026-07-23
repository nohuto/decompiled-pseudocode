/*
 * XREFs of sub_1405A2710 @ 0x1405A2710
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DB248 @ 0x1402DB248 (sub_1402DB248.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140583D08 @ 0x140583D08 (sub_140583D08.c)
 */

ULONG_PTR __fastcall sub_1405A2710(ULONG_PTR Argument, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentIrql; // r14
  __int16 v6; // r12
  __int64 v7; // r13
  bool v8; // r12
  signed __int32 v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // edi
  unsigned int v14; // edi
  __int64 v15; // r8
  _QWORD *v16; // rbp
  __int64 v17; // r11
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // r9
  unsigned int v23; // edi
  unsigned int v24; // ebp
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int16 *v28; // r8
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v31; // r8
  int v32; // eax
  bool v33; // zf
  __int16 v35; // [rsp+80h] [rbp-8h]
  __int64 v36; // [rsp+90h] [rbp+8h] BYREF
  int v37; // [rsp+98h] [rbp+10h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+18h]
  __int64 v39; // [rsp+A8h] [rbp+20h]

  v37 = 0;
  KeGetCurrentIrql();
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  v6 = v35;
  _disable();
  v7 = *(_QWORD *)(Argument + 24);
  v8 = (v6 & 0x200) != 0;
  v9 = _InterlockedDecrement((volatile signed __int32 *)Argument);
  v10 = ~v9 & 0x80000000;
  if ( (v9 & 0x7FFFFFFF) != 0 )
  {
    LODWORD(v36) = 0;
    while ( (*(_DWORD *)Argument & 0x80000000) != v10 )
      sub_1402F32E0(&v36, a2, a3, a4);
    while ( !*(_DWORD *)(Argument + 8) )
      sub_1402F32E0(&v37, a2, a3, a4);
    v13 = 0;
  }
  else
  {
    *(_DWORD *)Argument = v10 | *(_DWORD *)(Argument + 4);
    v11 = *(_QWORD *)(Argument + 16);
    v12 = *(_QWORD *)(*(_QWORD *)(Argument + 32) + 24LL);
    v39 = *(_QWORD *)(v7 + 24);
    v38 = v12;
    v13 = sub_140583D08(v11);
    if ( v13 >= 0 )
    {
      v14 = 0;
      if ( *(unsigned int *)(Argument + 48) / 0x18uLL )
      {
        v15 = 0LL;
        v16 = (_QWORD *)(Argument + 56);
        do
        {
          v17 = *(_QWORD *)(Argument + 40);
          v18 = *(int *)(v17 + 24 * v15);
          *(_QWORD *)(v17 + 24 * v15 + 16) = *(_QWORD *)(v12 + 8 * v18);
          *(_QWORD *)(v12 + 8 * v18) = *(_QWORD *)(v17 + 24 * v15 + 8);
          v19 = (_QWORD *)*v16;
          if ( (_QWORD *)*v16 != v16 )
          {
            do
            {
              v20 = 0LL;
              v21 = *((_DWORD *)v19 + 34) >> 3;
              if ( v21 )
              {
                v22 = v19[16];
                while ( *(_QWORD *)(v22 + 8 * v20) != *(_QWORD *)(v17 + 24 * v15 + 16) )
                {
                  v20 = (unsigned int)(v20 + 1);
                  if ( (unsigned int)v20 >= v21 )
                    goto LABEL_16;
                }
                *(_QWORD *)(v22 + 8 * v20) = *(_QWORD *)(v17 + 24 * v15 + 8);
              }
LABEL_16:
              v19 = (_QWORD *)*v19;
            }
            while ( v19 != v16 );
            v12 = v38;
          }
          v15 = ++v14;
        }
        while ( v14 < *(unsigned int *)(Argument + 48) / 0x18uLL );
        LOBYTE(CurrentIrql) = v36;
      }
      v23 = 0;
      v24 = (*(_DWORD *)(v7 + 40) >> 12) + ((*(_DWORD *)(v7 + 40) & 0xFFF) != 0);
      if ( v24 )
      {
        v25 = v39;
        v26 = 56LL;
        do
        {
          v27 = *(_QWORD *)(Argument + 32);
          v28 = *(unsigned __int16 **)(v26 + v27);
          if ( v28
            && (*(_BYTE *)(((((unsigned __int64)(v23 << 12) + v25) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
          {
            sub_1402DB248((v23 << 12) + v25, v27, (__int64)v28, v23 << 12, v27, v28, 0);
          }
          ++v23;
          v26 += 8LL;
        }
        while ( v23 < v24 );
      }
      v13 = 0;
    }
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 8));
  }
  if ( v8 )
    _enable();
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v29 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v31 = *((_QWORD *)CurrentPrcb + 4375);
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v33 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
        *(_DWORD *)(v31 + 20) &= v32;
        if ( v33 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v13;
}
