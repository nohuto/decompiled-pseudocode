/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$IIterable@PEAUIInspectable@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DCC94
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAUIInspectable@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E17F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800E17F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAUIInspectable@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E1940 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800E1940.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // eax

  if ( *a2 == 56
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_9;
  }
  a1 += 8LL;
  if ( *a2 == 153846939
    && a2[1] == *(_DWORD *)&GUID_092b849b_60b1_52be_a44a_6fe8e933cbe4.Data2
    && a2[2] == *(_DWORD *)GUID_092b849b_60b1_52be_a44a_6fe8e933cbe4.Data4
    && a2[3] == *(_DWORD *)&GUID_092b849b_60b1_52be_a44a_6fe8e933cbe4.Data4[4] )
  {
    goto LABEL_9;
  }
  a1 += 8LL;
  if ( *a2 == -1796592748 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4 )
    {
      return 2147500034LL;
    }
    v4 = *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4];
  }
  else
  {
    if ( *a2 != 3
      || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4 )
    {
      return 2147500034LL;
    }
    v4 = *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4];
  }
  if ( a2[3] == v4 )
  {
LABEL_9:
    *a3 = a1;
    return 0LL;
  }
  return 2147500034LL;
}
