/*
 * XREFs of sub_1407483B4 @ 0x1407483B4
 * Callers:
 *     sub_140747FB4 @ 0x140747FB4 (sub_140747FB4.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 *     sub_140959DF4 @ 0x140959DF4 (sub_140959DF4.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140748758 @ 0x140748758 (sub_140748758.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_14081FECC @ 0x14081FECC (sub_14081FECC.c)
 *     sub_140820DCC @ 0x140820DCC (sub_140820DCC.c)
 *     sub_14083C0F4 @ 0x14083C0F4 (sub_14083C0F4.c)
 *     sub_140858F98 @ 0x140858F98 (sub_140858F98.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407483B4(unsigned __int64 a1, unsigned __int64 a2, int *a3)
{
  int v3; // edi
  unsigned __int64 v6; // rbx
  int v7; // eax
  _QWORD *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  void *v14; // rcx
  int v15; // ebp
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ecx
  unsigned int v20; // eax
  void *v21; // rcx
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h]
  __int64 v24; // [rsp+70h] [rbp+18h]

  v3 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0LL;
  *a3 = 0;
  if ( a1 < a2 )
  {
    v6 = a1 + 24;
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 - 16);
      v8 = (_QWORD *)(v6 + 8);
      *(_QWORD *)(v6 + 8) = 0LL;
      if ( (v7 & 0x20) == 0 )
        break;
LABEL_13:
      v6 += 64LL;
      if ( v6 - 24 >= a2 )
      {
        v3 = *a3;
        return v3 == 0 ? 0xC0000001 : 0;
      }
    }
    *(_QWORD *)(v6 + 16) = 0LL;
    v9 = *(_QWORD *)(v6 - 24);
    *(_QWORD *)(v6 + 24) = 0LL;
    if ( v9 )
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
    else
      v10 = 0LL;
    ExAcquireFastMutex(&stru_140C461A0);
    if ( (*(_DWORD *)(v10 + 396) & 0x400) != 0 )
    {
      v21 = *(void **)(v10 + 440);
      if ( v21 )
      {
        ExFreePoolWithTag(v21, 0);
        *(_QWORD *)(v10 + 440) = 0LL;
        sub_14076FBEC(v10, 512LL);
        *(_DWORD *)(v6 - 16) |= 0x400u;
      }
    }
    KeReleaseGuardedMutex(&stru_140C461A0);
    if ( !*(_QWORD *)v6 )
    {
      v11 = *(_QWORD *)(v10 + 440);
      if ( !v11 || (*(_DWORD *)(v10 + 396) & 0x200) != 0 )
      {
        v12 = sub_140748758(*(_QWORD *)(v6 - 24), 1LL, v6, &v22);
        if ( v12 < 0 || !*(_QWORD *)v6 )
        {
          *(_DWORD *)(v6 + 32) = v12;
LABEL_12:
          *(_DWORD *)(v6 - 16) |= 0x20u;
          goto LABEL_13;
        }
        ExAcquireFastMutex(&stru_140C461A0);
        v14 = *(void **)(v10 + 440);
        if ( v14 )
        {
          ExFreePoolWithTag(v14, 0);
          sub_14076FBEC(v10, 512LL);
        }
        *(_QWORD *)(v10 + 440) = *(_QWORD *)v6;
        KeReleaseGuardedMutex(&stru_140C461A0);
      }
      else
      {
        *(_QWORD *)v6 = v11;
        *(_DWORD *)(v6 - 12) = 4;
      }
    }
    if ( (*(_DWORD *)(v6 - 16) & 0x200) != 0 )
    {
      if ( (int)sub_14083C0F4(*(void **)v6) >= 0 && v24 )
        *(_QWORD *)v6 = v24;
      else
        *(_DWORD *)(v6 - 16) &= ~0x200u;
    }
    v15 = sub_140820DCC(v6 - 24, v6 + 8);
    if ( v15 >= 0 )
    {
      v16 = *v8;
      if ( *v8 )
      {
        sub_140858F98(*v8);
        if ( *(_QWORD *)(v16 + 24) )
        {
          v19 = *(_DWORD *)(v16 + 32);
          v20 = 0;
          *(_DWORD *)(v6 + 32) = v15;
          if ( v19 >= 3 )
            v20 = v19;
          ++*a3;
          *(_DWORD *)(v6 - 8) = v20;
          goto LABEL_13;
        }
        sub_14081FECC(v6 - 24, v6 + 40, v17, v18);
        v15 = -1073741438;
      }
    }
    *(_DWORD *)(v6 + 32) = v15;
    goto LABEL_12;
  }
  return v3 == 0 ? 0xC0000001 : 0;
}
