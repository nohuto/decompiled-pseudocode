/*
 * XREFs of ACPIGetProcessorStatus @ 0x1C0024DC4
 * Callers:
 *     ACPIGetWorkerForInteger @ 0x1C00249F0 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall ACPIGetProcessorStatus(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rcx
  int v7; // edi
  volatile signed __int32 *v8; // r14
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rcx
  char *v12; // r10
  unsigned __int64 v13; // r11
  unsigned __int64 i; // rax
  __int64 v15; // rcx
  char *v16; // r9
  char *v17; // rdx
  char v18; // al
  __int16 v19; // ax
  char v20; // al
  __int64 result; // rax
  __int64 *v22; // rax
  __int64 v23; // r8
  __int16 v24; // ax
  const char *v25; // rcx
  __int16 v26; // ax

  v3 = 0;
  v5 = *(__int64 **)(a1 + 760);
  dword_1C0081E10 = 0;
  v7 = 15;
  v8 = 0LL;
  if ( !v5 || !_bittest64((const signed __int64 *)(a1 + 8), 0x24u) )
    goto LABEL_51;
  v9 = *v5;
  if ( *(_WORD *)(*v5 + 66) == 12 )
  {
    if ( *(_QWORD *)(v9 + 96) )
    {
      v10 = *(unsigned __int8 *)(*(_QWORD *)(v9 + 96) + 8LL);
      goto LABEL_6;
    }
LABEL_51:
    v3 = -1073741808;
    goto LABEL_22;
  }
  v22 = AMLIGetNamedChild(v5, 1145656671);
  v8 = (volatile signed __int32 *)v22;
  if ( !v22 )
    goto LABEL_20;
  v23 = *v22;
  v24 = *(_WORD *)(*v22 + 66);
  if ( v24 == 1 )
  {
    v10 = *(_DWORD *)(v23 + 80);
  }
  else
  {
    if ( v24 != 8 )
      goto LABEL_20;
    if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x2Eu) || (v25 = *(const char **)(a1 + 616)) == 0LL )
    {
      v3 = -1073741808;
LABEL_30:
      AMLIDereferenceHandleEx(v8);
      goto LABEL_22;
    }
    v10 = _strtoui64(v25, 0LL, 16);
  }
LABEL_6:
  *(_DWORD *)(a1 + 196) = v10;
  v11 = *((_QWORD *)AcpiInformation + 4);
  if ( v11 )
  {
    v12 = (char *)(v11 + 44);
    v13 = v11 + *(unsigned int *)(v11 + 4);
    for ( i = v11 + 46; ; i = (unsigned __int64)(v16 + 2) )
    {
      if ( i > v13 )
        goto LABEL_20;
      v15 = (unsigned __int8)v12[1];
      if ( (unsigned __int8)v15 < 2u )
        goto LABEL_20;
      v16 = &v12[v15];
      if ( (unsigned __int64)&v12[v15] > v13 )
        goto LABEL_20;
      v17 = v12;
      v12 += v15;
      v18 = *v17;
      if ( *v17 )
      {
        if ( v18 == 11 )
        {
          if ( (unsigned __int8)v15 >= 0x28u )
          {
            v26 = *(_WORD *)(**(_QWORD **)(a1 + 760) + 66LL);
            if ( (v26 == 12 || v26 == 6 && _bittest64((const signed __int64 *)(a1 + 8), 0x24u))
              && *((_DWORD *)v17 + 2) == v10 )
            {
              v20 = v17[12];
              goto LABEL_19;
            }
          }
        }
        else if ( v18 == 9
               && (unsigned __int8)v15 >= 0x10u
               && *(_WORD *)(**(_QWORD **)(a1 + 760) + 66LL) == 6
               && _bittest64((const signed __int64 *)(a1 + 8), 0x24u)
               && *((_DWORD *)v17 + 3) == v10 )
        {
          if ( (v17[8] & 1) == 0 )
LABEL_20:
            v7 = 0;
          goto LABEL_21;
        }
      }
      else if ( (unsigned __int8)v15 >= 8u )
      {
        v19 = *(_WORD *)(**(_QWORD **)(a1 + 760) + 66LL);
        if ( (v19 == 12 || v19 == 6 && _bittest64((const signed __int64 *)(a1 + 8), 0x24u))
          && (unsigned __int8)v17[2] == v10 )
        {
          v20 = v17[4];
LABEL_19:
          v7 = (v20 & 1) != 0 ? 0xF : 0;
          goto LABEL_21;
        }
      }
    }
  }
  if ( dword_1C0081E10 )
  {
    if ( dword_1C0082B50 != v10 )
      goto LABEL_20;
  }
  else
  {
    dword_1C0082B50 = v10;
    dword_1C0081E10 = 1;
  }
LABEL_21:
  if ( v8 )
    goto LABEL_30;
LABEL_22:
  result = v3;
  *a3 = v7;
  return result;
}
