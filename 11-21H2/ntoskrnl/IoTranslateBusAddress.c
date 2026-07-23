/*
 * XREFs of IoTranslateBusAddress @ 0x1405604A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140821748 @ 0x140821748 (sub_140821748.c)
 *     sub_1408217D8 @ 0x1408217D8 (sub_1408217D8.c)
 *     sub_140821918 @ 0x140821918 (sub_140821918.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  int v5; // edi
  PULONG v6; // r14
  ULONG v9; // eax
  __int16 v10; // cx
  _QWORD *v11; // rsi
  __int64 v12; // r8
  char v13; // r12
  _QWORD *v14; // r14
  __int64 v15; // rdx
  int v16; // r15d
  __int64 v18; // [rsp+20h] [rbp-51h]
  __int64 v19; // [rsp+28h] [rbp-49h]
  __int128 *v20; // [rsp+30h] [rbp-41h]
  PVOID P; // [rsp+40h] [rbp-31h] BYREF
  __int64 v22; // [rsp+48h] [rbp-29h] BYREF
  PULONG v23; // [rsp+50h] [rbp-21h]
  __int128 v24; // [rsp+58h] [rbp-19h] BYREF
  int v25; // [rsp+68h] [rbp-9h]
  __int128 v26; // [rsp+70h] [rbp-1h] BYREF
  int v27; // [rsp+80h] [rbp+Fh]

  v5 = 0;
  v23 = AddressSpace;
  v27 = 0;
  v6 = AddressSpace;
  P = 0LL;
  v22 = 0LL;
  v25 = 0;
  v26 = 0LL;
  if ( KeGetCurrentIrql() || !qword_140C46278 )
  {
    *TranslatedAddress = BusAddress;
    return 1;
  }
  v9 = *AddressSpace;
  if ( *AddressSpace )
  {
    if ( v9 != 1 )
      return 0;
    v10 = 1;
  }
  else
  {
    v10 = 0;
    LOBYTE(v9) = 3;
  }
  WORD1(v24) = v10;
  LOBYTE(v24) = v9;
  BYTE1(v24) = 3;
  *(PHYSICAL_ADDRESS *)((char *)&v24 + 4) = BusAddress;
  HIDWORD(v24) = 1;
  sub_14077572C(0LL);
  v11 = (_QWORD *)sub_1408217D8((unsigned int)InterfaceType, BusNumber);
  if ( v11 == qword_140C46278 )
  {
LABEL_21:
    sub_140775698(0LL);
    if ( (unsigned __int8)v24 != 3 && (unsigned __int8)v24 != 7 )
    {
      if ( (unsigned __int8)v24 != 1 )
        return 0;
      v5 = 1;
    }
    *v6 = v5;
    *TranslatedAddress = *(PPHYSICAL_ADDRESS)((char *)&v24 + 4);
    return 1;
  }
  LOBYTE(v12) = v24;
  while ( 1 )
  {
    v13 = sub_140821748(1LL, v11, v12, &v22, v18, v19, v20);
    if ( !v13 )
    {
      if ( (int)sub_140821918(1LL, v11[4], v12, &P) >= 0 )
      {
        v14 = P;
        goto LABEL_14;
      }
LABEL_18:
      LOBYTE(v12) = v24;
      goto LABEL_19;
    }
    if ( v22 )
      break;
LABEL_19:
    v11 = (_QWORD *)v11[2];
    if ( v11 == qword_140C46278 )
    {
LABEL_20:
      v6 = v23;
      goto LABEL_21;
    }
  }
  v14 = *(_QWORD **)(v22 + 24);
LABEL_14:
  v20 = &v26;
  v19 = 0LL;
  v18 = 0LL;
  v16 = sub_14042A5E0(v14[1], &v24);
  if ( !v13 )
  {
    sub_14042A5E0(v14[1], v15);
    ExFreePoolWithTag(v14, 0);
  }
  if ( v16 >= 0 )
  {
    v25 = v27;
    v24 = v26;
    if ( v16 == 288 )
      goto LABEL_20;
    goto LABEL_18;
  }
  sub_140775698(0LL);
  return 0;
}
