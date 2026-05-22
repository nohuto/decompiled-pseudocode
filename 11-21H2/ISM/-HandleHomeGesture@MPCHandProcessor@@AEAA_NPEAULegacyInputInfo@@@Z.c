/*
 * XREFs of ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800A70B0
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800A81B0 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _lambda_152589ecad8ae636cc0bdcee60e887b4_::operator() @ 0x1800A6708 (_lambda_152589ecad8ae636cc0bdcee60e887b4_--operator().c)
 *     _lambda_a8ea4032c7598feaa37b761b815ce0d1_::operator() @ 0x1800A6810 (_lambda_a8ea4032c7598feaa37b761b815ce0d1_--operator().c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800AF840 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 */

char __fastcall MPCHandProcessor::HandleHomeGesture(MPCHandProcessor *this, struct LegacyInputInfo *a2)
{
  struct LegacyInputInfo *v2; // r8
  int v3; // edx
  int v5; // edx
  char v7; // al
  char v8; // cl
  bool v9; // al
  __int64 v10[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v11[2]; // [rsp+30h] [rbp-10h] BYREF
  struct LegacyInputInfo *v12; // [rsp+58h] [rbp+18h] BYREF

  v12 = a2;
  v11[0] = this;
  v2 = a2;
  v11[1] = &v12;
  v3 = *(_DWORD *)a2;
  v10[1] = (__int64)&v12;
  v10[0] = (__int64)this;
  v5 = v3 & 0x662600;
  if ( !v5 )
    goto LABEL_8;
  if ( *((_DWORD *)v2 + 16) == 9 )
  {
    lambda_a8ea4032c7598feaa37b761b815ce0d1_::operator()(v11, 4u);
    if ( *((_BYTE *)this + 9712) )
    {
      *((_BYTE *)this + 9712) = 0;
      lambda_152589ecad8ae636cc0bdcee60e887b4_::operator()(v10);
    }
    return 1;
  }
  if ( *((_DWORD *)v2 + 16) == 11 )
    v7 = 1;
  else
LABEL_8:
    v7 = 0;
  v8 = *((_BYTE *)this + 9712);
  if ( v8 != v7 || v8 && *((_DWORD *)this + 2429) != *((_DWORD *)v2 + 272) )
  {
    v9 = v5 && *((_DWORD *)v2 + 16) == 11;
    *((_BYTE *)this + 9712) = v9;
    *((_DWORD *)this + 2429) = *((_DWORD *)v2 + 272);
    lambda_152589ecad8ae636cc0bdcee60e887b4_::operator()(v10);
    v2 = v12;
  }
  MPCButtonHoldHelper::UpdateState(
    *((MPCButtonHoldHelper **)this + 461),
    *((_DWORD *)v2 + 303) == 16,
    *((_QWORD *)v2 + 2));
  if ( *((_BYTE *)this + 9720) && *(_BYTE *)(*((_QWORD *)this + 461) + 10LL) )
  {
    lambda_a8ea4032c7598feaa37b761b815ce0d1_::operator()(v11, 8u);
    return 1;
  }
  return 0;
}
