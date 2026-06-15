/*
 * XREFs of ?NDQueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140018B30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400190E8 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemEffectWrapper::NDQueryInterface(
        CSystemEffectWrapper *this,
        const struct _GUID *a2,
        void **a3)
{
  CSystemEffectWrapper *v3; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  void **v8; // r8
  const struct _GUID *v9; // r9
  char *v10; // rax
  const struct _GUID *v11; // r9
  __int64 result; // rax
  char *v13; // rcx
  char *v14; // rax
  const struct _GUID *v15; // r9
  char *v16; // rax
  char *v17; // rax
  const struct _GUID *v18; // r9
  char *v19; // rax
  char *v20; // rax
  const struct _GUID *v21; // r9
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  const struct _GUID *v25; // r9
  char *v26; // rax
  char *v27; // rax
  const struct _GUID *v28; // r9
  char *v29; // rax
  char *v30; // rax
  const struct _GUID *v31; // r9
  char *v32; // rax
  char *v33; // rax
  const struct _GUID *v34; // r9
  char *v35; // rax
  char *v36; // rax
  const struct _GUID *v37; // r9
  char *v38; // rax
  char *v39; // rax
  const struct _GUID *v40; // r9
  char *v41; // rax
  char *v42; // rax
  _QWORD *v43; // r8
  const struct _GUID *v44; // r9
  char *v45; // rax
  char *v46; // rax
  const struct _GUID *v47; // r9
  const struct _GUID *v48; // r9
  void **v49; // r8
  const struct _GUID *v50; // r9

  v3 = (CSystemEffectWrapper *)((char *)this - 128);
  *a3 = 0LL;
  v6 = 0;
  if ( (unsigned int)IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = (char *)this - 120;
LABEL_115:
    if ( !v3 )
      v10 = 0LL;
    *v8 = v10;
LABEL_118:
    (*(void (__fastcall **)(CSystemEffectWrapper *, __int64, void **))(*(_QWORD *)v3 + 8LL))(v3, v7, v8);
    return 0LL;
  }
  if ( (unsigned int)IsEqualGUID(v9, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10) )
  {
    v8 = (void **)((char *)this + 56);
    if ( *((_QWORD *)this + 7) )
    {
      v14 = (char *)this - 120;
      if ( !v3 )
        v14 = 0LL;
      *a3 = v14;
      goto LABEL_118;
    }
    result = CSystemEffectWrapper::QIInternal(v3, v11, v8);
    v6 = result;
    if ( (int)result >= 0 )
    {
      v13 = (char *)this - 120;
      if ( !v3 )
        v13 = 0LL;
      *a3 = v13;
      return result;
    }
    return v6;
  }
  if ( (unsigned int)IsEqualGUID(v11, &GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8) )
  {
    v8 = (void **)((char *)this + 72);
    if ( *((_QWORD *)this + 9) )
    {
      v17 = (char *)this - 104;
      if ( !v3 )
        v17 = 0LL;
      *a3 = v17;
      goto LABEL_118;
    }
    v6 = CSystemEffectWrapper::QIInternal(v3, v15, v8);
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    v16 = (char *)this - 104;
    if ( !v3 )
      v16 = 0LL;
    *a3 = v16;
    return v6;
  }
  if ( (unsigned int)IsEqualGUID(v15, &GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c) )
  {
    v8 = (void **)((char *)this + 64);
    if ( *((_QWORD *)this + 8) )
    {
      v20 = (char *)this - 96;
      if ( !v3 )
        v20 = 0LL;
      *a3 = v20;
      goto LABEL_118;
    }
    v6 = CSystemEffectWrapper::QIInternal(v3, v18, v8);
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    v19 = (char *)this - 96;
    if ( !v3 )
      v19 = 0LL;
    *a3 = v19;
    return v6;
  }
  if ( (unsigned int)IsEqualGUID(v18, &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b) )
  {
    v8 = (void **)((char *)this + 80);
    if ( !*((_QWORD *)this + 10) )
      goto LABEL_32;
LABEL_43:
    v24 = (char *)this - 88;
    if ( !v3 )
      v24 = 0LL;
    *a3 = v24;
    goto LABEL_118;
  }
  if ( (unsigned int)IsEqualGUID(v21, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56) )
  {
    v8 = (void **)((char *)this + 88);
    if ( *((_QWORD *)this + 11) )
    {
      v23 = (char *)this - 88;
      if ( !v3 )
        v23 = 0LL;
      *a3 = v23;
      goto LABEL_118;
    }
    goto LABEL_32;
  }
  if ( !(unsigned int)IsEqualGUID(v21, &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17) )
  {
    if ( (unsigned int)IsEqualGUID(v21, &GUID_f851809c_c177_49a0_b1b2_b66f017943ab) )
    {
      v8 = (void **)((char *)this + 120);
      if ( *((_QWORD *)this + 15) )
      {
        v27 = (char *)this - 72;
        if ( !v3 )
          v27 = 0LL;
        *a3 = v27;
        goto LABEL_118;
      }
      v6 = CSystemEffectWrapper::QIInternal(v3, v25, v8);
      if ( (v6 & 0x80000000) != 0 )
        return v6;
      v26 = (char *)this - 72;
      if ( !v3 )
        v26 = 0LL;
      *a3 = v26;
      return v6;
    }
    if ( (unsigned int)IsEqualGUID(v25, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768) )
    {
      v8 = (void **)((char *)this + 104);
      if ( *((_QWORD *)this + 13) )
      {
        v30 = (char *)this - 80;
        if ( !v3 )
          v30 = 0LL;
        *a3 = v30;
        goto LABEL_118;
      }
      v6 = CSystemEffectWrapper::QIInternal(v3, v28, v8);
      if ( (v6 & 0x80000000) != 0 )
        return v6;
      v29 = (char *)this - 80;
      if ( !v3 )
        v29 = 0LL;
      *a3 = v29;
      return v6;
    }
    if ( (unsigned int)IsEqualGUID(v28, &GUID_25385759_3236_4101_a943_25693dfb5d2d) )
    {
      v8 = (void **)((char *)this + 128);
      if ( *((_QWORD *)this + 16) )
      {
        v33 = (char *)this - 64;
        if ( !v3 )
          v33 = 0LL;
        *a3 = v33;
        goto LABEL_118;
      }
      v6 = CSystemEffectWrapper::QIInternal(v3, v31, v8);
      if ( (v6 & 0x80000000) != 0 )
        return v6;
      v32 = (char *)this - 64;
      if ( !v3 )
        v32 = 0LL;
      *a3 = v32;
      return v6;
    }
    if ( (unsigned int)IsEqualGUID(v31, &GUID_8ab91395_f920_4132_873f_7a40607f7901) )
    {
      v8 = (void **)((char *)this + 136);
      if ( *((_QWORD *)this + 17) )
      {
        v36 = (char *)this - 56;
        if ( !v3 )
          v36 = 0LL;
        *a3 = v36;
        goto LABEL_118;
      }
      v6 = CSystemEffectWrapper::QIInternal(v3, v34, v8);
      if ( (v6 & 0x80000000) != 0 )
        return v6;
      v35 = (char *)this - 56;
      if ( !v3 )
        v35 = 0LL;
      *a3 = v35;
      return v6;
    }
    if ( (unsigned int)IsEqualGUID(v34, &GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7) )
    {
      v8 = (void **)((char *)this + 112);
      if ( *((_QWORD *)this + 14) )
      {
        v39 = (char *)this - 48;
        if ( !v3 )
          v39 = 0LL;
        *a3 = v39;
        goto LABEL_118;
      }
      v6 = CSystemEffectWrapper::QIInternal(v3, v37, v8);
      if ( (v6 & 0x80000000) != 0 )
        return v6;
      v38 = (char *)this - 48;
      if ( !v3 )
        v38 = 0LL;
      *a3 = v38;
      return v6;
    }
    if ( (unsigned int)IsEqualGUID(v37, &GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4) )
    {
      v8 = (void **)((char *)this + 144);
      if ( *((_QWORD *)this + 18) )
      {
        v42 = (char *)this - 32;
        if ( !v3 )
          v42 = 0LL;
        *a3 = v42;
        goto LABEL_118;
      }
      v6 = CSystemEffectWrapper::QIInternal(v3, v40, v8);
      if ( (v6 & 0x80000000) != 0 )
        return v6;
      v41 = (char *)this - 32;
      if ( !v3 )
        v41 = 0LL;
      *a3 = v41;
      return v6;
    }
    if ( (unsigned int)IsEqualGUID(v40, &GUID_ca2cfbde_a9d6_4eb0_bc95_c4d026b380f0) )
    {
      if ( !*((_QWORD *)this + 19) )
      {
        v6 = CSystemEffectWrapper::QIInternal(v3, v44, (void **)this + 19);
        if ( (v6 & 0x80000000) != 0 )
          return v6;
        v45 = (char *)this - 32;
        if ( !v3 )
          v45 = 0LL;
        *a3 = v45;
        *((_QWORD *)this + 18) = *((_QWORD *)this + 19);
        return v6;
      }
      v46 = (char *)this - 32;
      if ( !v3 )
        v46 = 0LL;
    }
    else
    {
      if ( !(unsigned int)IsEqualGUID(v44, &GUID_0421e7a2_5d3d_4d19_9886_e8bdafa5822c) )
      {
        if ( (unsigned int)IsEqualGUID(v47, &GUID_00000038_0000_0000_c000_000000000046) )
        {
          v10 = (char *)this - 112;
          goto LABEL_115;
        }
        if ( !(unsigned int)IsEqualGUID(v48, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
          return CSystemEffectWrapper::QIInternal(v3, v50, v49);
        *v49 = v3;
        (*(void (__fastcall **)(CSystemEffectWrapper *))(*(_QWORD *)v3 + 8LL))(v3);
        return v6;
      }
      v46 = (char *)this - 24;
      if ( !v3 )
        v46 = 0LL;
    }
    *v43 = v46;
    (*(void (__fastcall **)(CSystemEffectWrapper *))(*(_QWORD *)v3 + 8LL))(v3);
    return 0LL;
  }
  v8 = (void **)((char *)this + 96);
  if ( *((_QWORD *)this + 12) )
    goto LABEL_43;
LABEL_32:
  v6 = CSystemEffectWrapper::QIInternal(v3, v21, v8);
  if ( (v6 & 0x80000000) != 0 )
    return v6;
  v22 = (char *)this - 88;
  if ( !v3 )
    v22 = 0LL;
  *a3 = v22;
  return v6;
}
