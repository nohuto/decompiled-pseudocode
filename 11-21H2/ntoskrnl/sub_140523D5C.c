/*
 * XREFs of sub_140523D5C @ 0x140523D5C
 * Callers:
 *     sub_14090A6D0 @ 0x14090A6D0 (sub_14090A6D0.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_140523D5C(__int64 a1, _DWORD *a2, ULONG *a3, unsigned int a4, char a5, char a6, _DWORD *a7)
{
  unsigned int v8; // ebx
  unsigned int v9; // r9d
  __int64 v11; // r10
  _DWORD *v12; // r8
  unsigned int v13; // r14d
  unsigned int v14; // edx
  ULONG_PTR v15; // rcx
  __int64 v16; // r13
  unsigned int v17; // r12d
  unsigned int v18; // esi
  ULONG_PTR v19; // rcx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r13
  int v23; // r15d
  _DWORD *v24; // rsi
  __int64 v25; // r12
  int v26; // eax
  int v27; // eax
  unsigned int v29; // [rsp+20h] [rbp-50h]
  _DWORD *v31; // [rsp+B8h] [rbp+48h]

  v31 = a2;
  v8 = 0;
  v9 = 0;
  v11 = a1;
  *a7 = 0;
  if ( a4 )
  {
    v12 = a2;
    while ( 1 )
    {
      v13 = dword_140C54A90;
      v14 = 0;
      if ( (_DWORD)dword_140C54A90 )
        break;
LABEL_7:
      ++v9;
      ++v12;
      if ( v9 >= a4 )
      {
        v16 = v11 - (_QWORD)a3;
        v17 = 0;
        while ( 1 )
        {
          v18 = 0;
          if ( v13 )
          {
            while ( 1 )
            {
              v19 = qword_140C4E210 + ((unsigned __int64)v18 << 6);
              if ( *(_BYTE *)(v19 + 12) )
              {
                if ( *(_BYTE *)(v19 + 13) && *(_DWORD *)v19 == *(ULONG *)((char *)a3 + v16) )
                  break;
              }
              if ( ++v18 >= v13 )
                goto LABEL_19;
            }
            *a3 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v19 + 16));
          }
LABEL_19:
          if ( v18 == v13 )
            break;
          ++v17;
          ++a3;
          if ( v17 >= a4 )
          {
            a2 = v31;
            v11 = a1;
            goto LABEL_22;
          }
        }
        v29 = 187;
        v20 = 21;
        goto LABEL_16;
      }
    }
    while ( 1 )
    {
      v15 = qword_140C4E210 + ((unsigned __int64)v14 << 6);
      if ( *(_BYTE *)(v15 + 13) )
      {
        if ( *(_DWORD *)v15 == *v12 )
          break;
      }
      if ( ++v14 >= (unsigned int)dword_140C54A90 )
        goto LABEL_7;
    }
    v29 = 151;
    v20 = 24;
LABEL_16:
    v21 = 0LL;
LABEL_17:
    sub_14051E038(v21, v20, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", v29);
    return (unsigned int)-1073741811;
  }
LABEL_22:
  v22 = *(_QWORD *)(qword_140C54A88 + 16);
  if ( !a4 || !*(_QWORD *)(qword_140C54A88 + 144) || byte_140D011A0 || a5 )
  {
LABEL_30:
    if ( a6 && a4 )
    {
      if ( a5 || !byte_140D011A0 )
      {
        *a7 = *(_DWORD *)(qword_140C54A88 + 296);
        return v8;
      }
      v29 = 476;
      v20 = 28;
      v21 = qword_140C54A88;
      goto LABEL_17;
    }
  }
  else
  {
    v23 = 0;
    v24 = a2;
    v25 = v11 - (_QWORD)a2;
    while ( 1 )
    {
      v26 = sub_14042A5E0(v22, (char *)v24 + v25);
      v8 = v26;
      if ( v26 < 0 )
        break;
      v27 = sub_14042A5E0(v22, v24);
      v8 = v27;
      if ( v27 < 0 )
      {
        sub_14051E038(qword_140C54A88, 9, v27, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0xF9u);
        return v8;
      }
      ++v24;
      if ( ++v23 >= a4 )
        goto LABEL_30;
    }
    sub_14051E038(qword_140C54A88, 9, v26, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0xECu);
  }
  return v8;
}
