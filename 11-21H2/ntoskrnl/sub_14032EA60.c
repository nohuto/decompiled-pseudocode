/*
 * XREFs of sub_14032EA60 @ 0x14032EA60
 * Callers:
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 * Callees:
 *     sub_1402011DC @ 0x1402011DC (sub_1402011DC.c)
 *     sub_1402019FC @ 0x1402019FC (sub_1402019FC.c)
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140240C38 @ 0x140240C38 (sub_140240C38.c)
 *     sub_1402433D0 @ 0x1402433D0 (sub_1402433D0.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x14024D7F4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_14028EDD0 @ 0x14028EDD0 (sub_14028EDD0.c)
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14030EBD0 @ 0x14030EBD0 (sub_14030EBD0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14032E130 @ 0x14032E130 (sub_14032E130.c)
 *     sub_14032E680 @ 0x14032E680 (sub_14032E680.c)
 *     sub_14032E970 @ 0x14032E970 (sub_14032E970.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406FEC50 @ 0x1406FEC50 (sub_1406FEC50.c)
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 */

__int64 __fastcall sub_14032EA60(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        int *a7,
        _DWORD *a8)
{
  ULONG_PTR v11; // r12
  unsigned int v12; // edx
  unsigned int v13; // edi
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r13d
  __int64 v19; // rbx
  unsigned __int8 v20; // cl
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rsi
  int v23; // eax
  __int64 *v24; // rdi
  ULONG_PTR v25; // rdi
  int v26; // r8d
  int v27; // eax
  ULONG_PTR v28; // r9
  int v29; // eax
  __int64 result; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // r9
  CMSPAddress *v35; // r14
  __int64 v36; // rdi
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v49; // [rsp+40h] [rbp-C0h]
  __int64 v50; // [rsp+48h] [rbp-B8h]
  __int16 v52; // [rsp+58h] [rbp-A8h] BYREF
  int v53; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  int v59; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v61; // [rsp+98h] [rbp-68h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  _DWORD *v64; // [rsp+B0h] [rbp-50h]
  int v65; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v66; // [rsp+C4h] [rbp-3Ch]
  __int16 v67; // [rsp+C6h] [rbp-3Ah]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  _BYTE v71[152]; // [rsp+E0h] [rbp-20h] BYREF

  v64 = a8;
  BugCheckParameter2 = a1;
  v67 = 0;
  v61 = 0LL;
  v52 = 0;
  v53 = 0;
  memset(v71, 0, sizeof(v71));
  v68 = 20LL;
  v65 = 1;
  v66 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v56 = 0LL;
  v63 = *((_QWORD *)KeGetCurrentThread() + 23);
  v50 = v63 + 1664;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = *(_DWORD *)(a1 + 48);
  v13 = 3;
  v14 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v57 = 1LL;
  if ( (v12 & 0xA00000) == 0xA00000 )
  {
    v15 = (v12 >> 19) & 3;
    v16 = qword_1400161D0[v15];
    v13 = dword_140037160[v15];
    v17 = 16LL;
    v55 = v16;
    if ( v16 != 16 )
      v17 = 1LL;
    v57 = v17;
  }
  else
  {
    v55 = 1LL;
  }
  v18 = 0;
  v62 = (v12 >> 12) & 0x7F;
  v49 = sub_1402CF4F0(v63 + 1664);
  if ( sub_14028EDD0(a2, a3, BugCheckParameter2, v49, 0, (__int64)&v56, 0LL) != ((__int64)(v14 - v11) >> 3) + 1 )
  {
    sub_1402B0CE0(v50, v49);
    return 3221225517LL;
  }
  v19 = v56;
  if ( v56 )
  {
    sub_1402B0CE0(v50, v49);
    result = sub_1407BE280(v63, v19);
    if ( (int)result < 0 )
      return result;
    v20 = sub_1402CF4F0(v50);
    v49 = v20;
  }
  else
  {
    v20 = v49;
  }
  v21 = v11;
  if ( v13 <= 1 )
  {
    v44 = 2 - v13;
    do
    {
      v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v44;
    }
    while ( v44 );
    v20 = v49;
  }
  v22 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v58 = v22;
  while ( 1 )
  {
    sub_14032CE60(v21, 0LL, v62, v20, 0);
    if ( !sub_140317A10(v21) )
      break;
    v23 = sub_140319160(BugCheckParameter2, v21, &v61, &v53, &v52);
    v24 = v61;
    if ( !v61 )
    {
      v18 = 1;
      v25 = BugCheckParameter2;
      v26 = dword_140016150[v23];
      v27 = v53;
      goto LABEL_13;
    }
    sub_14020D8D0(v50, v22);
    sub_1402B0CE0(v50, v49);
    sub_1402019FC((ULONG_PTR)v24);
    sub_1402CF4F0(v50);
    v20 = v49;
  }
  v25 = BugCheckParameter2;
  v27 = sub_14030EBD0(BugCheckParameter2);
  v53 = v27;
LABEL_13:
  *a7 = v27 | v26;
  if ( v21 <= v14 )
  {
    while ( 1 )
    {
      if ( (v21 & 0xFFF) == 0 || v18 )
      {
        v18 = 0;
        if ( v22 )
        {
          sub_14032F1B0(&v65);
          v39 = v22;
          v40 = v50;
          sub_14020D8D0(v50, v39);
        }
        else
        {
          v40 = v50;
        }
        if ( (unsigned int)sub_1403531F0(v40) || KeShouldYieldProcessor() )
        {
          sub_1402B0CE0(v40, v49);
          sub_1402CF4F0(v40);
        }
        v58 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        sub_14032CE60(v21, (__int64)&v65, v62, v49, 0);
      }
      v28 = *(_QWORD *)v21;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL
        && v21 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v28 & 1) != 0
        && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        v45 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v45 )
        {
          v46 = *(_QWORD *)(v45 + 8 * ((v21 >> 3) & 0x1FF));
          v47 = v28 | 0x20;
          if ( (v46 & 0x20) == 0 )
            v47 = *(_QWORD *)v21;
          v28 = v47;
          if ( (v46 & 0x42) != 0 )
            v28 = v47 | 0x42;
        }
      }
      v60 = v28;
      if ( (v28 & 1) != 0 )
      {
        v32 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v60) >> 12) & 0xFFFFFFFFFFLL;
        v35 = (CMSPAddress *)BugCheckParameter2;
        v36 = 48 * v32 - 0x220000000000LL;
        if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x70) == 0x40 && sub_1402433D0(v21) )
          goto LABEL_37;
        if ( *(__int64 *)(v36 + 40) < 0 )
        {
          sub_14032F1B0(&v65);
          v43 = sub_1402011DC(v50, v49, v21);
          if ( v43 )
          {
            if ( v43 == 1 )
            {
              --v56;
            }
            else
            {
              v58 = 0LL;
              v18 = 1;
              sub_1402CF4F0(v50);
            }
          }
          goto LABEL_23;
        }
        if ( (a5 & 0x101) != 0 )
        {
          if ( !(unsigned int)CMSPAddress::get_DynamicTerminalClasses(
                                v35,
                                v21,
                                v14,
                                (__int64)&v65,
                                BugCheckParameter4,
                                v64) )
            goto LABEL_23;
        }
        else
        {
          v59 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v59, v31, v33, v34);
            while ( *(__int64 *)(v36 + 24) < 0 );
          }
          a4 = sub_14032E680((__int64)v35, (*(_QWORD *)(v36 + 16) >> 5) & 0x1F, a4);
          v38 = 32LL * (a4 & 0x1F);
          if ( v37 )
            *(_QWORD *)(v36 + 16) = v38 | v37 & 0xFFFFFFFFFFFFFC1FuLL;
          else
            *(_QWORD *)(v36 + 16) = sub_1402CCC50(v38);
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_37:
          sub_14032E130((__int64)v35, v21, a4, v32, (__int64)&v65);
        }
        v11 += 8 * v55;
        v21 += 8 * v57;
        goto LABEL_23;
      }
      if ( (v28 & 0x400) != 0 )
      {
        sub_14032F1B0(&v65);
        if ( (int)sub_140240C38(v21, 1LL, v49) < 0 )
        {
          v11 += 8LL;
          v21 += 8LL;
        }
        v18 = 1;
        goto LABEL_23;
      }
      if ( (v28 & 0x800) == 0 )
        break;
      v29 = sub_14032E970(v25, v21, a4, 1);
      if ( v55 != 1 )
      {
        v11 += 8 * v55;
        v21 += 8 * v57;
        goto LABEL_23;
      }
      if ( !v29 )
        goto LABEL_22;
LABEL_23:
      v22 = v58;
      v25 = BugCheckParameter2;
      if ( v21 > v14 )
        goto LABEL_24;
    }
    if ( v55 != 1 )
      KeBugCheckEx(0x1Au, 0x44000uLL, v11, v28, 0LL);
    if ( v28 )
    {
      a4 = sub_14032E680(v25, (v28 >> 5) & 0x1F, a4);
      v60 = v41 ^ ((unsigned __int16)v41 ^ (unsigned __int16)(32 * a4)) & 0x3E0;
    }
    else
    {
      v42 = sub_1402D03D0((__int64)(v11 << 25) >> 16);
      sub_14028FB74(v42, 1u);
      a4 = sub_14032E680(v25, (*(_DWORD *)(v25 + 48) >> 7) & 0x1F, a4);
      v60 = sub_1402CCC50(32LL * (a4 & 0x1F));
    }
    *(_QWORD *)v11 = v60;
LABEL_22:
    v11 += 8LL;
    v21 += 8LL;
    goto LABEL_23;
  }
LABEL_24:
  sub_14032F1B0(&v65);
  if ( v22 )
    sub_14020D8D0(v50, v22);
  sub_1402B0CE0(v50, v49);
  if ( v56 )
    sub_1406FEC50(v63, v56);
  return 0LL;
}
