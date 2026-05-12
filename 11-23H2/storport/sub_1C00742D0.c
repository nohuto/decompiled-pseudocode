/*
 * XREFs of sub_1C00742D0 @ 0x1C00742D0
 * Callers:
 *     sub_1C0074260 @ 0x1C0074260 (sub_1C0074260.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0041CE0 @ 0x1C0041CE0 (sub_1C0041CE0.c)
 *     sub_1C0041F68 @ 0x1C0041F68 (sub_1C0041F68.c)
 *     sub_1C00425F0 @ 0x1C00425F0 (sub_1C00425F0.c)
 *     sub_1C0057DC8 @ 0x1C0057DC8 (sub_1C0057DC8.c)
 */

__int64 __fastcall sub_1C00742D0(__int64 a1, __int64 a2)
{
  int v3; // ebx
  UUID *v4; // rax
  UUID v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // al
  UUID v9; // xmm0
  __int64 result; // rax
  PVOID P[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  UUID Uuid; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h]

  Uuid = 0LL;
  v14 = 0LL;
  *(_OWORD *)P = 0LL;
  v3 = sub_1C0057DC8(0x48536152u, (unsigned __int16 *)(a1 + 112), (struct _STRING *)P);
  if ( v3 < 0 )
    return 3221225473LL;
  ExAcquireResourceExclusiveLite((PERESOURCE)&stru_1C0093880.DeviceExtension, 1u);
  v4 = (UUID *)sub_1C0041F68(&v12, (const STRING *)P);
  v5 = *v4;
  v6 = *(_QWORD *)&v4->Data1;
  Uuid = v5;
  v7 = v6 - v14;
  if ( !v7 )
    v7 = *(_QWORD *)Uuid.Data4 - *((_QWORD *)&v14 + 1);
  if ( !v7 )
  {
    v3 = ExUuidCreate(&Uuid);
    if ( v3 >= 0 )
    {
      v3 = sub_1C00425F0(P[1], LOWORD(P[0]), &Uuid);
      if ( v3 >= 0 )
        v3 = sub_1C0041CE0((__int64)P[1], LOWORD(P[0]), (struct _STRING *)&Uuid);
    }
  }
  ExReleaseResourceLite((PERESOURCE)&stru_1C0093880.DeviceExtension);
  ExFreePoolWithTag(P[1], 0x48536152u);
  if ( v3 < 0 )
    return 3221225473LL;
  v8 = *(_BYTE *)a2 & 0xF1;
  P[0] = (PVOID)0x202020205446534DLL;
  v9 = Uuid;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)a2 = v8 | 1;
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a2 + 1) & 0xC0 | 1;
  *(PVOID *)(a2 + 4) = P[0];
  result = 0LL;
  *(UUID *)(a2 + 12) = v9;
  return result;
}
