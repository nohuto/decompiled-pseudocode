/*
 * XREFs of sub_1C0074730 @ 0x1C0074730
 * Callers:
 *     sub_1C0074540 @ 0x1C0074540 (sub_1C0074540.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0041DFC @ 0x1C0041DFC (sub_1C0041DFC.c)
 *     sub_1C0041FE4 @ 0x1C0041FE4 (sub_1C0041FE4.c)
 *     sub_1C0042738 @ 0x1C0042738 (sub_1C0042738.c)
 *     sub_1C00A1480 @ 0x1C00A1480 (sub_1C00A1480.c)
 *     sub_1C00A18DC @ 0x1C00A18DC (sub_1C00A18DC.c)
 */

__int64 __fastcall sub_1C0074730(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rsi
  ULONG v5; // r14d
  int v6; // eax
  int v7; // edi
  UUID *v8; // rax
  UUID v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  char v13; // al
  UUID v14; // xmm0
  int v15; // [rsp+30h] [rbp-39h] BYREF
  __int64 p_Uuid; // [rsp+38h] [rbp-31h] BYREF
  struct _UNICODE_STRING v17; // [rsp+48h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  __int128 v19; // [rsp+68h] [rbp-1h] BYREF
  UUID Uuid; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v21; // [rsp+88h] [rbp+1Fh]

  v2 = *(unsigned __int8 **)(a1 + 136);
  v15 = 16;
  v5 = v2[3] | (v2[2] << 8);
  p_Uuid = (__int64)&Uuid;
  v21 = 0LL;
  DestinationString = 0LL;
  v17 = 0LL;
  Uuid = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v17, L"GeneratedID");
  v6 = sub_1C00A18DC(
         *(_QWORD *)(a1 + 8),
         (unsigned int)&DestinationString,
         (unsigned int)&v17,
         3,
         (__int64)&p_Uuid,
         (__int64)&v15);
  if ( v6 == -1073741772 )
  {
    v7 = 0;
    ExAcquireResourceExclusiveLite((PERESOURCE)&stru_1C0093880.Dpc.DpcData, 1u);
    v8 = (UUID *)sub_1C0041FE4(&v19, (__int64)v2);
    v9 = *v8;
    v10 = *(_QWORD *)&v8->Data1;
    Uuid = v9;
    v11 = v10 - v21;
    if ( !v11 )
      v11 = *(_QWORD *)Uuid.Data4 - *((_QWORD *)&v21 + 1);
    if ( !v11 )
    {
      v7 = ExUuidCreate(&Uuid);
      if ( v7 >= 0 )
      {
        v7 = sub_1C0042738(v2, v5, &Uuid);
        if ( v7 >= 0 )
          v7 = sub_1C0041DFC(v2, v5, &Uuid);
      }
    }
    ExReleaseResourceLite((PERESOURCE)&stru_1C0093880.Dpc.DpcData);
    if ( v7 < 0 )
      return 3221225473LL;
    v6 = sub_1C00A1480(*(_QWORD *)(a1 + 8), (unsigned int)&DestinationString, (unsigned int)&v17, 3, p_Uuid, v15);
  }
  if ( v6 < 0 )
    return 3221225473LL;
  v13 = *(_BYTE *)a2 & 0xF1;
  p_Uuid = 0x202020205446534DLL;
  v14 = Uuid;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)a2 = v13 | 1;
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a2 + 1) & 0xC0 | 1;
  *(_QWORD *)(a2 + 4) = p_Uuid;
  result = 0LL;
  *(UUID *)(a2 + 12) = v14;
  return result;
}
