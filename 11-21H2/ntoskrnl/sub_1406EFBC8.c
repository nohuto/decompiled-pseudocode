/*
 * XREFs of sub_1406EFBC8 @ 0x1406EFBC8
 * Callers:
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 * Callees:
 *     RtlGetMultiTimePrecise @ 0x1402622C0 (RtlGetMultiTimePrecise.c)
 *     sub_1402E1D0C @ 0x1402E1D0C (sub_1402E1D0C.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406EFBC8(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // si
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 result; // rax
  _OWORD *v9; // rdx
  int v10; // r8d
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF

  switch ( *(_DWORD *)(a1 + 200) )
  {
    case 2:
      v3 = 0LL;
      break;
    case 3:
      v3 = 3LL;
      break;
    case 4:
      v14 = 0LL;
      if ( (int)sub_14042A5E0(&v14, a2) < 0 )
      {
        *(_DWORD *)(a1 + 200) = 1;
        goto LABEL_5;
      }
      v3 = 2LL;
      break;
    default:
      *(_DWORD *)(a1 + 200) = 1;
LABEL_5:
      v3 = 1LL;
      break;
  }
  *(_QWORD *)(a1 + 24) = v3;
  if ( (*(_DWORD *)(a1 + 816) & 2) == 0 )
  {
    if ( *(_DWORD *)(a1 + 200) == 3 )
    {
      *(LARGE_INTEGER *)(a1 + 312) = sub_1402E1D0C(a1, a2);
      result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
    }
    else
    {
      LODWORD(v14) = 0;
      v13 = 0LL;
      v12 = 0LL;
      RtlGetMultiTimePrecise((LARGE_INTEGER *)&v12, 7, (int *)&v14);
      v5 = v14;
      v6 = v12;
      if ( (v14 & 5) != 5 )
      {
        *(LARGE_INTEGER *)(a1 + 312) = sub_1402E1D0C(a1, v4);
        KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
        *(_DWORD *)(a1 + 816) &= ~0x8000000u;
        result = *(unsigned int *)(a1 + 200);
        goto LABEL_31;
      }
      v7 = v13;
      result = *(unsigned int *)(a1 + 200);
      *(_QWORD *)(a1 + 304) = v13;
      if ( (_DWORD)result == 2 )
      {
        *(_QWORD *)(a1 + 312) = v7;
LABEL_12:
        v9 = (_OWORD *)(a1 + 304);
        if ( (v5 & 3) == 3 )
        {
          result = *((_QWORD *)&v12 + 1) - v6;
          *(_QWORD *)(a1 + 1280) = *((_QWORD *)&v12 + 1) - v6;
        }
        goto LABEL_14;
      }
      if ( (_DWORD)result == 1 )
      {
        *(_QWORD *)(a1 + 312) = v6;
        goto LABEL_12;
      }
      if ( (_DWORD)result != 4 )
      {
LABEL_31:
        v9 = (_OWORD *)(a1 + 304);
        if ( (_DWORD)result == 4 )
          goto LABEL_14;
        goto LABEL_12;
      }
      result = *((_QWORD *)&v12 + 1);
      *(_QWORD *)(a1 + 312) = *((_QWORD *)&v12 + 1);
    }
    v9 = (_OWORD *)(a1 + 304);
    goto LABEL_14;
  }
  v9 = (_OWORD *)(a1 + 304);
  v10 = *(_DWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 304) = qword_140C15F68;
  result = qword_140C15FE8;
  *(_QWORD *)(a1 + 1280) = qword_140C15FE8;
  if ( v10 == 3 )
  {
    result = qword_140C15FD8;
    *(_QWORD *)(a1 + 312) = qword_140C15FD8;
  }
  else
  {
    v11 = qword_140C15FE0;
    if ( v10 == 2 )
      v11 = qword_140C15F68;
    *(_QWORD *)(a1 + 312) = v11;
  }
LABEL_14:
  *(_OWORD *)(a1 + 432) = *v9;
  return result;
}
