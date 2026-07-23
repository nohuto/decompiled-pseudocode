/*
 * XREFs of sub_1403AD4F0 @ 0x1403AD4F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A8670 @ 0x1402A8670 (sub_1402A8670.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140398D58 @ 0x140398D58 (sub_140398D58.c)
 *     sub_1403A493C @ 0x1403A493C (sub_1403A493C.c)
 *     sub_1403AD6AC @ 0x1403AD6AC (sub_1403AD6AC.c)
 */

char __fastcall sub_1403AD4F0(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // esi
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  signed __int32 v14; // eax
  unsigned int v15; // esi
  signed __int32 v16; // eax
  unsigned int v17; // edi
  int v19; // eax
  __int64 v20; // r9
  _QWORD *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rax
  _DWORD v24[4]; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+78h] [rbp+10h] BYREF
  int v26; // [rsp+88h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v25 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      sub_1402F32E0(&v25, a2, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = sub_1402A8670((__int64)CurrentPrcb, 1);
  if ( *((_BYTE *)CurrentPrcb + 33) )
  {
    **(_QWORD **)(a2 + 16) = MEMORY[0xFFFFF78000000014];
    v19 = *(_DWORD *)(a2 + 4);
    v20 = **(_QWORD **)(a2 + 8);
    v21 = *(_QWORD **)(a2 + 16);
    *(_QWORD *)(a2 + 24) = v20;
    v22 = v20 - *v21;
    *(_QWORD *)(a2 + 24) = v22;
    if ( (v19 & 1) != 0 )
    {
      if ( sub_140398D58(v22, (v19 & 2) != 0) )
      {
        v23 = -*(_QWORD *)(a2 + 24);
        *(_BYTE *)a2 = 1;
        *(_QWORD *)(a2 + 24) = v23;
      }
    }
    else
    {
      sub_1403A493C(v22, 0LL, v19);
    }
  }
  v14 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v15 = ~v14 & 0x80000000;
  if ( (v14 & 0x7FFFFFFF) != 0 )
  {
    v26 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v15 )
      sub_1402F32E0(&v26, v10, v11, v12);
  }
  else
  {
    *(_DWORD *)a4 = v15 | *(_DWORD *)(a4 + 4);
  }
  if ( *(_QWORD *)(a2 + 24) )
  {
    if ( v13 )
      sub_1403AD6AC(CurrentPrcb, v13, a2);
    v16 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v17 = ~v16 & 0x80000000;
    if ( (v16 & 0x7FFFFFFF) != 0 )
    {
      v24[0] = 0;
      while ( (*(_DWORD *)a4 & 0x80000000) != v17 )
        sub_1402F32E0(v24, v10, v11, v12);
    }
    else
    {
      *(_DWORD *)a4 = v17 | *(_DWORD *)(a4 + 4);
    }
  }
  _InterlockedDecrement(a3);
  return sub_1402B0820((__int64)CurrentPrcb, 0, 1, 0, 2u);
}
