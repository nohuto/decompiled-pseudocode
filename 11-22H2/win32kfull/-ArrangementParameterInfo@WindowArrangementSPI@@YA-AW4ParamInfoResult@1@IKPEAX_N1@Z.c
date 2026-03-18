/*
 * XREFs of ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C0043964
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _anonymous_namespace_::UpdateThresholdFromMetric @ 0x1C0041364 (_anonymous_namespace_--UpdateThresholdFromMetric.c)
 *     _anonymous_namespace_::SetMonitorDockThresholds @ 0x1C0041A14 (_anonymous_namespace_--SetMonitorDockThresholds.c)
 *     _lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::operator() @ 0x1C00B813C (_lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_--operator().c)
 *     _lambda_2297c699848e7a7bff373177413c6db4_::operator() @ 0x1C00B819C (_lambda_2297c699848e7a7bff373177413c6db4_--operator().c)
 *     _lambda_88f23c52c0dc3ab6faf80570be987f32_::operator() @ 0x1C00B8CDC (_lambda_88f23c52c0dc3ab6faf80570be987f32_--operator().c)
 *     _lambda_484f3fc5f209b5786cb6c1066b9b753c_::operator() @ 0x1C00B8D3C (_lambda_484f3fc5f209b5786cb6c1066b9b753c_--operator().c)
 *     _lambda_17ffa216705245d0294b2aa95ba432df_::operator() @ 0x1C00B8D9C (_lambda_17ffa216705245d0294b2aa95ba432df_--operator().c)
 *     _lambda_0336b3a089846025bc79125dee2480fe_::operator() @ 0x1C00B8DFC (_lambda_0336b3a089846025bc79125dee2480fe_--operator().c)
 *     UpdateWinIniInt @ 0x1C01C86A0 (UpdateWinIniInt.c)
 */

__int64 __fastcall WindowArrangementSPI::ArrangementParameterInfo(
        unsigned int a1,
        unsigned int a2,
        int *a3,
        char a4,
        bool a5)
{
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  int v23; // esi
  unsigned int v24; // r14d
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // ecx
  char v39; // al
  BOOL v40; // [rsp+50h] [rbp+20h] BYREF

  LOBYTE(v40) = 0;
  if ( a1 <= 0x88 )
  {
    if ( a1 == 136 )
    {
      v39 = byte_1C03591F1;
      goto LABEL_61;
    }
    if ( a1 > 0x83 )
    {
      v25 = a1 - 132;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( !v26 )
        {
          if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                a2,
                                2,
                                (const wchar_t *)lambda_88f23c52c0dc3ab6faf80570be987f32_::_lambda_invoker_cdecl_) )
          {
            LOBYTE(v32) = a2;
            if ( (unsigned __int8)lambda_88f23c52c0dc3ab6faf80570be987f32_::operator()(v33, v32, 1LL) )
              anonymous_namespace_::UpdateThresholdFromMetric(a4, (bool *)&v40, &a5, 19, a2, 2);
          }
          goto LABEL_16;
        }
        v27 = v26 - 1;
        if ( v27 )
        {
          if ( v27 == 1
            && !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                a2,
                                3,
                                (const wchar_t *)lambda_0336b3a089846025bc79125dee2480fe_::_lambda_invoker_cdecl_) )
          {
            LOBYTE(v28) = a2;
            if ( (unsigned __int8)lambda_0336b3a089846025bc79125dee2480fe_::operator()(v29, v28, 1LL) )
              anonymous_namespace_::UpdateThresholdFromMetric(a4, (bool *)&v40, &a5, 20, a2, 3);
          }
          goto LABEL_16;
        }
        v39 = byte_1C03591ED;
      }
      else
      {
        v39 = byte_1C03591E9;
      }
      goto LABEL_61;
    }
    if ( a1 != 131 )
    {
      v7 = a1 - 126;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
        {
          if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                a2,
                                0,
                                (const wchar_t *)lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::_lambda_invoker_cdecl_) )
          {
            LOBYTE(v30) = a2;
            if ( (unsigned __int8)lambda_ba4a37c8ed6a49f000cd16e994d5fa6d_::operator()(v31, v30, 1LL) )
              anonymous_namespace_::UpdateThresholdFromMetric(a4, (bool *)&v40, &a5, 16, a2, 0);
          }
          goto LABEL_16;
        }
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              LOBYTE(v11) = dword_1C03591FC;
LABEL_11:
              v12 = v11 & 1;
LABEL_12:
              *a3 = v12;
              result = 0LL;
              goto LABEL_17;
            }
          }
          else if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                     a2,
                                     1,
                                     (const wchar_t *)lambda_2297c699848e7a7bff373177413c6db4_::_lambda_invoker_cdecl_) )
          {
            LOBYTE(v14) = a2;
            if ( (unsigned __int8)lambda_2297c699848e7a7bff373177413c6db4_::operator()(v15, v14, 1LL) )
              anonymous_namespace_::UpdateThresholdFromMetric(a4, (bool *)&v40, &a5, 17, a2, 1);
          }
          goto LABEL_16;
        }
        v39 = byte_1C03591E5;
      }
      else
      {
        v39 = byte_1C03591E1;
      }
LABEL_61:
      LOBYTE(v40) = v39;
      v12 = v40;
      goto LABEL_12;
    }
    v24 = 18;
    v23 = 1;
LABEL_50:
    if ( (unsigned int)CheckDesktopPolicy(0LL, v24) )
    {
      a5 = 0;
    }
    else if ( a4 )
    {
      LOBYTE(v40) = (unsigned int)UpdateWinIniInt(0LL, 4LL, v24, a2) != 0;
      a5 = v40;
    }
    if ( a5 )
    {
      if ( a2 )
        dword_1C03591FC |= v23;
      else
        dword_1C03591FC &= ~v23;
    }
    goto LABEL_16;
  }
  v16 = a1 - 137;
  if ( !v16 )
  {
    if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                          a2,
                          4,
                          (const wchar_t *)lambda_484f3fc5f209b5786cb6c1066b9b753c_::_lambda_invoker_cdecl_) )
    {
      LOBYTE(v36) = a2;
      if ( (unsigned __int8)lambda_484f3fc5f209b5786cb6c1066b9b753c_::operator()(v37, v36, 1LL) )
        anonymous_namespace_::UpdateThresholdFromMetric(a4, (bool *)&v40, &a5, 21, a2, 4);
    }
    goto LABEL_16;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v39 = byte_1C03591F5;
    goto LABEL_61;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                          a2,
                          5,
                          (const wchar_t *)lambda_17ffa216705245d0294b2aa95ba432df_::_lambda_invoker_cdecl_) )
    {
      LOBYTE(v34) = a2;
      if ( (unsigned __int8)lambda_17ffa216705245d0294b2aa95ba432df_::operator()(v35, v34, 1LL) )
        anonymous_namespace_::UpdateThresholdFromMetric(a4, (bool *)&v40, &a5, 22, a2, 5);
    }
    goto LABEL_16;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v11 = (unsigned int)dword_1C03591FC >> 1;
    goto LABEL_11;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v23 = 2;
    v24 = 624;
    goto LABEL_50;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    v11 = (unsigned int)dword_1C03591FC >> 2;
    goto LABEL_11;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    v23 = 4;
    v24 = 626;
    goto LABEL_50;
  }
  v38 = v22 - 1;
  if ( !v38 )
  {
    v11 = (unsigned int)dword_1C03591FC >> 3;
    goto LABEL_11;
  }
  if ( v38 == 1 )
  {
    v23 = 8;
    v24 = 625;
    goto LABEL_50;
  }
LABEL_16:
  result = v40;
LABEL_17:
  if ( a5 )
    return (unsigned int)result | 2;
  return result;
}
