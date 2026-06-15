/*
 * XREFs of ?NDQueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011290
 * Callers:
 *     <none>
 * Callees:
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400116F0 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemEffectWrapper::NDQueryInterface(
        CSystemEffectWrapper *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 result; // rax
  void **v21; // r8
  char *v22; // rax
  char *v23; // rcx
  char *v24; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
  {
    if ( this )
      v24 = (char *)this + 8;
    else
      v24 = 0LL;
    *a3 = v24;
LABEL_63:
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4;
  if ( v7 )
  {
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data4;
    if ( v8 )
    {
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data4;
      if ( v9 )
      {
        v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1 )
          v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data4;
        if ( v10 )
        {
          v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1 )
            v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4;
          if ( v11 )
          {
            v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17.Data1 )
              v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17.Data4;
            if ( v12 )
            {
              v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data1;
              if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data1 )
                v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data4;
              if ( !v13 )
              {
                if ( *((_QWORD *)this + 28) )
                {
                  *a3 = (char *)this + 48;
                  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
                  return v3;
                }
                v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 28);
                if ( (v3 & 0x80000000) == 0 )
                {
                  v22 = (char *)this + 48;
                  goto LABEL_48;
                }
                return v3;
              }
              v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
              if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
                v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
              if ( v14 )
              {
                v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1;
                if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1 )
                  v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_25385759_3236_4101_a943_25693dfb5d2d.Data4;
                if ( v15 )
                {
                  v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_8ab91395_f920_4132_873f_7a40607f7901.Data1;
                  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_8ab91395_f920_4132_873f_7a40607f7901.Data1 )
                    v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_8ab91395_f920_4132_873f_7a40607f7901.Data4;
                  if ( v16 )
                  {
                    v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7.Data1;
                    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7.Data1 )
                      v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7.Data4;
                    if ( v17 )
                    {
                      v18 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4.Data1;
                      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4.Data1 )
                        v18 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4.Data4;
                      if ( v18 )
                      {
                        v19 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0421e7a2_5d3d_4d19_9886_e8bdafa5822c.Data1;
                        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0421e7a2_5d3d_4d19_9886_e8bdafa5822c.Data1 )
                          v19 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0421e7a2_5d3d_4d19_9886_e8bdafa5822c.Data4;
                        if ( v19 || !*((_QWORD *)this + 25) )
                          return CSystemEffectWrapper::QIInternal(this, a2, a3);
                        *a3 = (char *)this + 96;
                        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
                        return v3;
                      }
                      if ( !*((_QWORD *)this + 31) )
                      {
                        v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 31);
                        if ( (v3 & 0x80000000) != 0 )
                          return v3;
                        v22 = (char *)this + 88;
                        goto LABEL_48;
                      }
                      *a3 = (char *)this + 88;
                      goto LABEL_63;
                    }
                    if ( *((_QWORD *)this + 27) )
                    {
                      *a3 = (char *)this + 72;
                      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
                      return v3;
                    }
                    v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 27);
                    if ( (v3 & 0x80000000) == 0 )
                    {
                      v22 = (char *)this + 72;
                      goto LABEL_48;
                    }
                  }
                  else
                  {
                    if ( *((_QWORD *)this + 30) )
                    {
                      *a3 = (char *)this + 64;
                      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
                      return v3;
                    }
                    v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 30);
                    if ( (v3 & 0x80000000) == 0 )
                    {
                      v22 = (char *)this + 64;
                      goto LABEL_48;
                    }
                  }
                  return v3;
                }
                if ( *((_QWORD *)this + 29) )
                {
                  *a3 = (char *)this + 56;
                  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
                  return v3;
                }
                v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 29);
                if ( (v3 & 0x80000000) != 0 )
                  return v3;
                v22 = (char *)this + 56;
              }
              else
              {
                if ( *((_QWORD *)this + 26) )
                {
                  *a3 = (char *)this + 40;
                  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
                  return v3;
                }
                v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 26);
                if ( (v3 & 0x80000000) != 0 )
                  return v3;
                v22 = (char *)this + 40;
              }
LABEL_48:
              *a3 = v22;
              return v3;
            }
            v21 = (void **)((char *)this + 200);
          }
          else
          {
            v21 = (void **)((char *)this + 192);
          }
        }
        else
        {
          v21 = (void **)((char *)this + 184);
        }
        if ( !*v21 )
        {
          v3 = CSystemEffectWrapper::QIInternal(this, a2, v21);
          if ( (v3 & 0x80000000) != 0 )
            return v3;
          v22 = (char *)this + 32;
          goto LABEL_48;
        }
        *a3 = (char *)this + 32;
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
        return 0LL;
      }
      else
      {
        if ( *((_QWORD *)this + 21) )
        {
          *a3 = (char *)this + 24;
          (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
          return v3;
        }
        v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 21);
        if ( (v3 & 0x80000000) != 0 )
          return v3;
        *a3 = (char *)this + 24;
        return v3;
      }
    }
    else
    {
      if ( *((_QWORD *)this + 22) )
      {
        *a3 = (char *)this + 16;
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
        return v3;
      }
      v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 22);
      if ( (v3 & 0x80000000) != 0 )
        return v3;
      *a3 = (char *)this + 16;
      return v3;
    }
  }
  else if ( *((_QWORD *)this + 20) )
  {
    v23 = (char *)this + 8;
    *a3 = v23;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v23 + 8LL))(v23);
    return 0LL;
  }
  else
  {
    result = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 20);
    v3 = result;
    if ( (int)result < 0 )
      return v3;
    *a3 = (char *)this + 8;
  }
  return result;
}
