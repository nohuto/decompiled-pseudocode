/*
 * XREFs of sub_140B02560 @ 0x140B02560
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1403C0F20 @ 0x1403C0F20 (sub_1403C0F20.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     RtlLengthRequiredSid @ 0x14066A560 (RtlLengthRequiredSid.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     sub_14085CDA0 @ 0x14085CDA0 (sub_14085CDA0.c)
 *     sub_14085CEF8 @ 0x14085CEF8 (sub_14085CEF8.c)
 *     sub_140864194 @ 0x140864194 (sub_140864194.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B02560(int a1)
{
  int v1; // ecx
  NTSTATUS v2; // edi
  ULONG v4; // eax
  _DWORD *Pool2; // rax
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r8
  int ExplicitScope; // [rsp+20h] [rbp-28h]
  int ExplicitScopea; // [rsp+20h] [rbp-28h]
  LOGICAL CheckStamp; // [rsp+30h] [rbp-18h]
  LOGICAL CheckStampa; // [rsp+30h] [rbp-18h]
  char Buffer; // [rsp+50h] [rbp+8h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  Buffer = 0;
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      if ( byte_140C1F824 )
        sub_14085CDA0(dword_140C5AE20, dword_140C5AE1C);
      if ( dword_140D05250 )
      {
        v1 = 2;
      }
      else
      {
        if ( dword_140C1F8FC )
        {
LABEL_10:
          ZwUpdateWnfStateData(&stru_14000E628, &Buffer, 1u, 0LL, 0LL, 0, 0);
          if ( byte_140C5AC3C && !dword_140D05250 )
            ExSubscribeWnfStateChange(
              (int)&IdentifierAuthority,
              (int)&qword_140037870,
              1,
              0,
              (__int64)sub_140998940,
              0LL);
          return 0;
        }
        if ( byte_140C5AC3C )
        {
          if ( !byte_140C1F9D8 && !dword_140C5AE20 )
            sub_14085CEF8(1);
          goto LABEL_10;
        }
        v1 = 6;
      }
      sub_140864194(v1);
      goto LABEL_10;
    }
  }
  else
  {
    v4 = RtlLengthRequiredSid(6u);
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v4, 0x74654E50u);
    v6 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v2 = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
    if ( v2 < 0 )
    {
      ExFreePoolWithTag(v6, 0x74654E50u);
      return (unsigned int)v2;
    }
    v6[2] = 80;
    v6[3] = 1988685059;
    v6[4] = 1921232356;
    v6[5] = 378231328;
    v6[6] = -1590824699;
    v6[7] = 890457928;
    qword_140C1F8F0 = v6;
    sub_1403C0F20(
      (__int64)&unk_140C1F840,
      (__int64)sub_1405D8820,
      v7,
      (__int64)sub_1403DA240,
      ExplicitScope,
      0,
      CheckStamp);
    sub_1403C0F20(
      (__int64)&unk_140C1F920,
      (__int64)sub_1405D8850,
      v8,
      (__int64)sub_140998800,
      ExplicitScopea,
      5,
      CheckStampa);
  }
  return 0;
}
