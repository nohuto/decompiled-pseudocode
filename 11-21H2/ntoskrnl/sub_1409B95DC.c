/*
 * XREFs of sub_1409B95DC @ 0x1409B95DC
 * Callers:
 *     sub_14072A810 @ 0x14072A810 (sub_14072A810.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 */

bool __fastcall sub_1409B95DC(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  _DWORD *v6; // r9
  int v7; // ebp
  unsigned __int8 *v8; // r8
  _DWORD *v9; // rcx
  unsigned int v10; // ebx
  _DWORD *v11; // rdx

  v4 = *a2;
  if ( *((_BYTE *)qword_140A37C48 + v4) != *((_BYTE *)qword_140A37C48 + *a1)
    || *((_BYTE *)qword_140A37F18 + v4) && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
  {
    return 0;
  }
  v5 = *((_DWORD *)a2 + 2) & 1;
  v6 = (_DWORD *)((unsigned __int64)(a2 + 12) & -(__int64)(v5 != 0));
  v7 = *((_DWORD *)a2 + 2) & 2;
  if ( v7 )
    v8 = &a2[16 * v5 + 12];
  else
    v8 = 0LL;
  v9 = a1 + 12;
  v10 = *((_DWORD *)a1 + 2) & 1;
  v11 = (_DWORD *)((unsigned __int64)(a1 + 12) & -(__int64)(v10 != 0));
  if ( (*((_DWORD *)a1 + 2) & 2) != 0 )
  {
    if ( v10 )
      v9 = a1 + 28;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v8 )
  {
    if ( !v9
      || *(_DWORD *)v8 != *v9
      || *((_DWORD *)v8 + 1) != v9[1]
      || *((_DWORD *)v8 + 2) != v9[2]
      || *((_DWORD *)v8 + 3) != v9[3] )
    {
      return 0;
    }
  }
  else if ( v9 )
  {
    return 0;
  }
  if ( v6 )
  {
    if ( !v11
      || *v6 != *v11
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 4) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 4)
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 8) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 8)
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 0xC) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 0xC) )
    {
      return 0;
    }
  }
  else if ( v11 )
  {
    return 0;
  }
  return RtlEqualSid(
           &a2[16 * v5 + 12 + (v7 != 0 ? 0x10 : 0)],
           &a1[16 * v10 + 12 + ((*((_DWORD *)a1 + 2) & 2) != 0 ? 0x10 : 0)]) != 0;
}
