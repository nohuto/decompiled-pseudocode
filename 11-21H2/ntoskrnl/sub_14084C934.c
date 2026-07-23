/*
 * XREFs of sub_14084C934 @ 0x14084C934
 * Callers:
 *     sub_140B21F30 @ 0x140B21F30 (sub_140B21F30.c)
 * Callees:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     sub_140389ED0 @ 0x140389ED0 (sub_140389ED0.c)
 *     RtlIsMultiSessionSku @ 0x1407F4B80 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall sub_14084C934(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  BOOLEAN IsMultiSessionSku; // al
  char v7; // si
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-38h]
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int64 *v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+80h] [rbp+20h] BYREF
  int v16; // [rsp+84h] [rbp+24h]
  __int64 v17; // [rsp+88h] [rbp+28h] BYREF

  v16 = HIDWORD(a1);
  v12[0] = 3145774LL;
  v12[1] = L"WIN://ISMULTISESSIONSKU";
  v10[0] = 1;
  v14 = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  v15 = 2;
  v10[1] = 1;
  v11 = v12;
  v5 = sub_140389ED0(a1, a2, a3, a4);
  if ( v5 )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    DWORD2(v13) = 1;
    v7 = IsMultiSessionSku;
    LOBYTE(v4) = IsMultiSessionSku != 0;
    LOWORD(v13) = 6;
    v17 = v4;
    v14 = &v17;
    v8 = sub_140204870((__int64)v5, &v15, (__int64)v10);
    if ( _InterlockedCompareExchange64(&qword_140D010A8, (signed __int64)v5, 0LL) )
    {
      v8 = -1073741823;
      sub_14028AB90(v5);
    }
    else
    {
      byte_140C0C570 = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
