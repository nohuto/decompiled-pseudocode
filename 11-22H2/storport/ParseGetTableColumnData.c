/*
 * XREFs of ParseGetTableColumnData @ 0x1C007C270
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     WPP_SF_DDD @ 0x1C003E8E0 (WPP_SF_DDD.c)
 *     TcglibEalLogError @ 0x1C005587C (TcglibEalLogError.c)
 *     FindNamedToken @ 0x1C007BF28 (FindNamedToken.c)
 *     GetTokenData @ 0x1C007F440 (GetTokenData.c)
 */

__int64 __fastcall ParseGetTableColumnData(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rax
  int v8; // r9d
  char v9; // r8
  __int64 *v10; // r12
  _DWORD *v11; // rsi
  char v12; // cl
  unsigned int v13; // r13d
  int v14; // r9d
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 *v17; // r15
  int NamedToken; // eax
  unsigned int v19; // eax
  const void *TokenData; // rax
  size_t v21; // r8
  void *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r15
  unsigned int v25; // eax
  __int64 v26; // rdx
  const void *v27; // rax
  size_t v28; // r8
  int v29; // ecx
  __int64 v31; // [rsp+20h] [rbp-68h]
  __int64 v32; // [rsp+28h] [rbp-60h]
  int v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+38h] [rbp-50h]
  __int64 *v35; // [rsp+40h] [rbp-48h] BYREF
  __int64 v36; // [rsp+48h] [rbp-40h]
  char v38; // [rsp+A0h] [rbp+18h]

  v6 = 0;
  if ( *(_QWORD *)(a3 + 8) != 0x100000005LL )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xBu,
        (__int64)&WPP_34662084ba6c3478538713a1c2df56b8_Traceguids,
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a3 + 12));
    v9 = 1;
    goto LABEL_50;
  }
  v7 = *(_QWORD *)(a3 + 16);
  v34 = v7;
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 != 5 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_34662084ba6c3478538713a1c2df56b8_Traceguids,
        v8,
        *(_DWORD *)(v7 + 12));
    v9 = 2;
LABEL_50:
    v6 = -1073741435;
    TcglibEalLogError(*a1, "ErrInvalidColData", v9, *(_DWORD *)a4, *(unsigned int *)(a4 + 4), 0LL);
    return (unsigned int)v6;
  }
  v10 = *(__int64 **)(v7 + 16);
  v11 = (_DWORD *)(a4 + 16);
  v33 = 0;
  v12 = 0;
  v38 = 0;
  v13 = 0;
  while ( v10 )
  {
    v11 = (_DWORD *)(a4 + 16);
    if ( v13 >= *(_DWORD *)(a4 + 16) )
      break;
    v14 = *((_DWORD *)v10 + 2);
    v15 = *(_QWORD *)(a4 + 8) + 32LL * v13;
    v16 = v13;
    v35 = 0LL;
    v36 = v13;
    if ( __PAIR64__(*((_DWORD *)v10 + 3), v14) != 0x200000006LL )
      goto LABEL_39;
    v17 = (__int64 *)v10[2];
    if ( !v17 )
    {
      v16 = v36;
LABEL_39:
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        LODWORD(v31) = *((_DWORD *)v10 + 3);
        WPP_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xDu,
          (__int64)&WPP_34662084ba6c3478538713a1c2df56b8_Traceguids,
          v14,
          v31);
      }
      v6 = -1073741435;
      TcglibEalLogError(*a1, "ErrInvalidColData", 3, *(_DWORD *)a4, *(unsigned int *)(a4 + 4), v16);
      break;
    }
    if ( *(_DWORD *)(v15 + 12) )
    {
      v38 = 1;
      NamedToken = FindNamedToken(v15, v7, &v35);
      v17 = v35;
      v6 = NamedToken;
      goto LABEL_24;
    }
    if ( v12 )
    {
      v6 = -1073741811;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xFu,
          (__int64)&WPP_34662084ba6c3478538713a1c2df56b8_Traceguids);
        break;
      }
LABEL_32:
      ++v13;
      if ( v6 < 0 )
        break;
      v12 = v38;
    }
    else
    {
      v19 = *(_DWORD *)(v15 + 8);
      if ( v19 < *((_DWORD *)v17 + 3) )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          LODWORD(v32) = *((_DWORD *)v17 + 3);
          LODWORD(v31) = *(_DWORD *)(v15 + 8);
          WPP_SF_DDD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xEu,
            (__int64)&WPP_34662084ba6c3478538713a1c2df56b8_Traceguids,
            v13,
            v31,
            v32);
        }
        TcglibEalLogError(*a1, "ErrInvalidColData", 4, *(_DWORD *)a4, *(unsigned int *)(a4 + 4), v13);
        v6 = -1073741789;
        v17 = 0LL;
      }
      else
      {
        if ( v19 > 8 )
        {
          memset_0(*(void **)v15, 0, *(unsigned int *)(v15 + 8));
          TokenData = (const void *)GetTokenData(v17, v23, *((unsigned int *)v17 + 3));
          v22 = *(void **)v15;
        }
        else
        {
          *(_QWORD *)v15 = 0LL;
          TokenData = (const void *)GetTokenData(v17, 0LL, *((unsigned int *)v17 + 3));
          v22 = (void *)v15;
        }
        memmove(v22, TokenData, v21);
        *(_DWORD *)(v15 + 8) = *((_DWORD *)v17 + 3);
        *(_DWORD *)(v15 + 12) = *((_DWORD *)v17 + 2);
        v10 = (__int64 *)*v10;
      }
LABEL_24:
      if ( v6 < 0 || !v17 )
      {
        v7 = v34;
        goto LABEL_32;
      }
      v24 = *v17;
      v25 = *(_DWORD *)(v15 + 24);
      if ( v25 < *(_DWORD *)(v24 + 12) )
      {
        v6 = -1073741789;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          LODWORD(v32) = *(_DWORD *)(v24 + 12);
          LODWORD(v31) = *(_DWORD *)(v15 + 24);
          WPP_SF_DDD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x10u,
            (__int64)&WPP_34662084ba6c3478538713a1c2df56b8_Traceguids,
            v13,
            v31,
            v32);
        }
        TcglibEalLogError(*a1, "ErrInvalidColData", 5, *(_DWORD *)a4, *(unsigned int *)(a4 + 4), v13);
        break;
      }
      memset_0(*(void **)(v15 + 16), 0, v25);
      v27 = (const void *)GetTokenData(v24, v26, *(unsigned int *)(v24 + 12));
      memmove(*(void **)(v15 + 16), v27, v28);
      ++v33;
      v12 = v38;
      ++v13;
      *(_DWORD *)(v15 + 24) = *(_DWORD *)(v24 + 12);
      *(_DWORD *)(v15 + 28) = *(_DWORD *)(v24 + 8);
      v7 = v34;
    }
  }
  v29 = v33;
  if ( v6 < 0 )
    v29 = 0;
  *v11 = v29;
  return (unsigned int)v6;
}
