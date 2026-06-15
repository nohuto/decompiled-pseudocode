/*
 * XREFs of ?GetNodeMode@CDisplayNode@@QEAAIXZ @ 0x140062AD0
 * Callers:
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x140063044 (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 */

__int64 __fastcall CDisplayNode::GetNodeMode(CDisplayNode *this)
{
  struct _GUID v1; // xmm0
  unsigned int v2; // r8d
  struct _GUID v4; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)this + 40LL) == 2 )
  {
    v1 = *(struct _GUID *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 24LL);
    v4 = v1;
    if ( IsEqualGUID(&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3, &v4) )
    {
      return 1;
    }
    else
    {
      v4 = v1;
      if ( !IsEqualGUID(&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf, &v4) )
      {
        v4 = v1;
        if ( IsEqualGUID(&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7, &v4) )
        {
          return 3;
        }
        else
        {
          v4 = v1;
          if ( IsEqualGUID(&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2, &v4) )
          {
            return 4;
          }
          else
          {
            v4 = v1;
            if ( IsEqualGUID(&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0, &v4) )
            {
              return 5;
            }
            else
            {
              v4 = v1;
              if ( IsEqualGUID(&GUID_461d14af_a88e_4be1_a809_d8bfd44b0121, &v4) )
              {
                return 9;
              }
              else
              {
                v4 = v1;
                if ( IsEqualGUID(&GUID_9cf2a70b_f377_403b_bd6b_360863e0355c, &v4) )
                {
                  return 6;
                }
                else
                {
                  v4 = v1;
                  if ( IsEqualGUID(&GUID_4780004e_7133_41d8_8c74_660dadd2c0ee, &v4) )
                  {
                    return 7;
                  }
                  else
                  {
                    v4 = v1;
                    return IsEqualGUID(&GUID_b26feb0d_ec94_477c_9494_d1ab8e753f6e, &v4) ? 8 : 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
