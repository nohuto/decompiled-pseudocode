/*
 * XREFs of RtlpCopyAces @ 0x1800118FC
 * Callers:
 *     RtlpInheritAcl2 @ 0x180010ACC (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x180091A74 (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x180010EE0 (RtlFindAceByType.c)
 *     RtlpCopyEffectiveAce @ 0x180011D88 (RtlpCopyEffectiveAce.c)
 *     RtlMapGenericMask @ 0x180012190 (RtlMapGenericMask.c)
 *     RtlFirstFreeAce @ 0x180048120 (RtlFirstFreeAce.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        int a12,
        _DWORD *a13,
        __int64 a14)
{
  char v14; // bl
  _DWORD *v16; // r15
  unsigned __int8 v17; // al
  _BYTE *v18; // r14
  unsigned int v19; // edx
  unsigned int v20; // edi
  _BYTE *v21; // rsi
  char *v22; // r8
  __int64 v23; // r15
  __int64 v24; // r12
  int v25; // ecx
  int v26; // eax
  int v28; // ecx
  char *v29; // rax
  char v30; // dl
  char v31; // di
  char v32; // r9
  int v33; // edx
  _BYTE v35[11]; // [rsp+81h] [rbp-68h] BYREF
  unsigned int v36; // [rsp+8Ch] [rbp-5Dh]
  void *v37; // [rsp+90h] [rbp-59h] BYREF
  int v38; // [rsp+98h] [rbp-51h]
  __int64 v39; // [rsp+A0h] [rbp-49h]
  __int64 v40; // [rsp+A8h] [rbp-41h]
  __int64 v41; // [rsp+B0h] [rbp-39h]
  __int64 v42; // [rsp+B8h] [rbp-31h]
  __int64 v43; // [rsp+C0h] [rbp-29h]
  __int64 v44; // [rsp+C8h] [rbp-21h]
  __int64 v45; // [rsp+D0h] [rbp-19h]
  int v46; // [rsp+D8h] [rbp-11h]
  unsigned __int16 v47; // [rsp+DCh] [rbp-Dh]

  v14 = 0;
  v16 = a13;
  v43 = a6;
  v42 = a7;
  v41 = a8;
  v40 = a9;
  v17 = *(_BYTE *)a14 - 2;
  v38 = a3;
  v39 = a2;
  v44 = a1;
  v45 = (__int64)a13;
  if ( v17 > 2u )
    return 3221225560LL;
  if ( !(unsigned __int8)RtlFirstFreeAce(a14, &v37) )
    return 3221225597LL;
  v18 = (_BYTE *)(a1 + 8);
  v19 = 0;
  v20 = 0;
  v36 = 0;
  *(_DWORD *)&v35[3] = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_27;
  v21 = v37;
  while ( *v18 != 17 )
  {
    if ( a12 == 3 )
      goto LABEL_24;
LABEL_7:
    switch ( v38 )
    {
      case 0:
        v22 = v18 + 1;
        if ( (v18[1] & 0x10) == 0 )
          break;
        goto LABEL_11;
      case 1:
        v22 = v18 + 1;
        if ( (v18[1] & 0x10) != 0 )
          break;
LABEL_11:
        if ( !a5 )
        {
          v23 = *((unsigned __int16 *)v18 + 1);
          if ( v21 && v23 <= a14 + *(unsigned __int16 *)(a14 + 2) - (_QWORD)v21 )
          {
            if ( !v14 )
            {
              memmove(v21, v18, *((unsigned __int16 *)v18 + 1));
              if ( (*v21 <= 0xAu || (unsigned __int8)(*v21 - 13) <= 1u) && (v21[1] & 8) == 0 )
              {
                v24 = v39;
                RtlMapGenericMask(v21 + 4, v39);
                if ( *v21 <= 0xAu && (v25 = 1651, _bittest(&v25, (unsigned __int8)*v21)) )
                  v26 = *(_DWORD *)(v24 + 12);
                else
                  v26 = *(_DWORD *)(v24 + 12) | 0x1000000;
                *((_DWORD *)v21 + 1) &= v26;
              }
              v21[1] &= ~a4;
              ++*(_WORD *)(a14 + 4);
              goto LABEL_22;
            }
          }
          else
          {
            v14 = 1;
          }
LABEL_62:
          v21 = (_BYTE *)(a14 + *(unsigned __int16 *)(a14 + 2));
          goto LABEL_23;
        }
        v28 = 0;
        v35[0] = 0;
        LODWORD(v23) = 0;
        *(_DWORD *)&v35[7] = 0;
        v29 = v22;
        v37 = v21;
        if ( a10 && (v29 = v18 + 1, v30 = v18[1], (v30 & 3) != 0) )
        {
          v31 = 1;
        }
        else
        {
          v30 = *v29;
          v31 = 0;
        }
        if ( (v30 & 8) == 0 )
        {
          if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                                   v18,
                                   v42,
                                   v41,
                                   v40,
                                   v39,
                                   0LL,
                                   0,
                                   (__int64)&v37,
                                   (__int64)&v35[7],
                                   a14,
                                   0LL,
                                   (__int64)v35,
                                   (__int64)&v35[1]) )
            return 3221225597LL;
          v28 = *(_DWORD *)&v35[7];
          v22 = v18 + 1;
          LODWORD(v23) = *(_DWORD *)&v35[7];
          if ( !v35[1] )
          {
            v32 = a4;
            if ( !v14 && *(_DWORD *)&v35[7] )
            {
              v21[1] &= ~a4;
              v28 = *(_DWORD *)&v35[7];
            }
LABEL_38:
            if ( !v31 )
              goto LABEL_39;
            v46 = 0;
            v33 = *(_DWORD *)(v18 + 10);
            v47 = 768;
            if ( !v33 )
              v33 = *((unsigned __int16 *)v18 + 7) - v47;
            if ( v28 && !v35[0] )
            {
              if ( !v14 )
              {
                v21[1] = ~v32 & (v21[1] | *v22 & 0x1F);
                goto LABEL_22;
              }
            }
            else
            {
              if ( *v18 <= 8u && !*((_DWORD *)v18 + 1) && v33 )
              {
LABEL_39:
                if ( v14 )
                  goto LABEL_61;
LABEL_22:
                v20 = *(_DWORD *)&v35[3];
                v21 += (unsigned int)v23;
LABEL_23:
                v19 = v36;
                v20 += v23;
                *(_DWORD *)&v35[3] = v20;
                break;
              }
              LODWORD(v23) = *((unsigned __int16 *)v18 + 1) + (_DWORD)v23;
              if ( (unsigned int)v23 > 0xFFFF )
                return 3221225597LL;
              if ( *((unsigned __int16 *)v18 + 1) > a14 + *(unsigned __int16 *)(a14 + 2) - (_QWORD)v37 )
              {
                v14 = 1;
              }
              else if ( !v14 )
              {
                memmove(v37, v18, *((unsigned __int16 *)v18 + 1));
                *((_BYTE *)v37 + 1) |= 8u;
                *((_BYTE *)v37 + 1) &= ~a4;
                ++*(_WORD *)(a14 + 4);
                goto LABEL_39;
              }
            }
LABEL_61:
            v20 = *(_DWORD *)&v35[3];
            goto LABEL_62;
          }
          v14 = 1;
        }
        v32 = a4;
        goto LABEL_38;
      case 2:
        v22 = v18 + 1;
        goto LABEL_11;
    }
LABEL_24:
    ++v19;
    v18 += *((unsigned __int16 *)v18 + 1);
    v36 = v19;
    if ( v19 >= *(unsigned __int16 *)(v44 + 4) )
      goto LABEL_25;
  }
  if ( a12 != 3 )
    goto LABEL_24;
  if ( !RtlFindAceByType(a14, 17, 0LL) )
  {
    v19 = v36;
    goto LABEL_7;
  }
LABEL_25:
  if ( v20 > 0xFFFF )
    return 3221225597LL;
  v16 = (_DWORD *)v45;
LABEL_27:
  *v16 = v20;
  return v14 != 0 ? 0xC0000023 : 0;
}
